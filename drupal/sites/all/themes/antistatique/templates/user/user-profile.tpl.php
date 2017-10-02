<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */
$account = menu_get_object('user');
$is_working = $user_profile['field_teammate_currently_working'][0]['#markup'];
$winner = $user_profile['field_pingpong_ranking'][0]['#markup'] == 1;
hide($user_profile['field_teammate_currently_working']);
?>
<div id="user-<?php print $account->uid; ?>" class="profile profile-full bg-foggy"<?php print $attributes; ?>>

  <div class="img-hero teammate-hero">
    <?php print render($title_prefix); ?>
    <h1<?php print $title_attributes; ?>><span><?php print render($user_profile['field_firstname']); ?> <?php print render($user_profile['field_lastname']); ?></span></h1>
    <?php print render($title_suffix); ?>
  </div>

  <div class="container cover-overlap">
    <div class="row">
      <div class="col-sm-offset-1 col-sm-10 col-md-offset-2 col-md-8 col-lg-offset-2 col-lg-8">
        <header>
          <div class="spacer spacer-sm visible-xs"></div>
          <div class="team-tiny">
            <div class="team-avatar <?php if ($winner) print 'winner'; ?>">
              <img src="<?php print render($user_profile['user_picture']); ?>" alt="<?php print $user_profile['field_firstname'][0]['#markup']; ?>" class="img-circle img-responsive">
              <h2 class="h6 text-md"><?php print render($user_profile['field_teammate_job_title']) ?></h2>
              <div class="spacer spacer-sm"></div>
            </div>
          </div>
        </header>
        <?php print render($user_profile['field_teammate_body']); ?>

        <?php if (!empty($user_profile['field_skills'])): ?>
        <hr>
        <h2 class="h4 text-center"><?= t('Skills'); ?></h2>
        <div class="row">
            <?php foreach ($field_skills as $key => $term): ?>
            <div class="col-sm-6 col-md-4">
                <?php $term = taxonomy_term_load($term['tid']); ?>
                <a href="<?= url(drupal_get_path_alias('taxonomy/term/' . $term->tid) ) ?>" class="btn btn-default<?php if (!empty($term->field_skill_symbol)) print ' field-skills'; ?>">
                    <?php if (!empty($term->field_skill_symbol)): ?>
                        <span class="skill-icon" aria-hidden="true">
                            <?php $svg_file = field_get_items('taxonomy_term', $term, 'field_skill_symbol') ?>
                            <?php $svg_content = file_get_contents(drupal_realpath($svg_file[0]['uri'])); ?>
                            <?= $svg_content ?>
                        </span>
                    <?php elseif (!empty($term->field_fa)): ?>
                        <?php $icon = field_get_items('taxonomy_term', $term, 'field_fa') ?>
                        <i aria-hidden="true" class="fa fa-<?= $icon[0]['safe_value'] ?>"></i>
                    <?php endif; ?>
                    <?= $term->name ?>
                </a>
            </div>
            <?php endforeach; ?>
        </div>
        <?php endif; ?>

        <hr>
        <div class="row">
          <div class="col-md-4">
            <?php print render($user_profile['field_teammate_links']) ?>
          </div>
          <div class="col-md-8">
            <?php if ($is_working): ?>
              <p><?php print render($user_profile['field_email']); ?></p>
            <?php endif ?>
            <p><?php print t('<a href="/fr/nous/bloggons/@username" class="btn btn-default"><i aria-hidden="true" class="fa fa-pencil"></i> !name\'s articles</a>', array('@username' => $account->name, '!name' => $user_profile['field_firstname'][0]['#markup'])); ?></p>
          </div>
        </div>
      </div>
    </div>
    <div class="spacer"></div>
    <div class="clearfix">
      <?php print render($user_profile['field_four_images']); ?>
    </div>

    <?php if (!empty($user_profile['field_related_project'])): ?>
      <div class="spacer"></div>
      <div class="row">
        <h2 class="h3 text-center"><?php print t('Some of !user\'s projects', array('!user' => render($user_profile['field_firstname'])) ); ?></h2>
        <?php print render($user_profile['field_related_project']); ?>
      </div>
    <?php endif ?>
  </div>

  <?php if (isset($region['content_below'])): ?>
    <?php print render($region['content_below']); ?>
  <?php endif; ?>

</div>
