<?php
/**
 * @file field--fences-p.tpl.php
 * Wrap each field value in the <p> element.
 *
 * @see http://developers.whatwg.org/grouping-content.html#the-p-element
 */
?>
<?php if ($element['#label_display'] == 'inline'): ?>
  <span class="field-label"<?php print $title_attributes; ?>>
    <?php print $label; ?>:
  </span>
<?php elseif ($element['#label_display'] == 'above'): ?>
  <h4 <?php print $title_attributes; ?>>
    <?php print $label; ?>
</h4>
<?php endif; ?>

<?php foreach ($items as $delta => $item): ?>
    <?php if ($element['#label_display'] != 'inline'): ?><small class="<?php print $classes; ?>"<?php print $attributes; ?>><?php endif; print render($item); if ($element['#label_display'] != 'inline'): ?></small><?php endif; ?>
<?php endforeach; ?>
