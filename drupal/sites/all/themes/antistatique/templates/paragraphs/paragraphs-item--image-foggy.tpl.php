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
$device = isset($content['field_device'])? $content['field_device'][0]['#markup'] : '';
$browser = isset($content['field_browser']) && $content['field_browser']['#items'][0]['value'] ? $content['field_browser']['#items'][0]['value'] : '';
$landscape = isset($content['field_landscape']) && $content['field_landscape']['#items'][0]['value'] ? 'landscape' : '';

switch ($content['field_image_width_centered'][0]['#markup']) {
  case 'col10':
    $image_width = 'col-md-offset-1 col-sm-10';
    break;
  case 'col8':
    $image_width = 'col-md-offset-2 col-sm-8';
    break;
  default:
    $image_width = 'col-md-offset-3 col-sm-6';
    break;
}
?>
<div class="spacer spacer-md"></div>
<div class="bg-foggy">
  <div class="<?php print $classes; ?> container"<?php print $attributes; ?>>
    <div class="spacer spacer-md"></div>
    <div class="row content"<?php print $content_attributes; ?>>
      <div class="<?php print $image_width; ?>">
        <?php if ($device): ?>
          <div class="marvel-device <?php print $device; ?> <?php print $landscape; ?> silver">
              <div class="top-bar"></div>
              <div class="sleep"></div>
              <div class="volume"></div>
              <div class="screen">
        <?php elseif ($browser): ?>
          <div class="browser-window">
            <div class="browser-buttons">
              <div class="browser-close"></div>
              <div class="browser-minimize"></div>
              <div class="browser-maximize"></div>
            </div>
            <div class="browser-input"></div>
            <div class="browser-new-tab"></div>
          </div>
        <?php endif ?>
              <?php print render($content['field_image']); ?>
        <?php if ($device): ?>
              </div>
              <div class="bottom-bar"></div>
          </div>
        <?php endif; ?>
      </div>
    </div>
    <div class="spacer spacer-md"></div>
  </div>
</div>
<div class="spacer"></div>
