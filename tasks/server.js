'use strict';

var gulp          = require('gulp'),
    $             = require('gulp-load-plugins')(),
    config        = require('../gulp_config.json'),
    browserSync   = require('browser-sync'),
    runSequence   = require('run-sequence');

module.exports = function() {

  var reload = browserSync.reload;

 /**
  * Serve
  */
  gulp.task('serve', ['default'], function () {
    browserSync({
      server: {
        baseDir: [config.app.basedir]
      },
      open: false
    });
    gulp.watch([config.assets + 'sass/**/*.scss'], function() {
      runSequence('styles', 'metalsmith', reload);
    });
    gulp.watch([config.assets + 'sass/styleguide.scss', config.assets + 'sass/styleguide-variables.scss'], function() {
      runSequence('metalsmith-styles', 'metalsmith', reload);
    });
    gulp.watch([config.assets + 'img/**/*', config.assets + 'svg/**/*'], function() {
      runSequence('img', 'metalsmith', reload);
    });
    gulp.watch([config.assets + 'icons/**/*'], function() {
      runSequence('icons', 'metalsmith', reload);
    });
    gulp.watch([config.assets + 'js/**/*.js'], function() {
      runSequence('scripts', 'metalsmith', reload);
    });
    gulp.watch([
      config.assets + 'components/**/*.{html,hbs,md,swig}',
      config.assets + 'templates/**/*.{html,hbs,md,swig}',
      config.assets + 'docs/**/*.md',
      config.assets + 'data/**/*.{json,yml}'
    ], function() {
      runSequence('metalsmith-docs', reload);
    });
  });

}
