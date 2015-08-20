'use strict';

/* global emojify, jQuery */

(function(emojify, $){
    $(document).ready(function() {
      console.log('Hello6');
      emojify.setConfig({
          img_dir          : '/sites/all/themes/antistatique/build/img/'
      });
      emojify.run($('.main-content').get(0));
    });
  }(emojify, jQuery));
