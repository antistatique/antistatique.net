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
  <div class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <a class="btn btn-dark btn-wrap" href="<?php print render($item['#element']['url']); ?>">
      <i class="fa fa-external-link visible-sm-inline-block visible-md-inline-block"></i>
      <span class="hidden-sm hidden-md"><?php print render($item['#element']['title']); ?></span>
      </a>
  </div>
<?php endforeach; ?>
