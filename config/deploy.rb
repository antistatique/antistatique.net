# config valid only for current version of Capistrano
lock '3.4.0'

set :application, 'antistatique'

load 'config/recipes.rb'

set :repo_url, 'git@github.com:antistatique/antistatique.net.git'

# Default branch is :master
# ask :branch, `git rev-parse --abbrev-ref HEAD`.chomp

# Default deploy_to directory is /var/www/my_app_name
set :deploy_to, '/home/antistatique/www/antistatique.net'

before "deploy:symlink:release", "assets:build"

after "drupal:update:updatedb", "deploy:cleanup"
after "deploy:cleanup", "drush:cache_clear"
before "deploy:cleanup", "hotfix:fix_permissions"

namespace :deploy do

  after :restart, :clear_cache do
    on roles(:web), in: :groups, limit: 3, wait: 10 do
      # Here we can do anything such as:
      # within release_path do
      #   execute :rake, 'cache:clear'
      # end
    end
  end

end
