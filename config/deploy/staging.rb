set :branch,    "dev"
set :deploy_to, "/home/antistatique/www/staging.antistatique.net"

after "deploy:update", "staging_env:protect"