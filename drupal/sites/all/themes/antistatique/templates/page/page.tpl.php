<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>

<?php if (!empty($page['page_above']) || !empty($messages)): ?>
  <div class="page-top">
    <?php print $messages; ?>
    <?php print render($page['page_above']); ?>
  </div>
<?php endif; ?>

<header id="navbar" role="banner" class="header <?php print $classes; ?>">
  <div class="container">
    <div class="navbar navbar-default">
      <div class="navbar-header">
        <?php if ($logo): ?>
          <a class="logo navbar-btn navbar-brand pull-left hidden-xs hidden-sm" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
            <svg version="1.1" id="Calque_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px"
            viewBox="0 0 332 61.9" style="enable-background:new 0 0 332 61.9;" xml:space="preserve" width="170" height="35">
              <g class="antistatique_logo">
                <path class="st0" d="M156,40.3c-1.1,0-2.1-0.6-2.1-1.8V22.7h5.1v-6.4h-5.1V6.1l-7.4,4v6.2H142v6.4h4.5V40c0,3.4,2.1,7,8.1,7
                c2.8,0,4.6-0.7,4.6-0.7v-6.6C159.2,39.6,157.1,40.3,156,40.3z"/>
                <path class="st0" d="M92,40.3c-1.1,0-2.1-0.6-2.1-1.8V22.7H95v-6.4H90V6.1l-7.4,4v6.2h-4.5v6.4h4.5V40c0,3.4,2.1,7,8.1,7
                c2.8,0,4.6-0.7,4.6-0.7v-6.6C95.2,39.6,93.2,40.3,92,40.3z"/>
                <path class="st0" d="M62.6,15.5c-2.9,0-6.4,1.8-8,4.4l-0.5-3.7h-6.6V47h7.4V29.2c0-4.2,3.5-6.8,6.7-6.8c4.2,0,5.7,3.6,5.7,7V47h7.4
                V29C74.7,20.3,70.4,15.5,62.6,15.5z"/>
                <path class="st0" d="M286.4,33c0,4.2-3.6,6.8-6.8,6.8c-3.5,0-4.7-1.8-4.7-7V16.3h-7.4v17.3c0,9.1,3.7,13.5,11.2,13.5
                c3.1,0,6.3-1.4,8.1-4.1l0.3,3.4h6.6V16.3h-7.4V33z"/>
                <path class="st0" d="M210.8,40.3c-1.1,0-2.1-0.6-2.1-1.8V22.7h5.1v-6.4h-5.1V6.1l-7.4,4v6.2h-4.5v6.4h4.5V40c0,3.4,2.1,7,8.1,7
                c2.8,0,4.6-0.7,4.6-0.7v-6.6C214.1,39.6,212,40.3,210.8,40.3z"/>
                <rect x="100.9" y="16.2" class="st0" width="7.4" height="30.8"/>
                <path class="st0" d="M104.6,2.8c-2.5,0-4.5,2-4.5,4.5c0,2.5,2,4.5,4.5,4.5c2.5,0,4.5-2,4.5-4.5C109.1,4.8,107,2.8,104.6,2.8z"/>
                <rect x="219.9" y="16.2" class="st0" width="7.4" height="30.8"/>
                <path class="st0" d="M223.6,2.8c-2.5,0-4.5,2-4.5,4.5c0,2.5,2,4.5,4.5,4.5c2.5,0,4.5-2,4.5-4.5C228.1,4.8,226.1,2.8,223.6,2.8z"/>
                <path class="st0" d="M327.4,32.6c0-5.1-1.2-9.4-3.6-12.4c-2.3-2.9-5.7-4.7-10.3-4.7c-4.1,0-7.9,1.6-10.6,4.7
                c-2.7,3-4.2,7.1-4.2,11.6c0,10.1,7.6,15.9,14.6,15.9c7.1,0,11.6-3.1,13.2-7.7l-7-2c-1.2,1.8-2.9,2.9-6.3,2.9
                c-4.1,0-6.6-3.4-6.8-6.7h20.8C327.4,34.2,327.4,33.3,327.4,32.6z M306.7,28.4c0.5-2.9,2.3-6.1,6.7-6.1c4.4,0,6,3,6.3,6.1H306.7z"/>
                <path class="st0" d="M20.1,4.3L4.6,47h8.1l3-8.6H32l3,8.6h8.6L28.1,4.3H20.1z M18.1,31.2l5.7-16.5l5.6,16.5H18.1z"/>
                <path class="st0" d="M112.6,38.3c0.9,5.8,6,9.5,13.2,9.5c8.8,0,13-4,13-9.3c0-5.6-3.9-8.3-10.1-10c-6.6-1.8-7.6-2.4-7.6-3.9
                c0-1,1.1-2.6,4.2-2.6c3.4,0,5.2,1.6,5.8,3.5l7.2-1.2c-1.4-5.2-5.9-8.6-13-8.6c-6.6,0-11.5,4.2-11.5,9.2c0,5.2,3.3,7.5,9.6,9
                c6.5,1.6,8.1,2.8,8.1,4.3c0,1.7-1.7,2.9-5.5,2.9c-3.1,0-5.5-1.6-6-4.1L112.6,38.3z"/>
                <path class="st0" d="M254.4,19.9c-1.2-2.4-4.1-4.3-7.7-4.3c-8.1,0-14.3,7-14.3,16.3c0,9.2,5.9,15.9,13.9,15.9c3.2,0,6.5-2,7.8-4.8
                v16.2h7.4V16.3h-6.6L254.4,19.9z M247.1,40.8c-4.1,0-7.4-4.1-7.4-9.2c0-5.1,3.3-9.2,7.4-9.2c4.1,0,7.4,4.1,7.4,9.2
                C254.5,36.7,251.2,40.8,247.1,40.8z"/>
                <path class="st0" d="M193.3,40.3c-0.8,0-1.5-0.5-1.5-1.4V16.3h-6.6l-0.5,3.6c-1.5-2.8-4.6-4.3-7.8-4.3c-8.1,0-14.3,7-14.3,16.3
                c0,9.2,5.9,15.9,13.9,15.9c3.6,0,7.3-2.5,8.4-5c0,2.1,2,4.2,5.7,4.2c2.7,0,5-0.7,5-0.7v-6.6C195.8,39.6,194.3,40.3,193.3,40.3z
                M177.4,40.8c-4.1,0-7.4-4.1-7.4-9.2c0-5.1,3.3-9.2,7.4-9.2c4.1,0,7.4,4.1,7.4,9.2C184.8,36.7,181.5,40.8,177.4,40.8z"/>
              </g>
            </svg>
          </a>
          <a class="logo navbar-btn navbar-brand pull-left visible-xs-inline-block visible-sm-inline-block" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
            <svg version="1.1" id="Calque_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px"
               viewBox="0 0 84.6 92.5" style="enable-background:new 0 0 84.6 92.5;" xml:space="preserve" width="30" height="30">
              <g class="antistatique_logo">
                <path d="M33.5,0L0,92.5h17.6L24,73.9h35.3l6.6,18.6h18.7L51,0H33.5z M29.3,58.3l12.3-35.6l12.1,35.6H29.3z"/>
              </g>
            </svg>
          </a>
        <?php endif; ?>

        <a href="<?php print url('node/4'); ?>" type="button" class="pull-right btn btn-primary navbar-btn visible-xs">
          <i class="fa fa-paper-plane"></i>
          <span class="sr-only"><?php print t('Contact'); ?></span>
        </a>

        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
          <span class="sr-only">Toggle navigation</span>
          <div class="inline-block">
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </div>
          <?php print t('Menu'); ?>
        </button>
      </div>

      <?php if (!empty($primary_nav)): ?>
        <div class="navbar-collapse navbar-mobile collapse">
          <nav role="navigation">
            <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
            <?php endif; ?>
            <div class="navbar-right">
              <div class="nav navbar-btn inline-block">
                <a href="<?php print url('node/4'); ?>" class="btn btn-primary"><?php print t('Contact Us'); ?></a>
              </div>
              <?php if ($page['navigation']): ?>
                <div class="nav navbar-btn inline-block">
                  <?php print render($page['navigation']); ?>
                </div>
              <?php endif ?>
            </div>
          </nav>
          <div class="visible-xs-block spacer spacer-xs"></div>
          <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
            <span class="sr-only">Close navigation</span>
            <span class="h3">&times;</span>
            <?php print t('Menu'); ?>
          </button>
        </div>
      <?php endif; ?>

    </div>
    <div class="breadcrumb">
      <?php if (!empty($page['header'])): ?>
        <?php print $breadcrumb_tagline_section; ?>
        <?php print render($page['header']); ?>
      <?php endif; ?>
    </div>
  </div>
