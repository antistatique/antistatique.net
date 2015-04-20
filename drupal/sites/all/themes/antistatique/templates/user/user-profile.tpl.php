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
hide($user_profile['field_teammate_hero_image']);
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
      <div class="col-sm-offset-1 col-sm-10 col-md-offset-2 col-md-8 col-lg-offset-3 col-lg-6">
        <header>
          <div class="spacer spacer-sm visible-xs"></div>
          <div class="team-tiny">
            <div class="team-avatar">
              <img src="<?php print render($user_profile['user_picture']); ?>" alt="<?php print $user_profile['field_firstname'][0]['#markup']; ?>" class="img-circle img-responsive">
              <h2 class="h6 text-md"><?php print render($user_profile['field_teammate_job_title']) ?></h2>
            </div>
          </div>
        </header>
        <?php print render($user_profile['field_teammate_body']); ?>
        <hr>
        <div class="row">
          <div class="col-md-6">
            <?php print render($user_profile['field_teammate_links']) ?>
          </div>
          <div class="col-md-6">
            <?php print render($user_profile['field_email']); ?>
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
        <h2 class="h3 text-center"><?php print t('Some of the projects done with !user', array('!user' => render($user_profile['field_firstname'])) ); ?></h2>
        <?php print render($user_profile['field_related_project']); ?>
      </div>
    <?php endif ?>
  </div>
</div>
