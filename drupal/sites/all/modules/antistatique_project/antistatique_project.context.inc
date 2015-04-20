<?php
/**
 * @file
 * antistatique_project.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function antistatique_project_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'projects';
  $context->description = '';
  $context->tag = 'sections';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'nous/travaillons/avec-vous' => 'nous/travaillons/avec-vous',
        'we/work/with-you' => 'we/work/with-you',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-projects-block_variant_1' => array(
          'module' => 'views',
          'delta' => 'projects-block_variant_1',
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
  $export['projects'] = $context;

  return $export;
}
