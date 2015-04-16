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
<div class="container">
  <div class="row">
    <?php foreach ($rows as $id => $row): ?>
      <?php $col = $id > 1 ? 'col-sm-4': 'col-sm-6'; ?>
      <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .' ' . $col . '"';  } ?>>
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
