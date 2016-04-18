<?php
/**
 * @file
 * New Relic RPM Drush integration.
 */

/**
 * Implements hook_drush_init().
 */
function new_relic_rpm_drush_init() {
  if (function_exists('module_exists') && module_exists('new_relic_rpm')) {

    // Make sure we have access to the needed functions.
    require_once dirname(__FILE__) . '/new_relic_rpm.module';

    if (!new_relic_rpm_extension_installed()) {
      return;
    }

    // Add custom paramter, telling the drush command executed.
    $command = drush_get_command();
    $drush_command = array_merge(array($command['command']), $command['arguments']);
    newrelic_add_custom_parameter('Drush command', implode(' ', $drush_command));

    // Set job state.
    new_relic_rpm_set_job_state(variable_get('new_relic_rpm_track_drush', 'norm'));
  }
}

/**
 * Implementation of hook_drush_command().
 */
function new_relic_rpm_drush_command() {
  $items = array();

  $items['newrelic-deploy'] = array(
    'callback' => '_new_relic_rpm_deploy',
    'description' => dt('Notify New Relic of a deployment.'),
    'arguments' => array(
      'user' => dt('Optional. User doing the deploy.'),
      'description' => dt('Optional. A brief describing of the deployment.'),
      'changelog' => dt('Optional. A list of changes for this deployment.'),
      'revision' => dt('Optional. Revision id of the deployment.'),
    ),
    'aliases' => array('nrd'),
  );

  return $items;
}
