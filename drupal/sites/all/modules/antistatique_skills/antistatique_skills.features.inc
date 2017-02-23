<?php
/**
 * @file
 * antistatique_skills.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function antistatique_skills_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
