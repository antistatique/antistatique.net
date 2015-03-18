<?php
/**
 * @file views-bootstrap-grid-responsive-plugin-style.tpl.php
 * Boostrap3 Responsive Grid view with configurable breakpoints
 *
 *
 * - $rows contains the list of item to display
 * - $column_classes contains a string of the bootstrap columns classes for each items, 'col-md-* col-sm-* ...' like
 * - $column_breakpoints contains an array of number of items per row per breakpoints.
 *
 * @ingroup views_templates
 */
?>
<div id="views-bootstrap-responsive-grid-<?php print $id ?>" class="<?php print $classes ?>">

    <?php if (!empty($rows)): ?>
      <div class="row">
        <?php foreach ($rows as $i => $item): ?>
          <div class="<?php print $column_classes ?>">
            <?php print $item ?>
          </div>
          <?php foreach($column_breakpoints as $breakpoint => $numberOfItem): ?>
            <?php if ((0 != $i && 1 != $numberOfItem) && (($i+1) % (int)$numberOfItem == 0)): ?>
              <div class="clearfix visible-<?php print $breakpoint ?>"></div>
            <?php endif ?>
          <?php endforeach ?>
        <?php endforeach ?>
      </div>

    <?php endif ?>

</div>
