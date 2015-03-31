<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */

hide($content['comments']);
if (!empty($content['links'])) {
  hide($content['links']);
}
hide($content['field_svg_title']);
hide($content['field_teammate_hero_image']);
// hide($content['field_paragraphs']);
hide($content['field_images']);
hide($content['field_year']);
hide($content['field_testimonial_name']);
hide($content['field_testimonial_quote']);
hide($content['field_testimonial_position']);
hide($content['field_year']);
hide($content['field_links']);
hide($content['field_credits']);
hide($content['field_skills']);
hide($content['field_client']);

if (!empty($content['field_hero_image_is_dark'])) {
  hide($content['field_hero_image_is_dark']);
}
$file_hero_image = null;
if(isset($node->field_teammate_hero_image['und'][0]['fid'])){
  $file_hero_image = file_load($node->field_teammate_hero_image['und'][0]['fid']);
}

?>

<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> main-content clearfix "<?php print $attributes; ?>>
  <div class="img-hero<?php if ($display_submitted): ?> teammate-hero<?php endif; ?>" <?php if($file_hero_image): ?>style="background-image:url('<?php print file_create_url($file_hero_image->uri); ?>')"<?php endif ;?>>
    <?php print render($content['field_svg_title']); ?>
    <?php print render($title_prefix); ?>
    <?php if (!empty($title)): ?>
      <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
  </div>
  <div class="container <?php if ($display_submitted) : ?>cover-overlap<?php endif; ?>">
    <?php if ($page && $display_submitted): ?>

      <?php if ($display_submitted): ?>
        <script type="text/javascript">
          (function () {
            var s = document.createElement('script'); s.async = true;
            s.type = 'text/javascript'; s.src = '//antistatique.disqus.com/count.js';
            (document.getElementsByTagName('HEAD')[0] || document.getElementsByTagName('BODY')[0]).appendChild(s);
          }());
        </script>

        <div class="row">
          <div class="col-sm-offset-1 col-sm-10 col-md-offset-2 col-md-8 col-lg-offset-3 col-lg-6">
            <header>
              <div class="spacer spacer-sm visible-xs"></div>
              <?php print render($content['field_co_author']); ?>
              <div class="spacer spacer-sm hidden-xs"></div>
              <hr>
              <p class="meta"><?php print format_date($created, 'custom', 'M jS Y'); ?> <?php print t('in'); ?> <?php print render($content['field_category']); ?><span class="pull-right"><a href="#disqus_thread"></a> </span></p>
            </header>
          </div>
        </div>
      <?php endif; ?>

    <?php endif; ?>
    <div class="row">
      <div class="col-sm-offset-1 col-sm-10 col-md-offset-2 col-md-8 col-lg-offset-3 col-lg-6 content">
        <?php print render($content['body']); ?>
      </div>
      <?php if (!empty($content['field_links'])): ?>
        <div class="col-sm-1 col-md-2 col-lg-3">
          <?php print render($content['field_links']); ?>
        </div>
      <?php endif ?>
    </div>
  </div>

  <?php print render($content['field_paragraphs']); ?>

  <div class="container">
    <div class="row">
      <div class="col-sm-offset-1 col-sm-10 col-md-offset-2 col-md-8 col-lg-offset-3 col-lg-6 ">
        <?php print render($content); ?>
        <?php if (isset($region['content_below'])): ?>
          <?php print render($region['content_below']); ?>

          <?php if ($page && $display_submitted): ?>
            <noscript>Please enable JavaScript to view the <a href="https://disqus.com/?ref_noscript" rel="nofollow">comments powered by Disqus.</a></noscript>
          <?php endif; ?>
          <div class="spacer spacer-sm"></div>
        <?php endif; ?>
      </div>
    </div>
  </div>

  <div class="spacer spacer-lg"></div>


  <?php if (!empty($content['links'])): ?>
    <footer>
      <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>


</article>
