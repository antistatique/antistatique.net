<?php
/**
 * @file
 * template.php
 */

function antistatique_preprocess_node(&$vars, $hook) {
  // load the blocks regions to enable display in node templates
  if(($vars['node']->type == 'article' || $vars['node']->type == 'page') && $vars['page']) {
    if ($reaction = context_get_plugin('reaction', 'block')) {
      $vars['region']['content_below'] = $reaction->block_get_blocks_by_region('content_below');
      drupal_static_reset('context_reaction_block_list');
    }
  }

  if($vars['is_front'] && $vars['page']) {
    if ($reaction = context_get_plugin('reaction', 'block')) {
      $vars['region']['content_above'] = $reaction->block_get_blocks_by_region('content_above');
      drupal_static_reset('context_reaction_block_list');
    }
  }

  /*
    Define hero image to display on node header.

    These styles must use the exact path that is defined by the breakpoint and
    picture module.
  */
  $hero = field_get_items('node', $vars['node'], 'field_teammate_hero_image');
  if($hero){
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
    }else{
      // no hero image (using context for handling this ;-)
    }


}

function antistatique_preprocess_page(&$variables) {
  $nid = arg(1);
  // tagline generator
  if (arg(0) == 'node' && is_numeric($nid) && !$variables['is_front']) {
    if ($variables['node']->type == 'page' && isset($variables['page']['content']['system_main']['nodes'][$nid])) {
      $variables['node_content'] = &$variables['page']['content']['system_main']['nodes'][$nid];
      $variables['breadcrumb_tagline_section'] = $variables['node_content']['field_section'][0]['#title'];
    } elseif ($variables['node']->type == 'article') {
      $variables['breadcrumb_tagline_section'] = t('We <a href="/en/blog">blog</a> about ');
    } elseif ($variables['node']->type == 'project') {
      $variables['breadcrumb_tagline_section'] = t('We work <a href="/en/work">on beautiful projects</a> with ');
    }
  }
}

