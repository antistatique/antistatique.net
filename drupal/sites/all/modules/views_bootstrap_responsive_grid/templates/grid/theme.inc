<?php

function template_preprocess_views_bootstrap_responsive_grid_plugin_style(&$vars) {
  $view     = $vars['view'];
  $options  = $view->style_plugin->options;

  $columnBreakpoints = array();
  $columnClasses = array();
  foreach ($view->style_plugin->getColumnBreakpoints() as $sizeKey => $size) {
    // check if enabled
    if ($options['item_per_row_'.$sizeKey]) {
      $columnType = 12 / (int)$options['item_per_row_'.$sizeKey];
      $columnClasses[] =' col-'.$sizeKey.'-'.$columnType;
      $columnBreakpoints[$sizeKey] = (int)$options['item_per_row_'.$sizeKey];
    }
  }

  $vars['column_breakpoints'] = $columnBreakpoints;
  $vars['column_classes'] = implode(' ', $columnClasses);
}
