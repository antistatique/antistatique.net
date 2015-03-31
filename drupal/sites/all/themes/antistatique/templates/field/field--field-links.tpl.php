<?php if ($element['#label_display'] == 'inline'): ?>
  <span class="field-label"<?php print $title_attributes; ?>>
    <?php print $label; ?>:
  </span>
<?php elseif ($element['#label_display'] == 'above'): ?>
  <h3 class="field-label"<?php print $title_attributes; ?>>
    <?php print $label; ?>
  </h3>
<?php endif; ?>

<?php $item_count = count($items); ?>


<?php if ($item_count > 1): ?>
  <p class="no-margin-bottom"><strong><?php print t('View live') ?></strong></p>
  <ul class="<?php print $classes; ?>"<?php print $attributes; ?>>
<?php endif ?>

<?php foreach ($items as $delta => $item): ?>
  <?php if ($item_count === 1): ?>
    <div class="<?php print $classes; ?>"<?php print $attributes; ?>>
      <a class="btn btn-dark btn-wrap" href="<?php print render($item['#element']['url']); ?>">
        <i class="fa fa-external-link visible-sm-inline-block visible-md-inline-block"></i>
        <span class="hidden-sm hidden-md"><?php print render($item['#element']['title']); ?></span>
        </a>
    </div>
  <?php else: ?>
    <li>
      <a href="<?php print render($item['#element']['url']); ?>"><?php print render($item['#element']['title']); ?></a>
    </li>
  <?php endif ?>
<?php endforeach; ?>

<?php if ($item_count > 1): ?>
  </ul>
<?php endif ?>
