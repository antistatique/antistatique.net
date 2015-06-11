'use strict';
(function($) {

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
    $(this)
      .addClass('embed-responsive-item')
      .wrap('<div class="embed-responsive embed-responsive-16by9"></div>');
  });

  // display shop open/closed sign
  var d = new Date();
  var hours = d.getHours();
  var minutes = d.getMinutes();
  var time = hours + ':' + minutes;

  if ((hours == 8 && minutes >= 30) || (hours >= 9 && hours < 18)) {
    $('.shop-sign.open').show();
    $('.shop-sign.closed').hide();
  } else {
    $('.shop-sign.open').hide();
    $('.shop-sign.closed').show();
  }


  // say hi
  if (window.console) {
    console.log('%cAntistatique', 'font-size:100px; color: #EE257A; font-family: "Arial"; font-weight: 600;');
  }

})(jQuery);
