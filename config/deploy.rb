set :application,     "antistatique"

load 'config/recipes'

# Relative path to thedrupal path
set :app_path,        "drupal"
set :shared_children, ['drupal/sites/default/files','drupal/private-files']
set :shared_files,    ['drupal/sites/default/settings.php']
set :stages,          %w(staging production)

set :scm,            "git"
set :repository,     "git@github.com:antistatique/antistatique.net.git"

set :domain,         "antistatique.alwaysdata.net"

set :user,           "antistatique"
set :group,          "antistatique"
set :runner_group,   "antistatique"

set :use_sudo,       false
default_run_options[:pty] = true
ssh_options[:forward_agent] = true

set :download_drush, true

role :app,           domain
role :db,            domain

set  :keep_releases,   3

before "deploy:create_symlink", "assets:build"
after "assets:build", "drush:cache_clear"

after "deploy:update", "deploy:cleanup"
before "deploy:cleanup", "hotfix:fix_permissions"

# Be more verbose by uncommenting the following line
#logger.level = Logger::MAX_LEVEL
