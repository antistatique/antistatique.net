<?php
/**
 * @file
 * antistatique_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function antistatique_site_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
