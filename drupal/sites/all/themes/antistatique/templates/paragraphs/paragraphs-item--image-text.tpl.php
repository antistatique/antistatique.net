<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
hide($content['field_alignment']);
$alignment = $content['field_alignment'][0]['#markup'];
if (isset($content['field_device'])) $device = $content['field_device'][0]['#markup'];
$browser = '';
if (isset($content['field_browser']) && $content['field_browser']['#items'][0]['value']) {
  $browser = '<div class="browser-window">
                <div class="browser-buttons">
                  <div class="browser-close"></div>
                  <div class="browser-minimize"></div>
                  <div class="browser-maximize"></div>
                </div>
                <div class="browser-input"></div>
                <div class="browser-new-tab"></div>
              </div>';
}
?>
<?php if (isset($device)): ?>
  <div class="<?php print $classes; ?> table-wrapper container"<?php print $attributes; ?>>
    <!-- <div class="spacer spacer-md"></div> -->
    <div class="row content table-row"<?php print $content_attributes; ?>>
      <?php if ($alignment == 'left'): ?>
          <div class="col-xs-5 col-sm-offset-1 col-sm-4 no-float">
            <div class="marvel-device <?php print $device; ?> silver">
                <div class="top-bar"></div>
                <div class="sleep"></div>
                <div class="volume"></div>
                <div class="screen">
                  <?php print render($content['field_image']); ?>
                </div>
                <div class="bottom-bar"></div>
            </div>
          </div>
          <div class="col-xs-7 col-sm-6 no-float">
            <?php print render($content['field_body']); ?>
          </div>
      <?php else: ?>
          <div class="col-xs-7 col-sm-offset-1 col-sm-6 no-float">
            <?php print render($content['field_body']); ?>
          </div>
          <div class="col-xs-5 col-sm-4 no-float">
            <div class="marvel-device <?php print $device; ?> silver">
                <div class="top-bar"></div>
                <div class="sleep"></div>
                <div class="volume"></div>
                <div class="screen">
                  <?php print render($content['field_image']); ?>
                </div>
                <div class="bottom-bar"></div>
            </div>
          </div>
      <?php endif ?>
      </div>
    </div>
    <div class="spacer spacer-md"></div>
  </div>
<?php else: ?>
  <div class="<?php print $classes; ?> container"<?php print $attributes; ?>>
    <div class="spacer spacer-md"></div>
    <div class="row content"<?php print $content_attributes; ?>>
        <?php if ($content['field_alignment'][0]['#markup'] == 'left'): ?>
          <div class="col-md-offset-1 col-md-4">
            <?php print $browser; ?>
            <?php print render($content['field_image']); ?>
        <?php else: ?>
          <div class="col-md-offset-1 col-md-5">
            <?php print render($content['field_body']); ?>
        <?php endif ?>
          <div class="spacer spacer-sm"></div>
      </div>
        <?php if ($content['field_alignment'][0]['#markup'] == 'left'): ?>
        <div class="col-md-5">
            <?php print render($content['field_body']); ?>
        <?php else: ?>
          <div class="col-md-4">
            <?php print $browser; ?>
            <?php print render($content['field_image']); ?>
          <div class="spacer spacer-sm"></div>
        <?php endif ?>
      </div>
    </div>
    <div class="spacer spacer-md"></div>
</div>
<?php endif ?>
