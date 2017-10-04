<?php
/**
 * @file field--fences-p.tpl.php
 * Wrap each field value in the <p> element.
 *
 * @see http://developers.whatwg.org/grouping-content.html#the-p-element
 */

 global $language;
?>
<?php $empty = true; ?>

<?php foreach ($items as $delta => $item):
  if ($title = $item['#options']['entity']->name_field[$language->language][0]['value']):

?>

  <?php if ($element['#label_display'] == 'inline' && $empty): ?>
    <span class="field-label"<?php print $title_attributes; ?>>
      <?php print $label; ?>:
    </span>
  <?php elseif ($element['#label_display'] == 'above' && $empty): ?>
    <h4 <?php print $title_attributes; ?>>
      <?php print $label; ?>
  </h4>
  <?php endif; ?>

  <?php $empty = false; ?>

    <?php if ($element['#label_display'] != 'inline'): ?><small class="<?php print $classes; ?>"<?php print $attributes; ?>><?php endif; ?>
    <?php $href = url(drupal_get_path_alias($item['#href'])); ?>
    <a href="<?php print $href; ?>" class="badge">
      <?php print $title; ?>
    </a>
    <?php if ($element['#label_display'] != 'inline'): ?></small><?php endif; ?>
<?php endif; endforeach; ?>
