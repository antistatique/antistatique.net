<?php
/**
 * @file
 * template.php
 */

function antistatique_preprocess_node(&$vars, $hook) {
  // load the blocks regions to enable display in node templates
  if($vars['node']->type == 'article' && $vars['page']) {
    if ($reaction = context_get_plugin('reaction', 'block')) {
      $vars['region']['content_below'] = $reaction->block_get_blocks_by_region('content_below');
      drupal_static_reset('context_reaction_block_list');
    }
  }

  /*
    Define hero image to display on node header.

    These styles must use the exact path that is defined by the breakpoint and
    picture module.
  */
  $hero = field_get_items('node', $vars['node'], 'field_teammate_hero_image');
  $vars['hero_xs'] = field_view_value('node', $vars['node'], 'field_teammate_hero_image', $hero[0], array(
    'type' => 'image_url',
    'settings' => array(
      'image_style' => 'hero_breakpoints_theme_bootstrap_screen-xs-max_1x'
    ),
  ));
  $vars['hero_xs2'] = field_view_value('node', $vars['node'], 'field_teammate_hero_image', $hero[0], array(
    'type' => 'image_url',
    'settings' => array(
      'image_style' => 'hero_breakpoints_theme_bootstrap_screen-xs-max_2x'
    ),
  ));
  $vars['hero_sm'] = field_view_value('node', $vars['node'], 'field_teammate_hero_image', $hero[0], array(
    'type' => 'image_url',
    'settings' => array(
      'image_style' => 'hero_breakpoints_theme_bootstrap_screen-sm-max_1x'
    ),
  ));
  $vars['hero_md'] = field_view_value('node', $vars['node'], 'field_teammate_hero_image', $hero[0], array(
    'type' => 'image_url',
    'settings' => array(
      'image_style' => 'hero_breakpoints_theme_bootstrap_screen-md-max_1x'
    ),
  ));
  $vars['hero_lg'] = field_view_value('node', $vars['node'], 'field_teammate_hero_image', $hero[0], array(
    'type' => 'image_url',
    'settings' => array(
      'image_style' => 'hero_breakpoints_theme_bootstrap_screen-lg-min_1x'
    ),
  ));
  $css = "@media only screen and (min-width: 1200px) {
    #node-" . $vars['node']->nid . " .img-hero {
      background-image:url('" . render($vars['hero_lg']) . "');
    }
  }
  @media only screen and (min-width: 992px) and (max-width: 1199px) {
    #node-" . $vars['node']->nid . " .img-hero {
      background-image:url('" . render($vars['hero_md']) . "');
    }
  }
  @media only screen and (min-width: 768px) and (max-width: 991px) {
    #node-" . $vars['node']->nid . " .img-hero {
      background-image:url('" . render($vars['hero_sm']) . "');
    }
  }
  @media only screen and (max-width: 767px) {
    #node-" . $vars['node']->nid . " .img-hero {
      background-image:url('" . render($vars['hero_xs']) . "');
    }
  }";

  drupal_add_css($css, 'inline');

}

function antistatique_preprocess_page(&$vars) {
}

/**
* Implements HOOK_preprocess_user_profile()
* Adds theme suggestions for the user view mode teaser
*/
function antistatique_preprocess_user_profile(&$vars) {
  if ($vars['elements']['#view_mode'] == 'teaser') {
    $vars['theme_hook_suggestions'][] = 'user_profile__teaser';
  }

  $account = $vars['elements']['#account'];
  //Add the user ID into the user profile as a variable
  $vars['user_id'] = $account->uid;
  // Helpful $user_profile variable for templates.
  foreach (element_children($vars['elements']) as $key) {
    $vars['user_profile'][$key] = $vars['elements'][$key];
  }

  /*
  * Take the user picture string and regex
  * the url into $matches. Replace the old
  * string with just the url to pass to node.
  */
  $string = $vars['user_profile']['user_picture']['#markup'];
  preg_match_all('#\bhttps?://[^\s()<>]+(?:\([\w\d]+\)|([^[:punct:]\s]|/))#', $string, $match);
  if($picture = $vars['user_profile']['user_picture']) {
    $vars['user_profile']['user_picture'] = $match[0][0];
  }

  // Preprocess fields.
  field_attach_preprocess('user', $account, $vars['elements'], $vars);
}

/**
 * Set name instead of username for field_co_author
 */
function antistatique_preprocess_field(&$variables, $hook) {
  $element = $variables['element'];
  if (isset($element['#field_name'])) {
    if ($element['#field_name'] == 'field_co_author' && $element['#formatter'] == 'entityreference_label') {
      $username = $element['#items'][0]['entity']->name;
      $firstname = $element['#items'][0]['entity']->field_firstname['und'][0]['safe_value'];
      $variables['items'][0]['#markup'] = '<a href="/users/'.$username.'">'.$firstname.'</a>';
    }
  }
}

/**
 * Implements hook_preprocess_picture().
 */
function antistatique_preprocess_picture(&$variables) {
  // Add responsiveness, if necessary.
  if ($shape = bootstrap_setting('image_responsive')) {
    $variables['attributes']['class'] = 'img-responsive';
  }
}