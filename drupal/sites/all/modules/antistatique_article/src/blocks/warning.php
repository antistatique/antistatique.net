<?php

function antistatique_article_warning_block($param = null) {
    $variables = array();
    global $language;

    $node = menu_get_object();
    if ($node = menu_get_object() && $node->language != $language->language) {
        return theme('antistatique_article_warning_block', $variables);
    }
}