</header>

<div class="main-container">

  <a id="main-content"></a>

  <?php if (!empty($tabs)): ?>
    <?php print render($tabs); ?>
  <?php endif; ?>

  <?php if (!empty($page['help'])): ?>
    <?php print render($page['help']); ?>
  <?php endif; ?>

  <?php if (!empty($action_links)): ?>
    <ul class="action-links"><?php print render($action_links); ?></ul>
  <?php endif; ?>

  <?php if (!isset($node) && !isset($no_title)): ?>
    <div class="img-hero">
      <?php print render($title_prefix); ?>
      <h1<?php print $title_attributes; ?>><span><?php print $title; ?></span></h1>
      <?php print render($title_suffix); ?>
    </div>
    <div class="spacer spacer-md"></div>
    <div class="container">
  <?php endif ?>

  <?php print render($title_prefix); ?>
  <?php print render($title_suffix); ?>

  <?php print render($page['content']); ?>

  <?php if (!isset($node) && !isset($no_title)): ?>
    </div>
  <?php endif ?>

  <?php if (!empty($page['above_footer'])): ?>
    <div class="above_footer">
      <?php print render($page['above_footer']); ?>
    </div>
  <?php endif; ?>

</div>

<footer class="footer">
  <div class="container">
    <div class="row">
      <div class="col-xs-12 text-center">
        <div class="spacer spacer-md"></div>

        &nbsp;  <strong><a href="#">Lausanne</a></strong> & <strong><a href="#">Geneva</a></strong>&nbsp;
        <div class="visible-xs spacer spacer-xs"></div>
        <span class="visible-xs">
          <a href="tel:0041216236303" class="btn btn-primary">+41 21 623 63 03</a>
        </span>
        <span class="hidden-xs"> &nbsp;  +41 21 623 63 03 &nbsp;  </span>
        <div class="visible-xs spacer spacer-xs"></div>
        <strong>&nbsp;<a href="mailto:hello@antistatique.net">hello@antistatique.net</a>&nbsp;</strong>
        <div class="spacer spacer-lg"></div>
        <?php print render($page['footer']); ?>
        <div class="spacer spacer-sm"></div>
      </div>
    </div>
    </div>
</footer>
