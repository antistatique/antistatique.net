<?php
/**
 * @file views-bootstrap-grid-plugin-style.tpl.php
 * Default simple view template to display Bootstrap Grids.
 *
 *
 * - $columns contains rows grouped by columns.
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 * - $column_type contains a number (default Bootstrap grid system column type).
 *
 * @ingroup views_templates
 */
?>
<div id="views-bootstrap-responsive-grid-<?php print $id ?>" class="<?php print $classes ?>">

    <?php if (!empty($rows)): ?>
      <div class="row">
        <?php foreach ($rows as $item): ?>
          <div class="col col-lg-<?php print $column_type ?>">
            <?php print $item ?>
          </div>
        <?php endforeach ?>
      </div>
    <?php endif ?>

</div>
