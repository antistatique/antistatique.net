<?php
/**
 * @file
 * antistatique_teammate.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function antistatique_teammate_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'team';
  $context->description = '';
  $context->tag = 'sections';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'nous/sommes-une-equipe' => 'nous/sommes-une-equipe',
        'nous' => 'nous',
        'we' => 'we',
        'we/are-a-team' => 'we/are-a-team',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-users-block' => array(
          'module' => 'views',
          'delta' => 'users-block',
          'region' => 'above_footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sections');
  $export['team'] = $context;

  return $export;
}
