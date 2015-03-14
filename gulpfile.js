'use strict';

/**
 * Import plugins
 */
var gulp = require('gulp'),
    $ = require('gulp-load-plugins')(),
    browserSync = require('browser-sync'),
    reload = browserSync.reload,
    runSequence = require('run-sequence'),
    argv = require('yargs').argv,
    del = require('del');

/**
 * Build vendors dependencies
 */
gulp.task('vendors', function() {

  /**
   * CSS VENDORS
   */
  gulp.src([
        ''
      ])
      .pipe($.concat('vendors.css'))
      .pipe($.minifyCss())
      .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/css'));

  /**
   * JS VENDORS
   * (with jQuery and Bootstrap dependencies first)
   */

  gulp.src([
      'bower_components/bootstrap-sass/assets/javascripts/bootstrap/affix.js',
      'bower_components/bootstrap-sass/assets/javascripts/bootstrap/alert.js',
      'bower_components/bootstrap-sass/assets/javascripts/bootstrap/button.js',
      'bower_components/bootstrap-sass/assets/javascripts/bootstrap/carousel.js',
      'bower_components/bootstrap-sass/assets/javascripts/bootstrap/collapse.js',
      'bower_components/bootstrap-sass/assets/javascripts/bootstrap/dropdown.js',
      'bower_components/bootstrap-sass/assets/javascripts/bootstrap/modal.js',
      'bower_components/bootstrap-sass/assets/javascripts/bootstrap/tooltip.js',
      'bower_components/bootstrap-sass/assets/javascripts/bootstrap/popover.js',
      'bower_components/bootstrap-sass/assets/javascripts/bootstrap/scrollspy.js',
      'bower_components/bootstrap-sass/assets/javascripts/bootstrap/tab.js',
      'bower_components/bootstrap-sass/assets/javascripts/bootstrap/transition.js'
    ])
    .pipe($.concat('vendors.min.js'))
    .pipe($.uglify())
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/js'));


  /**
   * FONTS SOURCES
   * Important to add the bootstrap fonts to avoid issues with the fonts include path
   */
  gulp.src([
      'bower_components/font-awesome/fonts/*',
      'bower_components/bootstrap-sass/assets/fonts/bootstrap/*',
      'drupal/sites/all/themes/antistatique/assets/fonts/*'
    ])
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/fonts'));

  /**
   * POLYFILLS SOURCES
   * Various polyfills required for old IE
   */
  gulp.src([
      'bower_components/html5shiv/dist/html5shiv.js',
      'bower_components/respond/dest/respond.src.js'
    ])
    .pipe($.concat('polyfills.min.js'))
    .pipe($.uglify())
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/js'));
});

/**
 * Copy images
 */
gulp.task('img', function() {
  gulp.src([
      'drupal/sites/all/themes/antistatique/assets/img/**/*'
    ])
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/img'));

  gulp.src([
      'drupal/sites/all/themes/antistatique/assets/svg/**/*'
    ])
    .pipe($.svgmin())
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/svg'));
});

/**
 * Build styles from SCSS files
 * With error reporting on compiling (so that there's no crash)
 */
gulp.task('styles', function() {
  if (!argv.dev) { console.log('[styles] Processing minified styles.' ); }
  else { console.log('[styles] Processing styles for dev env. No minifying here, for sourcemaps!') }

  return gulp.src('drupal/sites/all/themes/antistatique/assets/sass/main.scss')
    .pipe($.sass({errLogToConsole: true}))
    .pipe($.if(argv.dev, $.sourcemaps.init()))
    .pipe($.autoprefixer({
      browsers: ['last 2 versions', 'safari 5', 'ie 8', 'ie 9', 'ff 27', 'opera 12.1']
    }))
    .pipe($.if(argv.dev, $.sourcemaps.write()))
    .pipe($.if(!argv.dev, $.minifyCss()))
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/css'));
});

/**
 * Build styles from SCSS files
 * Only for STYLEGUIDE styles
 */
gulp.task('styleguide-styles', function() {
  return gulp.src('drupal/sites/all/themes/antistatique/assets/sass/styleguide.scss')
    .pipe($.sass({errLogToConsole: true}))
    .pipe($.autoprefixer({
      browsers: ['last 2 versions', 'safari 5', 'ie 8', 'ie 9', 'ff 27', 'opera 12.1']
    }))
    .pipe($.minifyCss())
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/css'));
});

/**
 * Build JS
 * With error reporting on compiling (so that there's no crash)
 * And jshint check to highlight errors as we go.
 */
gulp.task('scripts', function() {
  return gulp.src('drupal/sites/all/themes/antistatique/assets/js/*.js')
    .pipe($.jshint())
    .pipe($.jshint.reporter('jshint-stylish'))
    .pipe($.concat('main.js'))
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/js'))
    .pipe($.rename({ suffix: '.min' }))
    .pipe($.uglify())
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/js'));
});

/**
 * Build Hologram Styleguide
 */
gulp.task('styleguide', ['twig'], function () {
  return gulp.src('hologram_config.yml')
    .pipe($.hologram());
});


/**
 * Compile TWIG example pages
 */

gulp.task('twig', function () {
    return gulp.src('drupal/sites/all/themes/antistatique/assets/pages/*.twig')
        .pipe($.twig())
        .pipe(gulp.dest('styleguide/pages'));
});


/**
 * Clean output directories
 */
gulp.task('clean', del.bind(null, ['build', 'styleguide']));

/**
 * Serve
 */
gulp.task('serve', ['styles', 'scripts', 'twig'], function () {
  browserSync({
    server: {
      baseDir: ['styleguide'],
    },
    open: false
  });
  gulp.watch(['drupal/sites/all/themes/antistatique/assets/sass/**/*.scss'], function() {
    runSequence('styles', 'styleguide', reload);
  });
  gulp.watch(['drupal/sites/all/themes/antistatique/assets/sass/styleguide.scss'], function() {
    runSequence('styleguide-styles', 'styleguide', reload);
  });
  gulp.watch(['drupal/sites/all/themes/antistatique/assets/img/**/*'], function() {
    runSequence('img', 'styleguide', reload);
  });
  gulp.watch(['drupal/sites/all/themes/antistatique/assets/js/**/*.js'], function() {
    runSequence('scripts', reload);
  });

  gulp.watch(['drupal/sites/all/themes/antistatique/assets/pages/**/*'], function() {
    // clean folder before compiling
    del.bind(null, ['styleguide/pages'])
    runSequence('twig', reload);
  });

});

/**
 * Task to build assets on production server
 */
gulp.task('build',['clean'], function() {
    runSequence('vendors', 'styles', 'img', 'scripts');
});

/**
 * Default task
 */
gulp.task('default', ['clean'], function(cb) {
  runSequence('vendors', 'styles', 'img', 'scripts','twig', 'styleguide-styles', 'styleguide', cb);
});

