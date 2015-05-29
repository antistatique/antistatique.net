'use strict';
(function($) {
  $('.ctools-jump-menu-select').selectpicker({
    style: 'btn-link-dropdown'
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
