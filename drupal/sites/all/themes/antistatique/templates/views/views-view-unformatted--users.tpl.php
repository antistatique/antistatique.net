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
<div class="spacer spacer-sm"></div>
<div class="container">
  <div class="row">
    <?php foreach ($rows as $id => $row): ?>
      <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .' col-md-3 col-sm-4"';  } ?>>
        <?php print $row; ?>
        <div class="spacer spacer-md"></div>
      </div>
    <?php endforeach; ?>
  </div>
</div>
