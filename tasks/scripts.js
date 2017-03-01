import gulp from 'gulp';
import config from '../gulp_config.json';
import yargs from 'yargs';

import loadPlugins from 'gulp-load-plugins';
const $ = loadPlugins();

function errorAlert(error){
  if (!yargs.argv.production) {
    $.notify.onError({title: 'JS Error', message: 'Check your terminal', sound: 'Sosumi'})(error);
    $.util.log(error.messageFormatted);
  }
  this.emit('end');
}

/**
 * Build JS
 * With error reporting on compiling (so that there's no crash)
 * And jshint check to highlight errors as we go.
 */
gulp.task('scripts', function() {

});
export const scriptsBuild = () => {
  return gulp.src(config.assets + 'js/*.js')
    .pipe($.plumber({errorHandler: errorAlert}))
    .pipe($.concat('main.js'))
    .pipe($.if(yargs.argv.production, $.uglify()))
    .pipe($.size({title: 'JS SCRIPTS', showFiles: true}))
    .pipe(gulp.dest(config.build + 'js'));
};

export const scripts = gulp.series(scriptsBuild);
export const scriptsTask = gulp.task('scripts', scripts);
