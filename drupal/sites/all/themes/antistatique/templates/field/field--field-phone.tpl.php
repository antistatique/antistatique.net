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
  <h3 class="field-label"<?php print $title_attributes; ?>>
    <?php print $label; ?>
  </h3>
<?php endif; ?>

<?php foreach ($items as $delta => $item): ?>
    <p>
        <a href="tel:<?php print str_replace(' ', '', render($item)); ?>" class="btn btn-default"<?php print $attributes; ?>><?php print render($item); ?></a>
    </p>
<?php endforeach; ?>
