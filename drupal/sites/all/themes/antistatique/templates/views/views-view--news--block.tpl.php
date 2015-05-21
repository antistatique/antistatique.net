<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
$term = menu_get_object('taxonomy_term', 2);
?>
<div class="<?php print $classes; ?> <?php if ($display_id != 'block_all' && $display_id != 'block_10cols' && $display_id != 'block_taxonomy') {print 'bg-foggy';} ?> clearfix">

  <?php if ($display_id == 'block_single'): ?>
    <div class="spacer spacer-md"></div>
  <?php endif ?>

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content <?php if (!$term) { print 'container'; } ?>">

      <?php if ($display_id == 'block_10cols' || $display_id == 'block_taxonomy' || $display_id == 'block_all'): ?>
        <div class="row">
          <div class="<?php print $display_id == 'block_10cols' ? 'col-md-offset-1 col-md-10' : 'col-sm-offset-2 col-sm-8 col-md-offset-3 col-md-6' ;?>">
      <?php endif ?>

      <?php print $rows; ?>

      <?php if ($display_id == 'block_10cols' || $display_id == 'block_taxonomy' || $display_id == 'block_all'): ?>
          </div>
        </div>
      <?php endif ?>

    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>

<?php if ($display_id == 'block_single'): ?>
  <div class="spacer"></div>
<?php endif ?>
