<div class="bg-primary full-screen coffee dark-hero clearfix">
  <a class="logo hidden-xs" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
    <img src="<?php print $base_path . $directory; ?>/build/svg/logo_white.svg" onerror="this.onerror=null; this.src='<?php print $base_path . $directory; ?>/build/img/logo_white_wide.png'" alt="Antistatique" />
  </a>
  <a class="logo visible-xs-block" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
    <svg version="1.1" id="Calque_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 84.6 92.5" style="enable-background:new 0 0 84.6 92.5;" xml:space="preserve" width="30" height="30">
      <g class="antistatique_logo">
        <path d="M33.5,0L0,92.5h17.6L24,73.9h35.3l6.6,18.6h18.7L51,0H33.5z M29.3,58.3l12.3-35.6l12.1,35.6H29.3z"/>
      </g>
    </svg>
  </a>
  <div class="cups">
    <img class="img-responsive" src="<?php print $base_path . $directory; ?>/build/img/tasses.png" alt="Tasses">
  </div>
  <h1><?php print t('Buvons un café ensemble!') ?></h1>
  <div class="spacer spacer-sm"></div>
  <p><?php print t("Laissez-nous votre <b>numéro</b>, <b>email</b> ou <b>Twitter handle</b> <br>& nous vous appellerons/écrirons/twitterons!"); ?></p>

  <?php if ($messages): ?>
    <div class="container">
      <?php print $messages; ?>
    </div>
  <?php endif; ?>

  <?php print render($page['content_below']); ?>

  <footer class="text-white small"><?php print t('Visitez notre '); ?><a href="http://antistatique.net">site & portfolio</a><br class="visible-xs-block"> — <a href="tel:+41216236303">+41 21 623 63 03</a> — <br class="visible-xs-block"><a href="mailto:hello@antistatique.net?subject=Café!">hello@antistatique.net</a></footer>
</div>
