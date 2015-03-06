Antistatique.net 2015
=====================
Drupal 7 (yes, we tried with D8...)

## Install Drupal

First copy the staging/prod database to your local database. Edit `drupal/sites/default/settings.php` with the correct database info.

Then:

```bash
 # create and edit the settings with your database infos
$ cp drupal/sites/default/default.settings.php drupal/sites/default/settings.php
$ vim drupal/sites/default/settings.php

 # pull the production/staging database locally
$ bundle install
$ bundle exec cap staging database:copy:to_local

$ cd drupal
$ drush cc all
$ drush fra
```

## Install the styleguide

```bash
$ npm install
$ bower install
$ gulp
```

### Build only the minimum required for production

```bash
$ gulp build
```

### Watch and compile files as you go

```bash
$ gulp serve
```

### Publish to GH Pages

```bash
$ gulp deploy
```

## Deploy the project
```bash
$ bundle install
$ bundle exec cap staging deploy
```
