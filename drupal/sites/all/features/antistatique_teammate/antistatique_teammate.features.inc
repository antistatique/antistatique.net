<?php
/**
 * @file
 * antistatique_teammate.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function antistatique_teammate_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
