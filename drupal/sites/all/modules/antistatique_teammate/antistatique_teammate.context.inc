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
        'we/are-a-team' => 'we/are-a-team',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-users-block_2' => array(
          'module' => 'views',
          'delta' => 'users-block_2',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'teammate';
  $context->description = '';
  $context->tag = 'specific';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-users-block_1' => array(
          'module' => 'views',
          'delta' => 'users-block_1',
          'region' => 'header',
          'weight' => '-9',
        ),
        'views-news-block_articles_from_user' => array(
          'module' => 'views',
          'delta' => 'news-block_articles_from_user',
          'region' => 'content_below',
          'weight' => '-10',
        ),
        'views-users-block_3' => array(
          'module' => 'views',
          'delta' => 'users-block_3',
          'region' => 'content_below',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('specific');
  $export['teammate'] = $context;

  return $export;
}
