<?php
abstract class AbstractAntistatiqueMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    // @TODO: I don't what is this !
    // With migrate_ui enabled, migration pages will indicate people involved in
    // the particular migration, with their role and contact info. We default the
    // list in the shared class; it can be overridden for specific migrations.
    $this->team = array(
      new MigrateTeamMember('Gilles', 'gilles@antistatique.net', t('Collaborator')),
      new MigrateTeamMember('Marc', 'marc@antistatique.net', t('Implementor')),
    );

    // @TODO: Do I need this ?
    // Individual mappings in a migration can be linked to a ticket or issue
    // in an external tracking system. Define the URL pattern here in the shared
    // class with ':id:' representing the position of the issue number, then add
    // ->issueNumber(1234) to a mapping.
    $this->issuePattern = 'http://github.com/antistatique/antistatique.net/issues/:id:';
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
      ->fields('n', array('nid', 'type', 'status', 'title', 'uid', 'created'))
      ->fields('body', array('field_article_body_value', 'field_article_body_summary'));

    $query
      ->leftJoin('node__field_article_body', 'body', 'body.entity_id = n.nid')
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
    $this->addFieldMapping('uid')
      ->defaultValue(1);
    $this->addFieldMapping('created', 'created');
  }
}
