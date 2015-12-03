Antistatique.net 2015
=====================

[ ![Codeship Status for antistatique/antistatique.net](https://codeship.com/projects/c680f610-a626-0132-e064-7e6768721930/status?branch=dev)](https://codeship.com/projects/66926)

Drupal 7

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

[View in action](http://staging.antistatique.net/styleguide)

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

### Publish to GH-Pages

```bash
$ gulp deploy
```

## Deploy the project
```bash
$ bundle install
$ bundle exec cap staging deploy
```
