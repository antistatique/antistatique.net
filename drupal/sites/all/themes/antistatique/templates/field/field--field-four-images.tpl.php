<?php
/**
 * @file field--fences-b.tpl.php
 * Wrap each field value in the <b> element.
 *
 * @see http://developers.whatwg.org/text-level-semantics.html#the-b-element
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

<div class="half-width">
  <?php foreach ($items as $delta => $item): ?>

    <?php print $delta == 1 ? '</div><div class="half-width">' : ''; ?>

    <?php print $delta > 0 && $delta < 3 ? '<div class="half-width">' : ''; ?>

    <?php print render($item); ?>

    <?php print $delta > 0 && $delta < 3 ? '</div>' : ''; ?>
  <?php endforeach; ?>
</div>
