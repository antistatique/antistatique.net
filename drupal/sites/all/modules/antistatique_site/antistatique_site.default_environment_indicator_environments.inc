<?php
/**
 * @file
 * antistatique_site.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function antistatique_site_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'dev_environment';
  $environment->name = 'Development';
  $environment->regexurl = '.*\\.dev';
  $environment->settings = array(
    'color' => '#aa3333',
    'text_color' => '#ffffff',
    'weight' => '1',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['dev_environment'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'prod';
  $environment->name = 'Prod';
  $environment->regexurl = 'antistatique.net';
  $environment->settings = array(
    'color' => '#d40b6b',
    'text_color' => '#ffffff',
    'weight' => '2',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['prod'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'staging_environment';
  $environment->name = 'Staging';
  $environment->regexurl = 'staging\\..*$';
  $environment->settings = array(
    'color' => '#0ba1d4',
    'text_color' => '#ffffff',
    'weight' => '3',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['staging_environment'] = $environment;

  return $export;
}
