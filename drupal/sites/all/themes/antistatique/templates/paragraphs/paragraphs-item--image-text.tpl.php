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
?>
<div class="<?php print $classes; ?> container"<?php print $attributes; ?>>
  <div class="spacer spacer-md"></div>
  <div class="row content"<?php print $content_attributes; ?>>
    <div class="col-md-offset-2 col-md-4">
      <?php if ($content['field_alignment'][0]['#markup'] == 'left'): ?>
        <?php print render($content['field_image']); ?>
      <?php else: ?>
        <?php print render($content['field_body']); ?>
      <?php endif ?>
    </div>
    <div class="col-md-4">
      <?php if ($content['field_alignment'][0]['#markup'] == 'left'): ?>
        <?php print render($content['field_body']); ?>
      <?php else: ?>
        <?php print render($content['field_image']); ?>
      <?php endif ?>
    </div>
  </div>
  <div class="spacer spacer-md"></div>
</div>
