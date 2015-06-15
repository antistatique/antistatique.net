<?php
/**
 * @file
 * antistatique_site.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function antistatique_site_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'bootstrap';
  $breakpoint_group->name = 'Bootstrap';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.bootstrap.screen-xs-max',
    1 => 'breakpoints.theme.bootstrap.screen-sm-min',
    2 => 'breakpoints.theme.bootstrap.screen-sm-max',
    3 => 'breakpoints.theme.bootstrap.screen-md-min',
    4 => 'breakpoints.theme.bootstrap.screen-md-max',
    5 => 'breakpoints.theme.bootstrap.screen-lg-min',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['bootstrap'] = $breakpoint_group;

  return $export;
}
