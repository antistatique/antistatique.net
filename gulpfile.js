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
 * Init project
 */
gulp.task('init', function() {
  return gulp.src('bower_components/bootstrap-sass/assets/stylesheets/bootstrap/_variables.scss')
    .pipe($.rename('bootstrap-variables.scss'))
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/assets/sass'))
});


/**
 * Build vendors dependencies
 */
gulp.task('vendors', function() {
  return gulp.start('css-vendors', 'js-vendors', 'fonts', 'polyfills');
});

/**
 * CSS VENDORS
 */
gulp.task('css-vendors', function() {
  return gulp.src([
      ''
    ])
    .pipe($.concat('vendors.css'))
    .pipe($.minifyCss())
    .pipe($.size({title: "CSS VENDORS", showFiles: true}))
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/css'));
});

/**
 * JS VENDORS
 * (with jQuery and Bootstrap dependencies first)
 */

gulp.task('js-vendors', function() {
  return gulp.src([
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
    .pipe($.size({title: "JS VENDORS", showFiles: true}))
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/js'));
});


/**
 * FONTS SOURCES
 * Important to add the bootstrap fonts to avoid issues with the fonts include path
 */
gulp.task('fonts', function() {
  return gulp.src([
      'bower_components/font-awesome/fonts/*',
      'bower_components/bootstrap-sass/assets/fonts/bootstrap/*',
      'drupal/sites/all/themes/antistatique/assets/fonts/*'
    ])
    .pipe($.size({title: "FONTS"}))
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/fonts'));
});

/**
 * POLYFILLS SOURCES
 * Various polyfills required for old IE
 */
gulp.task('polyfills', function() {
  return gulp.src([
      'bower_components/html5shiv/dist/html5shiv.js',
      'bower_components/respond/dest/respond.src.js'
    ])
    .pipe($.concat('polyfills.min.js'))
    .pipe($.uglify())
    .pipe($.size({title: "POLYFILLS", showFiles: true}))
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/js'));
});

/**
 * Copy images
 */
gulp.task('img', ['svg'], function() {
  return gulp.src([
      'drupal/sites/all/themes/antistatique/assets/img/**/*'
    ])
    .pipe($.size({title: "IMAGES"}))
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/img'));

});

gulp.task('svg', function(){
  gulp.src([
      'drupal/sites/all/themes/antistatique/assets/svg/**/*'
    ])
    .pipe($.svgmin())
    .pipe($.size({title: "SVG"}))
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/svg'));
});

/**
 * Build styles from SCSS files
 * With error reporting on compiling (so that there's no crash)
 */
gulp.task('styles', function() {
  if (argv.production) { console.log('[styles] Production mode' ); }
  else { console.log('[styles] Dev mode') }

  return gulp.src('drupal/sites/all/themes/antistatique/assets/sass/main.scss')
    .pipe($.if(!argv.production, $.sourcemaps.init()))
    .pipe($.sass({
      outputStyle: 'nested', // libsass doesn't support expanded yet
      precision: 10,
      includePaths: ['.']
    }))
    .on('error', $.notify.onError({
      title: function(error) {
        return error.message
      },
      message: function(error) {
        return error.fileName + ':' + error.lineNumber
      }
    }))
    .pipe($.postcss([
      require('autoprefixer-core')({
        browsers: ['last 2 versions', 'safari 5', 'ie 8', 'ie 9', 'ff 27', 'opera 12.1'],
        options: {
          map: true
        }
      })
    ]))
    .pipe($.if(!argv.production, $.sourcemaps.write()))
    .pipe($.if(argv.production, $.minifyCss()))
    .pipe($.size({title: "STYLES", showFiles: true}))
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/css'));
});

/**
 * Build styles from SCSS files
 * Only for STYLEGUIDE styles
 */
gulp.task('styleguide-styles', function() {
  return gulp.src('drupal/sites/all/themes/antistatique/assets/sass/styleguide.scss')
    .pipe($.sass({
      outputStyle: 'nested', // libsass doesn't support expanded yet
      precision: 10,
      includePaths: ['.']
    }))
    .on('error', $.notify.onError({
      title: function(error) {
        return error.message
      },
      message: function(error) {
        return error.fileName + ':' + error.lineNumber
      }
    }))
    .pipe($.postcss([
      require('autoprefixer-core')({
        browsers: ['last 2 versions', 'safari 5', 'ie 8', 'ie 9', 'ff 27', 'opera 12.1'],
        options: {
          map: true
        }
      })
    ]))
    .pipe($.minifyCss())
    .pipe($.size({title: "STYLEGUIDE STYLES", showFiles: true}))
    .pipe(gulp.dest('styleguide/css'));
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
    .pipe($.size({title: "JS SCRIPTS", showFiles: true}))
    .pipe(gulp.dest('drupal/sites/all/themes/antistatique/build/js'));
});

/**
 * Build Hologram Styleguide
 */
gulp.task('styleguide', function () {
  return gulp.src('hologram_config.yml')
    .pipe($.hologram({bundler:true}));
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
 gulp.task('clean', del.bind(null, ['drupal/sites/all/themes/antistatique/build', 'styleguide']));

 /**
  * Serve
  */
gulp.task('serve', ['default'], function () {
  browserSync({
    server: {
      baseDir: ['styleguide'],
    },
    open: false
  });
  gulp.watch(['drupal/sites/all/themes/antistatique/assets/sass/**/*.scss'], function() {
    runSequence('styles', 'styleguide', 'styleguide-styles', reload);
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
 * Deploy to GH pages
 */

gulp.task('deploy', function () {
  return gulp.src("styleguide/**/*")
    .pipe($.ghPages());
});

/**
 * Task to build assets on production server
 */
gulp.task('build',['clean'], function() {
  argv.production = true;
  return gulp.start('vendors', 'styles', 'img', 'scripts');
});

/**
 * Default task
 */
gulp.task('default', ['clean'], function(cb) {
  var styleguide_styles = argv.production ? '' : 'styleguide-styles';
  runSequence(['js-vendors', 'css-vendors', 'polyfills', 'fonts', 'styles', 'img', 'scripts', 'twig'], 'styleguide', styleguide_styles, cb);
});

