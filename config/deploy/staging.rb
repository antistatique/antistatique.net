set :branch,    "dev"
set :deploy_to, "/home/antistatique/www/staging.antistatique.net"

before "deploy:update", "staging:protect"
