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

$node = node_load(6);
$recruit = node_view($node, $view_mode = 'teaser');

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
        <div class="col-xs-6 col-sm-4 col-md-3 col-lg-3">
          <a href="<?php print url("node/6"); ?>" class="profile team-teaser">
            <div class="team-avatar">
              <img src="/<?php print drupal_get_path('theme',$GLOBALS['theme']); ?>/build/img/Antistatique-wants-You.png" alt="We want you!" class="img-circle img-responsive">
            </div>
            <div class="clearfix"></div>
            <p class="h6 text-md text-dark"><?php print t('We are hiring'); ?></p>
            <small class="text-muted hidden-xs">
              <div class="field-teammate-job-title">
                <?php print t('Check the open positions'); ?>
              </div>
            </small>
          </a>
        </div>
      </div>

    <?php endif ?>

</div>
