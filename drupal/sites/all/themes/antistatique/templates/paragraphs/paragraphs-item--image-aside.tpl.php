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
$image_width = $content['field_image_width'][0]['#markup'];

if ($content['field_alignment'][0]['#markup'] == 'left') {
  // image aligned to left
  $alignment_image = $image_width == 'col-6' ? 'col-md-6 col-md-offset-3' : 'col-md-8 col-md-offset-1';
  $alignment_aside = 'col-md-2';
} else {
  // image aligned to right
  $alignment_image = $image_width == 'col-6' ? 'col-md-6 col-md-offset-1 col-md-push-2' : 'col-md-8 col-md-push-3';
  $alignment_aside = $image_width == 'col-6' ? 'col-md-pull-6 col-md-2' : 'col-md-pull-7 col-md-2';
}

hide($content['field_alignment']);
hide($content['field_image_width']);
?>
<div class="<?php print $classes; ?> container"<?php print $attributes; ?>>
  <div class="spacer"></div>
  <div class="row content"<?php print $content_attributes; ?>>
    <div class="<?php print $alignment_image; ?>">
      <?php print render($content['field_image']); ?>
    </div>
    <aside class="<?php print $alignment_aside; ?>">
      <?php print render($content['field_aside']); ?>
    </aside>
  </div>
</div>
