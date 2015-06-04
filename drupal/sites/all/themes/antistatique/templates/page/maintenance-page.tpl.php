<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page while offline.
 *
 * All the available variables are mirrored in html.tpl.php and page.tpl.php.
 * Some may be blank but they are provided for consistency.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 *
 * @ingroup themeable
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">

<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>">
  <div id="page" class="container">
    <div class="spacer"></div>
    <div id="header">
      <div id="logo-title">

        <?php if (!empty($logo)): ?>
          <a class="" href="<?php print $base_path; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
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
        <?php endif; ?>

      </div> <!-- /logo-title -->

      <?php if (!empty($header)): ?>
        <div id="header-region">
          <?php print $header; ?>
        </div>
      <?php endif; ?>

    </div> <!-- /header -->

    <div id="container" class="clearfix">

      <?php if (!empty($sidebar_first)): ?>
        <div id="sidebar-first" class="column sidebar">
          <?php print $sidebar_first; ?>
        </div> <!-- /sidebar-first -->
      <?php endif; ?>

      <div id="main" class="column"><div id="main-squeeze">

        <div id="content">
          <?php if (!empty($title)): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
          <?php if (!empty($messages)): print $messages; endif; ?>
          <div id="content-content" class="clearfix">
            <?php print $content; ?>
          </div> <!-- /content-content -->
        </div> <!-- /content -->

      </div></div> <!-- /main-squeeze /main -->

      <?php if (!empty($sidebar_second)): ?>
        <div id="sidebar-second" class="column sidebar">
          <?php print $sidebar_second; ?>
        </div> <!-- /sidebar-second -->
      <?php endif; ?>

    </div> <!-- /container -->

    <div id="footer-wrapper">
      <div id="footer">
        <?php if (!empty($footer)): print $footer; endif; ?>
      </div> <!-- /footer -->
    </div> <!-- /footer-wrapper -->

  </div> <!-- /page -->

</body>
</html>