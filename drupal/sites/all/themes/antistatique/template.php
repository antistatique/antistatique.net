<?php
/**
 * @file
 * template.php
 */

function antistatique_preprocess_node(&$vars) {
  // set title as white if image is dark
  if ($vars['field_hero_image_is_dark'][0]['value'] == '1') {
    $vars['title_attributes_array']['class'][] = 'text-white';
  }

}

function antistatique_preprocess_field(&$vars) {
  // dpm($vars);
}
