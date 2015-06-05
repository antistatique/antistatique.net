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


  // say hi
  if (window.console) {
    console.log('%cAntistatique', 'font-size:100px; color: #EE257A; font-family: "Arial"; font-weight: 600;');
  }

})(jQuery);
