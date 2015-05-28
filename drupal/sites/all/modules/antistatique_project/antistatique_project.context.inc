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
  $context->name = 'project';
  $context->description = '';
  $context->tag = 'specific';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-breadcrumb-block_4' => array(
          'module' => 'views',
          'delta' => 'breadcrumb-block_4',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-projects-block_1' => array(
          'module' => 'views',
          'delta' => 'projects-block_1',
          'region' => 'above_footer',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => array(
      0 => 'main-menu:node/3',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('specific');
  $export['project'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'projects';
  $context->description = '';
  $context->tag = 'sections';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/232' => 'node/232',
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
