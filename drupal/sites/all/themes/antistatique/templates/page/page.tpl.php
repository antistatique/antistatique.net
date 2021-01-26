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

<div id="full-accessible-navigation" class="sr-only">
    <h2>Navigation</h2>
    <nav role="navigation">
        <?php print drupal_render(menu_tree('menu-navigation-accessible')); ?>
    </nav>
</div>

<?php if (!empty($page['page_above']) || !empty($messages)): ?>
  <div class="page-top">
    <?php print $messages; ?>
    <?php print render($page['page_above']); ?>
  </div>
<?php endif; ?>

<div class="wrapper">
    <header id="navbar" role="banner" class="header <?php print $classes; ?>">
      <div class="container">
        <div class="navbar navbar-default">
          <div class="navbar-header">
            <?php if ($logo): ?>
              <a alt="Antistatique, <?php print t('Web Agency in Lausanne & Geneva'); ?>" aria-label="<?php print t('Back to the homepage'); ?>" class="logo navbar-btn navbar-brand pull-left hidden-xs hidden-sm" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                <svg version="1.1" id="Calque_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px"
                viewBox="0 0 170 35" style="enable-background:new 0 0 170 35;" xml:space="preserve" width="170" height="35">
                  <g class="antistatique_logo">
                    <path d="M46.4,25.7h3.9v-3.4h-3c-0.5,0-0.9-0.4-0.9-0.9v-7.8h3.9v-3.2h-3.9V6.1H43v4.4h-3.2v3.2H43v8.7
                    C43,24.2,44.5,25.7,46.4,25.7z"/>
                    <path d="M83.3,13.7v-3.2h-3.9V6.1h-3.5v4.4h-3.2v3.2h3.2v8.7c0,1.9,1.6,3.4,3.5,3.4h3.9v-3.4h-3c-0.5,0-0.9-0.4-0.9-0.9v-7.8H83.3z
                    "/>
                    <path d="M25.2,25.7h3.5v-8.6c0-2.2,1.5-3.8,3.5-3.8c1.6,0,2.7,1.2,2.7,3.5v9h3.4v-9.3c0-4.4-2.4-6.3-5.3-6.3c-2,0-3.5,1.1-4.3,2.2
                    h0v-1.8h-3.5V25.7z"/>
                    <path d="M146.8,10.5v8.6c0,2.2-1.5,3.8-3.5,3.8c-1.6,0-2.7-1.2-2.7-3.5v-9h-3.4v9.3c0,4.4,2.4,6.3,5.3,6.3c2,0,3.5-1.1,4.3-2.2h0
                    v1.8h3.5V10.5H146.8z"/>
                    <path d="M110.5,13.7v-3.2h-3.9V6.1h-3.5v4.4H100v3.2h3.2v8.7c0,1.9,1.6,3.4,3.5,3.4h3.9v-3.4h-3c-0.5,0-0.9-0.4-0.9-0.9v-7.8H110.5
                    z"/>
                    <rect x="53.1" y="10.5" width="3.5" height="15.3"/>
                    <path id="_x3C_Tracé_x3E__1_" d="M160.2,23c-1.9,0-3.6-1.3-3.9-3.8h11.3c0-6.2-3.6-9.1-7.7-9.1c-4.2,0-7.4,3.3-7.4,8s3.3,8,7.7,8
                    c3.1,0,5.6-1.2,7.1-4.8l-3.7-0.4C163.1,22.3,161.8,23,160.2,23z M160.1,13.3c1.8,0,3.4,1.3,3.7,3.3h-7.4
                    C156.7,14.6,158.2,13.3,160.1,13.3z"/>
                    <path d="M115.1,8.8c1.3,0,2.3-1,2.3-2.3c0-1.3-1-2.3-2.3-2.3c-1.3,0-2.3,1-2.3,2.3C112.8,7.8,113.8,8.8,115.1,8.8z"/>
                    <rect x="113.3" y="10.5" width="3.4" height="15.3"/>
                    <path d="M55,8.8c1.2,0,2.3-1,2.3-2.3c0-1.3-1-2.3-2.3-2.3c-1.3,0-2.3,1-2.3,2.3C52.7,7.8,53.6,8.8,55,8.8z"/>
                    <path id="_x3C_Tracé_x3E_" d="M15,5.4h-4.4L2.4,25.7H6l2.1-5h9.6l2,5h3.5L15,5.4z M9.4,17.3l2.9-8.2h0.9l3,8.2H9.4z"/>
                    <path d="M66.7,16.7c-2.2-0.6-3.8-0.8-3.8-2.1c0-1,0.9-1.6,2.2-1.6c1.6,0,2.5,0.9,2.6,2h3.7c-0.3-3-2.7-5-6.2-5
                    c-3.4,0-5.9,2.1-5.9,4.8c0,3.4,2.9,4.3,5.3,4.8c2.2,0.5,3.5,0.9,3.5,1.9c0,1-1.2,1.4-2.5,1.4c-1.3,0-2.4-0.6-2.7-2H59
                    c0.3,3.1,2.8,5,6.6,5c3.6,0,6-2,6-4.8C71.6,18.1,69,17.3,66.7,16.7z"/>
                    <path id="_x3C_Tracé_x3E__3_" d="M130.9,10.5v1.7h-0.1c-0.9-0.9-2.4-2-4.8-2c-4,0-7.1,3.3-7.1,8s3.1,8,7.1,8
                    c2.3,0,3.8-1.1,4.8-2.1h0.1l-0.1,6.8h3.5l0.1-20.3H130.9z M126.8,22.9c-2.4,0-4.2-1.9-4.2-4.7c0-2.8,1.8-4.7,4.2-4.7
                    c2.4,0,4.2,1.9,4.2,4.7C131,20.9,129.1,22.9,126.8,22.9z"/>
                    <path id="_x3C_Tracé_x3E__2_" d="M98.5,22.3v-6.2c0-3.7-2.8-6.1-6.6-6.1c-3.8,0-6.5,1.9-6.6,5.2h3.5c0.2-1.5,1.5-2.3,3.1-2.3
                    c1.7,0,3.2,1,3.2,3v0.5c0,0-1.3,0-4.5,0.1c-4.2,0.2-5.6,2.4-5.6,4.6c0,2.9,2.2,4.8,5.3,4.8c2.3,0,3.7-0.9,4.8-3h0.9
                    c0,2,0.3,2.7,1.4,2.7h3.2v-3.4H98.5z M95,19.5c0,2.4-1.5,3.7-4,3.7c-1.4,0-2.4-0.7-2.4-2c0-1.1,0.6-1.9,2.7-2.1
                    C93.1,19,95,19,95,19V19.5z"/>
                  </g>
                </svg>
              </a>
              <a alt="Antistatique, <?php print t('Web Agency in Lausanne & Geneva'); ?>" aria-label="<?php print t('Back to the homepage'); ?>" class="logo navbar-btn navbar-brand pull-left visible-xs-inline-block visible-sm-inline-block" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                <svg version="1.1" id="Calque_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px"
                   viewBox="0 0 95 92" style="enable-background:new 0 0 95 92;" xml:space="preserve" width="30" height="30">
                  <g class="antistatique_logo">
                    <path d="M57.4 0h-20L.2 92h16.5L26 69.5h43.4L78.7 92h16.1L57.4 0zm-25 53.6l13.2-37.1h3.9l13.4 37.1H32.4z" class="st0"/>
                  </g>
                </svg>
              </a>
            <?php endif; ?>

            <a href="<?php print url('node/4'); ?>" type="button" class="pull-right btn btn-primary navbar-btn visible-xs">
              <i aria-hidden="true" class="fa fa-paper-plane"></i>
              <span class="sr-only"><?php print t('Contact'); ?></span>
            </a>

            <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
              <span class="sr-only">Toggle navigation</span>
              <div aria-hidden="true" class="inline-block">
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
                <a href="<?php print $front_page; ?>" class="visible-xs-block logo"><span class="sr-only">Antistatique</span></a>
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
</div> <!-- /.wrapper -->

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
          <p class="hidden-xs">
            <strong><a href="<?php print url('node/4'); ?>#offices">Geneva</a></strong>
            <span>&nbsp;+41 22 552 03 06&nbsp;</span>&nbsp;
            <strong><a href="<?php print url('node/4'); ?>#offices">Lausanne</a></strong>
            <span>&nbsp;+41 21 623 63 03&nbsp;</span>
          </p>

        <span class="visible-xs">
          <p>
            <a href="tel:+41225520306" class="btn btn-primary">Geneva +41&nbsp;22&nbsp;552&nbsp;03&nbsp;06</a>
          </p>
          <p>
            <a href="tel:+41216236303" class="btn btn-primary">Lausanne +41&nbsp;21&nbsp;623&nbsp;63&nbsp;03</a>
          </p>
        </span>

        <div class="visible-xs spacer spacer-xs"></div>
        <strong>&nbsp;<a href="mailto:hello@antistatique.net">hello@antistatique.net</a>&nbsp;</strong>
        <div class="spacer spacer-lg"></div>
        <?php print render($page['footer']); ?>
        <div class="spacer spacer-sm"></div>
      </div>
    </div>
    </div>
</footer>
