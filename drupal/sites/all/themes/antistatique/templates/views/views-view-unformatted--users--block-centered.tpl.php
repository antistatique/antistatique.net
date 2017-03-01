<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php $length = count($rows); ?>
<?php foreach ($rows as $id => $row): ?>
    <?php $offset_xs = $length <= 2 ? (12 - 6 * $length) / 2 : '' ?>
    <?php $offset_sm = $length <= 2 ? (12 - 4 * $length) / 2 : '' ?>
    <?php $offset_classes = $id == 0 ? " col-xs-offset-$offset_xs col-sm-offset-$offset_sm" : ''?>
  <div class="col-xs-6 col-sm-4<?= $offset_classes ?>">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
