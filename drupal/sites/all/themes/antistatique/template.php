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

  if($vars['page']) {
    if ($reaction = context_get_plugin('reaction', 'block')) {
      $vars['region']['above_footer'] = $reaction->block_get_blocks_by_region('above_footer');
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
    if ($variables['node']->type == 'page' && isset($variables['page']['content']['system_main']['nodes'][$nid]) && isset($variables['page']['content']['system_main']['nodes'][$nid]['field_section'])) {
      $variables['node_content'] = &$variables['page']['content']['system_main']['nodes'][$nid];

      switch ($variables['node_content']['field_section'][0]['#title']) {
        case 'We work':
          $breadcrumb = t('We <a href="/en/we/work">work</a>');
          break;
        default:
          $breadcrumb = t('<a href="/en/we">We</a>');
          break;
      }

      $variables['breadcrumb_tagline_section'] = $breadcrumb;
    } elseif ($variables['node']->type == 'article') {
      $variables['breadcrumb_tagline_section'] = t('We <a href="/en/we/blog">blog</a> about ');
    } elseif ($variables['node']->type == 'project') {
      $variables['breadcrumb_tagline_section'] = t('We <a href="/en/we/work">work</a> on beautiful <a href="/en/we/work/with">projects</a> with people from ');
    }
  }
  if (!empty(views_get_page_view()) && views_get_page_view()->name == 'news' && views_get_page_view()->current_display == 'page') {
    $variables['breadcrumb_tagline_section'] = t('We <a href="/en/we/blog">blog</a> and here are the posts from ');
  }


  // remove title and containers on user profile page and taxonomy pages
  if  (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))) {
    $variables['no_title'] = true;
    $variables['breadcrumb_tagline_section'] = t('We also <a href="/en/we/blog">blog</a> about ');
  }
  if  (arg(0) == 'user' && is_numeric(arg(1))) {
    $variables['no_title'] = true;
    $variables['breadcrumb_tagline_section'] = t('We <a href="/en/we/are-a-team">are a team</a>, meet ');

    // set dark-hero if no hero image
    if (empty($variables['page']['content']['system_main']['field_teammate_hero_image'])) {
      $variables['classes_array'][] = 'dark-hero';
    } elseif (isset($variables['page']['content']['system_main']['field_hero_image_is_dark']) && $variables['page']['content']['system_main']['field_hero_image_is_dark'][0]['#markup']) {
      $variables['classes_array'][] = 'dark-hero';
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

    // redirect to 404 if teammate is no longer working here
    if (!$vars['elements']['field_teammate_currently_working']['#items'][0]['value']) {
      drupal_goto('404');
    }


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


      // add regions to template

      if ($reaction = context_get_plugin('reaction', 'block')) {
        $vars['region']['content_below'] = $reaction->block_get_blocks_by_region('content_below');
        drupal_static_reset('context_reaction_block_list');
      }

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
      foreach ($element['#items'] as $key => $item) {
        if (!empty($element['#items'][$key]['entity']->name)) {
          $uid = $element['#items'][$key]['entity']->uid;
          $firstname = $element['#items'][$key]['entity']->field_firstname['und'][0]['safe_value'];
          $is_working = $element['#items'][$key]['entity']->field_teammate_currently_working['und'][0]['value'];

          $variables['items'][$key]['#markup'] = $key > 0 ? '& ': '';
          $variables['items'][$key]['#markup'] .= $is_working ? l($firstname, 'user/'.$uid) : $firstname;
        } else {
          $variables['items'][$key]['#markup'] = 'Antistatique';
        }
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

  if ($vars['field']['field_name'] == 'field_teammate_links') {
     if (empty($link_options['attributes']['class'])) {
         $link_options['attributes']['class'] = 'fa fa-external-link';
     }
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

function antistatique_views_pre_render(&$view) {
  if ($view->name == 'news' && $view->current_display == 'block_articles_from_user') {
    $user = user_load($view->args[0]);
    $username = $user->field_firstname['und'][0]['safe_value'];
    $view->set_title( t('Blog articles from !username', array('!username' => $username)) );
  }
  if ($view->name == 'news' && $view->current_display == 'page') {
    $user = user_load_by_name($view->args[0]);
    $username = $user->field_firstname['und'][0]['safe_value'];
    $view->set_title( t('Blog articles from !username', array('!username' => $username)) );
  }
}
