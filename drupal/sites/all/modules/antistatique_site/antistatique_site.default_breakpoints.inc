<?php
/**
 * @file
 * antistatique_site.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function antistatique_site_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.bootstrap.screen-lg-min';
  $breakpoint->name = 'screen-lg-min';
  $breakpoint->breakpoint = '(min-width: 1200px)';
  $breakpoint->source = 'bootstrap';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 5;
  $breakpoint->multipliers = array(
    '1.5x' => '1.5x',
    '2x' => '2x',
    '1x' => '1x',
  );
  $export['breakpoints.theme.bootstrap.screen-lg-min'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.bootstrap.screen-md-max';
  $breakpoint->name = 'screen-md-max';
  $breakpoint->breakpoint = '(max-width: 1199px)';
  $breakpoint->source = 'bootstrap';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 4;
  $breakpoint->multipliers = array(
    '1.5x' => '1.5x',
    '2x' => '2x',
    '1x' => '1x',
  );
  $export['breakpoints.theme.bootstrap.screen-md-max'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.bootstrap.screen-md-min';
  $breakpoint->name = 'screen-md-min';
  $breakpoint->breakpoint = '(min-width: 992px)';
  $breakpoint->source = 'bootstrap';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1.5x' => '1.5x',
    '2x' => '2x',
    '1x' => '1x',
  );
  $export['breakpoints.theme.bootstrap.screen-md-min'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.bootstrap.screen-sm-max';
  $breakpoint->name = 'screen-sm-max';
  $breakpoint->breakpoint = '(max-width: 991px)';
  $breakpoint->source = 'bootstrap';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1.5x' => '1.5x',
    '2x' => '2x',
    '1x' => '1x',
  );
  $export['breakpoints.theme.bootstrap.screen-sm-max'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.bootstrap.screen-sm-min';
  $breakpoint->name = 'screen-sm-min';
  $breakpoint->breakpoint = '(min-width: 768px)';
  $breakpoint->source = 'bootstrap';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1.5x' => '1.5x',
    '2x' => '2x',
    '1x' => '1x',
  );
  $export['breakpoints.theme.bootstrap.screen-sm-min'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.bootstrap.screen-xs-max';
  $breakpoint->name = 'screen-xs-max';
  $breakpoint->breakpoint = '(max-width: 767px)';
  $breakpoint->source = 'bootstrap';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1.5x' => '1.5x',
    '2x' => '2x',
    '1x' => '1x',
  );
  $export['breakpoints.theme.bootstrap.screen-xs-max'] = $breakpoint;

  return $export;
}
