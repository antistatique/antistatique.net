<?php
/**
 * @file
 * antistatique_site.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function antistatique_site_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['en'] = array();
  $realm_variables['language']['es'] = array();
  $realm_variables['language']['fr'] = array();

return $realm_variables;
}
