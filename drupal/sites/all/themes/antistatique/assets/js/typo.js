'use strict';

/*jshint -W030 */

(function($) {

  $(document).ready(function() {
    // Avoid single word on last line of paragraph
    $('.main-content').find('h1,h2,h3,li,p').each(function() {
      $(this).html($(this).html().replace(/\s([^\s<]+)\s*$/,'&nbsp;$1'));
    });
  });
})(jQuery);
