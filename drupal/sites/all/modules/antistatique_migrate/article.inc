<?php
abstract class AbstractAntistatiqueMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    // @TODO: I don't know what is this !
    // With migrate_ui enabled, migration pages will indicate people involved in
    // the particular migration, with their role and contact info. We default the
    // list in the shared class; it can be overridden for specific migrations.
    $this->team = array(
      new MigrateTeamMember('Gilles', 'gilles@antistatique.net', t('Collaborator')),
      new MigrateTeamMember('Marc', 'marc@antistatique.net', t('Implementor')),
    );

    // @TODO: Do I need this ?
    $this->issuePattern = 'http://github.com/antistatique/antistatique.net/issues/:id:';

    // @TODO: Change this with real image path
    $this->imageSourceDir = __DIR__ . '/../../../../drupal8-uploads';
  }

  /**
   * You need to add the following to your settings.php
   *
   * <code>
   * $databases['default']['for_migration'] = array(
   * 'driver' => 'mysql',
   * 'database' => 'antistatique_drupal8',
   * 'username' => 'root',
   * 'password' => '',
   * 'host' => '127.0.0.1',
   * 'prefix' => '',
   * );
   * </code>
   * @return \DatabaseConnection
   */
  protected function getConnection()
  {
    return Database::getConnection('default', 'for_migration');
  }
}

class ArticleNodeMigration extends AbstractAntistatiqueMigration
{
  public function __construct($arguments)
  {
    parent::__construct($arguments);

    $this->description = t('Migrate articles node of Drupal 8');


    $query = $this->getConnection()
      ->select('node_field_data', 'n')
      ->fields('n', array('nid', 'type', 'status', 'title', 'created'))
      ->fields('body', array('field_article_body_value', 'field_article_body_summary'))
      ->fields('date', array('field_article_date_value'))
      ->fields('u', array('uid', 'mail'))
      ->fields('file', array('filename'))
    ;

    $query
      ->leftJoin('node__field_article_body', 'body', 'body.entity_id = n.nid')
    ;

    $query
      ->leftJoin('node__field_article_date', 'date', 'date.entity_id = n.nid')
    ;

    $query
      ->leftJoin('node__field_article_author', 'au', 'au.entity_id = n.nid')
    ;

    $query
      ->leftJoin('node__field_article_image', 'im', 'im.entity_id = n.nid')
    ;

    $query
      ->leftJoin('file_managed', 'file', 'file.fid = im.field_article_image_target_id')
    ;

    $query
      ->leftJoin('users', 'u', 'u.uid = au.field_article_author_target_id')
    ;


    $query
      ->where("n.type = :type AND n.status = :status", array(
        'type' => 'article',
        'status' => 1
      ))
    ;

    $query
      ->orderBy('n.created')
      ->groupBy('n.nid')
    ;

    // By default, MigrateSourceSQL derives a count query from the main query -
    // but we can override it if we know a simpler way
    $count_query = $this->getConnection()
      ->select('node_field_data', 'n')
    ;
    $count_query
      ->where("n.type = :type AND n.status = :status", array(
        'type' => 'article',
        'status' => 1
      ))
    ;
    $count_query->addExpression('COUNT(n.nid)', 'cnt');


    $this->source = new MigrateSourceSQL($query, array(), $count_query);
    $this->destination = new MigrateDestinationNode('article');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'nid' => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'Article ID.',
          'alias' => 'n',
        )
      ),
      MigrateDestinationNode::getKeySchema(),
      'default' // 'for_migration'
    );

    // Mapped fields
    $this->addFieldMapping('title', 'title')
      ->description(t('Mapping Article title in source to node title'));

    $this->addFieldMapping('body', 'field_article_body_value')
      ->description(t('Mapping Article body in source to node title'));

    $this->addFieldMapping('body:summary', 'field_article_body_summary')
      ->description(t('Mapping Article summary in source to node summary'));
    $this->addFieldMapping('body:format')
      ->defaultValue('full_html');

    $this->addFieldMapping('uid', 'destination_uid')
      ->defaultValue(1);

    $this->addFieldMapping('created', 'field_article_date_value');

    $this->addFieldMapping('language')
      ->defaultValue('fr');
    $this->addFieldMapping('body:language')
      ->defaultValue('fr');

    // images
    $this->addFieldMapping('field_teammate_hero_image', 'filename');
    // The file_class determines how the 'image' value is interpreted, and what
    // other options are available. In this case, MigrateFileUri indicates that
    // the 'image' value is a URI.
    $this->addFieldMapping('field_teammate_hero_image:file_class')
      ->defaultValue('MigrateFileUri');
    $this->addFieldMapping('field_teammate_hero_image:source_dir')
      ->defaultValue($this->imageSourceDir);
    $this->addFieldMapping('field_teammate_hero_image:destination_dir')
      ->defaultValue(variable_get('file_default_scheme', 'public') . '://');

    $this->addUnmigratedDestinations(array(
      'changed',
      'comment',
      'is_new',
      'log',
      'promote',
      'revision',
      'revision_uid',
      'status',
      'path',
    ));
  }

  public function prepareRow($current_row)
  {
    if (parent::prepareRow($current_row) === FALSE) {
      return FALSE;
    }

    $mail = $current_row->mail;
    $uid = db_select('users', 'u')
      ->fields('u', array('uid', 'mail'))
      ->condition('mail', $mail)
      ->execute()
      ->fetchField(0)
    ;

    if (!$uid) {
      $uid = 1; // default: admin
    }

    $current_row->destination_uid = $uid;

    return TRUE;
  }
}
