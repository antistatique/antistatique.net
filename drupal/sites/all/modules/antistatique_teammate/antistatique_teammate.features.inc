<?php
/**
 * @file
 * antistatique_teammate.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function antistatique_teammate_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function antistatique_teammate_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