/**
* Implements HOOK_preprocess_user_profile()
* Adds theme suggestions for the user view mode teaser
*/
function antistatique_preprocess_user_profile(&$vars) {
  $account = $vars['elements']['#account'];

  if ($vars['elements']['#view_mode'] == 'teaser' || $vars['elements']['#view_mode'] == 'big_teaser') {

    if ($vars['elements']['#view_mode'] == 'teaser') {
      $vars['theme_hook_suggestions'][] = 'user_profile__teaser';
    } else {
      $vars['theme_hook_suggestions'][] = 'user_profile__big_teaser';
    }

  } elseif ($vars['elements']['#view_mode'] == 'full') {
    /*
        Define hero image to display on node header.

        These styles must use the exact path that is defined by the breakpoint and
        picture module.

        TODO: fix this MASSIVELY duplicated code here :-)
      */
      $hero = field_get_items('user', $account, 'field_teammate_hero_image');
      $vars['hero_xs'] = field_view_value('user', $account, 'field_teammate_hero_image', $hero[0], array(
        'type' => 'image_url',
        'settings' => array(
          'image_style' => 'hero_breakpoints_theme_bootstrap_screen-xs-max_1x'
        ),
      ));
      $vars['hero_xs2'] = field_view_value('user', $account, 'field_teammate_hero_image', $hero[0], array(
        'type' => 'image_url',
        'settings' => array(
          'image_style' => 'hero_breakpoints_theme_bootstrap_screen-xs-max_2x'
        ),
      ));
      $vars['hero_sm'] = field_view_value('user', $account, 'field_teammate_hero_image', $hero[0], array(
        'type' => 'image_url',
        'settings' => array(
          'image_style' => 'hero_breakpoints_theme_bootstrap_screen-sm-max_1x'
        ),
      ));
      $vars['hero_md'] = field_view_value('user', $account, 'field_teammate_hero_image', $hero[0], array(
        'type' => 'image_url',
        'settings' => array(
          'image_style' => 'hero_breakpoints_theme_bootstrap_screen-md-max_1x'
        ),
      ));
      $vars['hero_lg'] = field_view_value('user', $account, 'field_teammate_hero_image', $hero[0], array(
        'type' => 'image_url',
        'settings' => array(
          'image_style' => 'hero_breakpoints_theme_bootstrap_screen-lg-min_1x'
        ),
      ));
      $css = "@media only screen and (min-width: 1200px) {
        #user-" . $account->uid . " .img-hero {
          background-image:url('" . render($vars['hero_lg']) . "');
        }
      }
      @media only screen and (min-width: 992px) and (max-width: 1199px) {
        #user-" . $account->uid . " .img-hero {
          background-image:url('" . render($vars['hero_md']) . "');
        }
      }
      @media only screen and (min-width: 768px) and (max-width: 991px) {
        #user-" . $account->uid . " .img-hero {
          background-image:url('" . render($vars['hero_sm']) . "');
        }
      }
      @media only screen and (max-width: 767px) {
        #user-" . $account->uid . " .img-hero {
          background-image:url('" . render($vars['hero_xs']) . "');
        }
      }";

      drupal_add_css($css, 'inline');

  }

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
  if ($vars['user_id'] != '0') {
    $string = $vars['user_profile']['user_picture']['#markup'];
    preg_match_all('#\bhttps?://[^\s()<>]+(?:\([\w\d]+\)|([^[:punct:]\s]|/))#', $string, $match);
    if($picture = $vars['user_profile']['user_picture'] && !empty($vars['user_profile']['user_picture']['#markup'])) {
      $vars['user_profile']['user_picture'] = $match[0][0];
    } else {
      $vars['user_profile']['user_picture'] = 'http://placehold.it/180x180';
    }
  } else {
    $vars['user_profile']['user_picture'] = '/' . drupal_get_path('theme',$GLOBALS['theme']) . '/build/img/logo_white.png';
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
      if (!empty($element['#items'][0]['entity']->name)) {
        $username = $element['#items'][0]['entity']->name;
        $firstname = $element['#items'][0]['entity']->field_firstname['und'][0]['safe_value'];
        $variables['items'][0]['#markup'] = '<a href="/users/'.$username.'">'.$firstname.'</a>';
      } else {
        $variables['items'][0]['#markup'] = 'Antistatique';
      }
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

/**
 * Overrides theme_menu_local_tasks().
 */
function antistatique_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs--primary nav nav-tabs">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }

  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs--secondary pagination pagination-sm">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}

/**
 * Formats a link.
 */
function antistatique_link_formatter_link_default($vars) {
  $link_options = $vars['element'];
  unset($link_options['title']);
  unset($link_options['url']);

  if (isset($link_options['attributes']['class'])) {
    $classes = array($link_options['attributes']['class']);
    $classes = '<i class="'.implode($classes).'"></i> ';
    $link_options['attributes']['class'] = 'btn btn-default';
  }
  // Display a normal link if both title and URL are available.
  if (!empty($vars['element']['title']) && !empty($vars['element']['url'])) {
    return l($classes . $vars['element']['title'], $vars['element']['url'], $link_options);
  }
  // If only a title, display the title.
  elseif (!empty($vars['element']['title'])) {
    return $link_options['html'] ? $vars['element']['title'] : check_plain($vars['element']['title']);
  }
  elseif (!empty($vars['element']['url'])) {
    return l($vars['element']['title'], $vars['element']['url'], $link_options);
  }
}

function antistatique_links__locale_block(&$variables) {
  global $language;

  $output = '<div class="btn-group-vertical lang-switcher">';
  foreach($variables['links'] as $lang => $info) {
    $name = $info['language']->native;
    $href = isset($info['href']) ? $info['href'] : '';

    $link_classes = array('btn', 'btn-gray', 'btn-xxs', 'text-uppercase');

    $options = array(
      'attributes' => array('class' => $link_classes),
      'language' => $info['language'],
      'html' => true
      );

    if ($href) $output .= l($lang, $href, $options);
  }

  $output .= '</div>';

  return $output;
}
