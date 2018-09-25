<style>
  .bg-full-screen {
    display: flex;
    flex-direction: column;
    padding: 15px;
    background: #e30074;
    min-height: 100vh;
  }
  .bg-full-screen a {
    text-decoration: underline;
    color: #fff;
    font-weight: bold;
  }
  .dontpanic {
    margin-top: auto;
    margin-bottom: auto;
  }
  footer {
    margin-top: auto;
  }
  .well {
    border-radius: 4px;
    box-shadow: 0 3px 16px 3px hsl(329, 100%, 31%, 0.5);
  }
  @media screen and (max-width: 720px) {
    .well {
      padding: 19px;
    }
  }
  .big-logo {
    width: 80vw;
    max-width: 1000px;
  }
</style>
<?php if (!empty($tabs)): ?>
  <?php print render($tabs); ?>
<?php endif; ?>
<?php print render($title_prefix); ?>
<?php print render($title_suffix); ?>

<div class="bg-full-screen dark-hero text-center clearfix">
  <div class="dontpanic">
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 317 212" class="big-logo">
      <path d="M308.6 154.8h-26.5v-24.6h-4.3v53.6h4.3v-24.6h26.5v20.3c0 18.8-9.9 28.4-28.6 28.4-18.5 0-28.6-9.7-28.6-28.4v-45.1c0-18.6 10.1-28.3 28.6-28.3 18.6 0 28.6 9.7 28.6 28.3v20.4zm-88.6 51v-97.6h26.3v97.6H220zm-31.5-97.6h26.3v97.6h-50.4l-5.3-77.8h-1.3v77.8h-26.5v-97.6h50.5L187 186h1.4v-77.8h.1zm-93.3 61.1h5.3l-2-42h-1.4l-1.9 42zm7 36.5l-.7-14.6h-7.3l-.7 14.6H68l5.5-97.6h48.7l5.5 97.6h-25.5zm-63.6-36.5v-39.2h-4.3v39.2h4.3zM7.9 205.8v-97.6h28.4c19.5 0 28.6 9.1 28.6 28.3V163c0 19.2-9.1 28.3-28.6 28.3h-2.1v14.6H7.9v-.1zM260.2 6.2h39.5V28h-6.6v75.7h-26.3V28.1h-6.6V6.2zM220 54.7V6.2h26.5l-6.6 48.4-19.9.1zM188.5 6.2h26.3v97.6h-50.4L159.1 26h-1.3v77.8h-26.5V6.2h50.5L187 84h1.4V6.2h.1zM95.6 82h4.3V28.1h-4.3V82zm2.3 23.9c-19.5 0-28.6-9-28.6-28.1V32.3c0-19.2 9.1-28.1 28.6-28.1s28.4 9 28.4 28.1v45.5c0 19.1-9 28.1-28.4 28.1zM38.7 82V28.1h-4.3V82h4.3zM7.9 6.2h28.6C56.8 6.2 65 14.5 65 34.5v40.9c0 20.2-8.3 28.4-28.6 28.4H7.9V6.2z" fill="#fff"/>
    </svg>
  </div>
  <h1 class="sr-only"><?php print $title; ?></h1>
  <div class="spacer spacer-sm"></div>

  <div class="container">
    <div class="row">
      <div class="col-md-6 col-md-offset-3 col-sm-8 col-sm-offset-2">
        <div class="text-white row">
            <?php print $page['content']['system_main']['nodes'][$node->nid]['body']['#object']->body[$language->language][0]['safe_value'] ?? $page['content']['system_main']['nodes'][$node->nid]['body']['#object']->body['fr'][0]['safe_value'] ?>
        </div>
      </div>
    </div>
  </div>


  <?php if ($messages): ?>
    <div class="container">
      <?php print $messages; ?>
    </div>
  <?php endif; ?>

  <?php print render($page['content_below']); ?>

  <div class="spacer spacer-sm"></div>

  <footer class="text-white small">
    <a class="logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" style="display:block; margin-bottom:0.4em;">
      <img style="max-width: 120px;" src="<?php print $base_path . $directory; ?>/build/svg/logo_white.svg" onerror="this.onerror=null; this.src='<?php print $base_path . $directory; ?>/build/img/logo_white_wide.png'" alt="Antistatique"/>
    </a>
    <?php print t('Visitez notre '); ?><a href="http://antistatique.net">site & portfolio</a><br class="visible-xs-block"> • Lausanne <a href="tel:+41216236303">+41 21 623 63 03</a> • Genève <a href="tel:+41225520306">+41 22 552 03 066
    </a> • <br class="visible-xs-block"><a href="mailto:hello@antistatique.net?subject=Café!">hello@antistatique.net</a>
  </footer>
  <div class="spacer spacer-sm"></div>
</div>
