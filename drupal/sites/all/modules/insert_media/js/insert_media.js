
/**
 *  @file
 *  This file handles the JS for Media Module functions.
 */

(function ($) {

  /**
   * Loads media browsers and callbacks, specifically for media as a field.
   */
  Drupal.behaviors.mediaElement = {
    attach: function (context, settings) {
      // Options set from media.fields.inc for the types, etc to show in the browser.
      // For each widget (in case of multi-entry)
      $('.media-widget', context).once('mediaBrowserLaunch', function () {
        var options = settings.media.elements[this.id];
        var fileName = $(this).attr('ref');
        if(typeof(settings.insert_media) != "undefined" && settings.insert_media !== null) {
          var insertMediaOptions = settings.insert_media[fileName];
        }

        globalOptions = {};
        if (options.global != undefined) {
          var globalOptions = options.global;
        }
        var fidField = $('.fid', this);
        var previewField = $('.preview', this);
        var removeButton = $('.remove', this); // Actually a link, but looks like a button.
        var mediaWidget = $(this);
        var insertContainer = $('.insert-container', this);
        var imageCropContainer = $('.imagecrop', this);

        removeButton.css('display', 'none');
        // Show the Remove button if there's an already selected media.
        if (fidField.val() != 0) {
          removeButton.css('display', 'inline-block');
        }

        // When someone clicks the link to pick media (or clicks on an existing thumbnail)
        $('.launcher', this).bind('click', function () {
          // Launch the browser, providing the following callback function
          // @TODO: This should not be an anomyous function.
          Drupal.media.popups.mediaBrowser(function (mediaFiles) {
            if (mediaFiles.length < 0) {
              return;
            }
            var mediaFile = mediaFiles[0];

            // Set the value of the filefield fid (hidden).
            fidField.val(mediaFile.fid);
            var preview = mediaFile.preview;
            var output;
            if (insertMediaOptions) {
              if (insertMediaOptions.bundle instanceof Object) {
                insertMediaOptions.bundle = insertMediaOptions.bundle[0];
              }

              if (insertMediaOptions.element_id instanceof Object) {
                insertMediaOptions.element_id = insertMediaOptions.element_id[0];
              }

              if (insertMediaOptions.element_name instanceof Object) {
                insertMediaOptions.element_name = insertMediaOptions.element_name[0];
              }

              if (insertMediaOptions.entity_type instanceof Object) {
                insertMediaOptions.entity_type = insertMediaOptions.entity_type[0];
              }

              if (insertMediaOptions.field_name instanceof Object) {
                insertMediaOptions.field_name = insertMediaOptions.field_name[0];
              }

              if (insertMediaOptions.style_options instanceof Object) {
                insertMediaOptions.style_options = insertMediaOptions.style_options[0];
              }

              var previewFileID = $(preview).find('.media-filename').attr('ref');

              var data = {
                'fileid' : previewFileID,
                'options' : insertMediaOptions
              };
              insertContainer.remove();
              imageCropContainer.remove();
              $.post('/insert-media', data, function(response) {
                // Add the Insert and Imagecrop widget HTML.

                mediaWidget.prepend($(response).closest('.insert-container'));
                removeButton.after($(response).closest('.imagecrop'));
                // Attach behaviors from the Insert module.
                Drupal.attachBehaviors($(mediaWidget));
                insertContainer = $(mediaWidget).find('.insert-container');
                imageCropContainer = $(mediaWidget).find('.imagecrop');
              });
            }
            // Set the preview field HTML.
            previewField.html(preview);
            // Show the Remove button.
            removeButton.show();
            }, globalOptions);
            return false;
          });

        // When someone clicks the Insert button.
        $('.insert', this).bind('click', function (e) {
              var editor = $('#edit-body textarea.text-full').get(0);
              var fid = fidField.val();

              if (fid > 0) {
                  var content = '[[{"fid":' + fid + ',"view_mode":"full","attributes":{"class":"image-inline"}}]]';
                  var scroll = editor.scrollTop;

                  if (editor.selectionStart || editor.selectionStart == '0') {
                      var startPos = editor.selectionStart;
                      var endPos = editor.selectionEnd;

                      editor.value = editor.value.substring(0, startPos) + content + editor.value.substring(endPos, editor.value.length);
                  }
                  else {
                      editor.value += content;
                  }

                  editor.scrollTop = scroll;
              }

              e.preventDefault();
          });

        // When someone clicks the Remove button.
        $('.remove', this).bind('click', function () {
              // Set the value of the filefield fid (hidden).
              fidField.val(0);
              // Set the preview field HTML.
              previewField.html('');
              // Hide the Remove button.
              removeButton.hide();
              // Remove insert Widget.
              insertContainer.remove();
              imageCropContainer.remove();
              return false;
          });

        $('.media-edit-link', this).bind('click', function () {
              var fid = fidField.val();
              if (fid) {
                  Drupal.media.popups.mediaFieldEditor(fid, function (r) { alert(r); });
              }
              return false;
          });
      });
    }
  };

})(jQuery);
