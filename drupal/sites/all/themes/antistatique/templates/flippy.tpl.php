<?php

/**
 * @file
 * flippy.tpl.php
 *
 * Theme implementation to display a simple pager.
 *
 * Default variables:
 * - $links: An array of links to render, keyed by their class. The array
 *   contains 'title' and 'href'.
 *
 * Other variables:
 * - $current['nid']: The Node ID of the current node.
 * - $first['nid']: The Node ID of the first node.
 * - $prev['nid']: The Node ID of the previous node.
 * - $next['nid']: The Node ID of the next node.
 * - $last['nid']: The Node ID of the last node.
 *
 * - $current['title']: The Node title of the current node.
 * - $first['title']: The Node title of the first node.
 * - $prev['title']: The Node title of the previous node.
 * - $next['title']: The Node title of the next node.
 * - $last['title']: The Node title of the last node.
 *
 * - $show_empty: TRUE if links without hrefs should be rendered.
 *
 * @see template_preprocess_flippy()
 */
?>

<div class="spacer spacer-md">

</div>
<div class="row">
    <?php $i=0; ?>
    <?php foreach ($links as $key => $link): ?>
      <?php $i++; ?>
      <?php if (!$link['href'] && !$show_empty): ?>
        <?php continue; ?>
      <?php endif; ?>

      <div class="col-xs-6 bg-foggy <?php print $key; ?><?php print !$link['href'] ? ' empty' : ''; ?><?php print ($i % 2) == 0 ? ' bg-foggy-border-left text-right' : ' bg-foggy-border-right'; ?>">
        <h5>
        <?php if (!$link['href']): ?>
          <?php print $link['title']; ?>
        <?php else: ?>
          <?php print l($link['title'], $link['href'], array('html' => TRUE, 'attributes' => array('title' => $link['title']))); ?>
        <?php endif; ?>
        </h5>
      </div>
    <?php endforeach; ?>
</div>
