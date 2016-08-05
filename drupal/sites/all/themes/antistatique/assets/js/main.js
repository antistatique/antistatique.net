'use strict';
(function($) {
  $(document).ready(function(){
    var selectpickerTarget = $('.ctools-jump-menu-select'),
        isMobile = true, // always use a select option is more accessible
        options = {
          style: 'btn-link-dropdown',
          mobile: isMobile
        };

    $(selectpickerTarget).selectpicker(options).hover(function() {
      $(this).parent().find('button').toggleClass('hover');
    });

    // wrap iframes in blog content
    var iframes = $('.blog-content').find('iframe');
    $.each(iframes, function() {
      var $iframe = $(this);
      if (!$iframe.hasClass('instagram-media')) {
        $iframe
          .addClass('embed-responsive-item')
          .wrap('<div class="embed-responsive embed-responsive-16by9"></div>');
      }
    });

    // display shop open/closed sign
    function isDST(t) { //t is the date object to check, returns true if daylight saving time is in effect.
      var jan = new Date(t.getFullYear(),0,1);
      var jul = new Date(t.getFullYear(),6,1);
      return Math.min(jan.getTimezoneOffset(),jul.getTimezoneOffset()) === t.getTimezoneOffset();
    }
    var d = new Date();
    var hours = isDST(d) ? d.getUTCHours() + 2 : d.getUTCHours() + 1;
    var minutes = d.getUTCMinutes();
    var day = d.getUTCDay();
    var isWeekDay = day > 0 && day < 6;

    if (isWeekDay && ((hours === 8 && minutes >= 30) || (hours >= 9 && hours < 18))) {
      $('.shop-sign.open').show();
      $('.shop-sign.closed').hide();
    } else {
      $('.shop-sign.open').hide();
      $('.shop-sign.closed').show();
    }

    // enable tooltips
    $('[data-toggle="tooltip"]').tooltip();

    // say hi
    if (window.console) {
      console.log('%cAntistatique', 'font-size:100px; color: #EE257A; font-family: "Arial"; font-weight: 600;');
    }
  });

})(jQuery);
