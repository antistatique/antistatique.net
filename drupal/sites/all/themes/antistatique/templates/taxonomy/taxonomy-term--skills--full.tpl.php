<?php

/**
 * @file
 * Default theme implementation to display a term.
 *
 * Available variables:
 * - $name: (deprecated) The unsanitized name of the term. Use $term_name
 *   instead.
 * - $content: An array of items for the content of the term (fields and
 *   description). Use render($content) to print them all, or print a subset
 *   such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $term_url: Direct URL of the current term.
 * - $term_name: Name of the current term.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - taxonomy-term: The current template type, i.e., "theming hook".
 *   - vocabulary-[vocabulary-name]: The vocabulary to which the term belongs to.
 *     For example, if the term is a "Tag" it would result in "vocabulary-tag".
 *
 * Other variables:
 * - $term: Full term object. Contains data that may not be safe.
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $page: Flag for the full page state.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the term. Increments each time it's output.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * @see template_preprocess()
 * @see template_preprocess_taxonomy_term()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?>">

    <div class="img-hero">
        <div class="hidden-xs"><?php print render($content['field_svg_title']); ?></div>
        <?php print render($title_prefix); ?>
        <h1<?php print $title_attributes; ?>><span><?php print $term_name; ?></span></h1>
        <?php print render($title_suffix); ?>
    </div>

    <div class="container">
        <div class="content">
            <div class="row">
                <div class="col-sm-offset-1 col-sm-10 col-md-offset-2 col-md-8">
                    <?php if (!empty($term->field_skill_symbol) || !empty($term->field_fa)): ?>
                        <div class="text-center">
                            <?php if (!empty($term->field_skill_symbol)): ?>
                                <span class="skill-icon skill-icon-lg" aria-hidden="true">
                                    <?php $svg_file = field_get_items('taxonomy_term', $term, 'field_skill_symbol') ?>
                                    <?php $svg_content = file_get_contents(drupal_realpath($svg_file[0]['uri'])); ?>
                                    <?= $svg_content ?>
                                </span>
                            <?php elseif (!empty($term->field_fa)): ?>
                                <?php $icon = field_get_items('taxonomy_term', $term, 'field_fa') ?>
                                <i aria-hidden="true" class="fa fa-3x fa-<?= $icon[0]['safe_value'] ?>"></i>
                            <?php endif; ?>
                        </div>
                        <div class="spacer spacer-sm"></div>
                    <?php endif; ?>
                    <?php print render($content['description_field']); ?>
                </div>
            </div>
        </div>
    </div>

    <?php $cta_text = field_get_items('taxonomy_term', $term, 'field_skills_cta_text'); ?>
    <?php if ($cta_text): ?>
    <div class="spacer spacer-md"></div>
    <div class="bg-foggy">
        <div class="spacer spacer-sm"></div>
        <div class="container">
            <div class="row">
                <div class="col-sm-offset-3 col-sm-6 text-center">
                    <h5><?php print $cta_text[0]['value']; ?></h5>
                </div>
                <div class="col-sm-12 text-center clearfix">
                    <?php print views_embed_view('users', 'block_centered'); ?>
                </div>
                <div class="col-sm-offset-3 col-sm-6 text-center">
                    <p><a href="<?php print url(drupal_get_path_alias('node/4')); ?>" class="btn btn-primary"><?php print t('Contact us'); ?></a></p>
                </div>
            </div>
        </div>
        <div class="spacer spacer-sm"></div>
    </div>
    <div class="spacer spacer-sm"></div>
    <?php endif; ?>

    <?php $child_skills = views_get_view_result('skills', 'skills_children');?>
    <?php if (!empty($child_skills)): ?>
    <div class="bg-foggy">
        <div class="spacer spacer-sm"></div>
        <div class="container text-center">
            <?php print views_embed_view('skills', 'skills_children'); ?>
        </div>
        <div class="spacer spacer-xs"></div>
    </div>
    <div class="spacer spacer-sm"></div>
    <?php endif; ?>
</div>
