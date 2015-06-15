<?php if ($element['#label_display'] == 'inline'): ?>
  <span class="field-label"<?php print $title_attributes; ?>>
    <?php print $label; ?>:
  </span>
<?php elseif ($element['#label_display'] == 'above'): ?>
  <div class="spacer"></div>
  <p class="no-margin-bottom"<?php print $title_attributes; ?>><strong><?php print $label; ?></strong></p>
<?php endif; ?>

<?php foreach ($items as $delta => $item): ?>
  <div class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <p><?php print render($item['#markup']); ?></p>
  </div>
<?php endforeach; ?>
