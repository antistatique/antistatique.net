<?php
/**
 * @file
 * Provide views data and handlers.
 */

/**
 * Implements hook_views_plugins().
 */
function views_bootstrap_responsive_grid_views_plugins() {
  $module_path = drupal_get_path('module', 'views_bootstrap_responsive_grid');

  return array(
    'style' => array(

      'views_bootstrap_responsive_grid_plugin_style' => array(
        'title' => t('Bootstrap Responsive Grid - Columns resets'),
        'help' => t('Bootstrap3 Responsive Grid Style based on Responsive columns resets'),
        'path' => $module_path . '/plugins/grid',
        'handler' => 'ViewsBootstrapResponsiveGridPluginStyle',
        'parent' => 'default',
        'theme' => 'views_bootstrap_responsive_grid_plugin_style',
        'theme path' => $module_path . '/templates/grid',
        'theme file' => 'theme.inc',
        'uses row plugin' => TRUE,
        'uses grouping' => FALSE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    )
  );
}
