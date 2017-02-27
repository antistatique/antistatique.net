<?php
// --------------------------------------------------------------------------
// Core Drupal hook implementations - For Blocks

function antistatique_article_block_info() {
    $blocks = array();
    $blocks['antistatique_article_warning'] = array('info' => t('Antistatique - Article/Blog - Warning Message'));
    return $blocks;
}

function  antistatique_article_block_view($delta = '',$params = array()) {
    $block = array();
    switch ($delta) {
        case 'antistatique_article_warning':
            $block['content']['#markup'] = antistatique_article_warning_block();
            break;

    }
    return $block;
}

// -------------------------------------------------------------------------------------------------
// Includes
include_once 'src/blocks/warning.php';
