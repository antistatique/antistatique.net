<?php

function template_preprocess_views_bootstrap_responsive_grid_plugin_style(&$vars) {

  $view     = $vars['view'];
  $options  = $view->style_plugin->options;

  $columns = $options['columns'];
  // Split items by rows and columns.
  $vars['column_type'] = 12 / $columns;
}