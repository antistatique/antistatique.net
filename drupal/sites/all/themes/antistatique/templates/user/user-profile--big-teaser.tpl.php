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
global $language;

$username = render($user_profile['field_firstname'][0]['#markup']) .' '. render($user_profile['field_lastname'][0]['#markup']);
$userpath = '/' . $language->language . '/' . drupal_get_path_alias('user/' . $user_id);

?>
<?php if ($username != ' '): ?>
  <a href="<?php print $userpath; ?>" class="profile team-teaser"<?php print $attributes; ?>>
    <div class="team-avatar">
      <img src="<?php print render($user_profile['user_picture']); ?>" alt="<?php print $username; ?>" class="img-circle img-responsive">
    </div>
    <p class="h6 text-md text-dark"><?php print  $username; ?></p>
    <small class="text-muted hidden-xs"><?php print render($user_profile['field_teammate_job_title']); ?></small>
  </a>
<?php endif ?>
