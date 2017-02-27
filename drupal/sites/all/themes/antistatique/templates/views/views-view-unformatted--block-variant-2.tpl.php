<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
$title = $view->get_title();
?>
<?php if (!empty($title)): ?>
  <h2 class="h3 text-center"><?php print $title; ?></h2>
<?php endif; ?>
<div class="container">
  <div class="row">
    <?php foreach ($rows as $id => $row): ?>
      <?php $col = $id > 1 ? 'col-sm-4': 'col-sm-6'; ?>
      <div class="<?= $col; ?>">
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
