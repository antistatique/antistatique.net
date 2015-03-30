<?php
/**
 * @file
 * template.php
 */

function antistatique_preprocess_node(&$vars) {
  // Get a list of all the regions for this theme
  foreach (system_region_list($GLOBALS['theme']) as $region_key => $region_name) {
    // Get the content for each region and add it to the $region variable
    if ($blocks = block_get_blocks_by_region($region_key)) {
      $variables['region'][$region_key] = $blocks;
    }
    else {
      $variables['region'][$region_key] = array();
    }
  }
}

function antistatique_preprocess_field(&$vars) {
  // dpm($vars);
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