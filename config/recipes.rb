
namespace :hotfix do
  task :fix_permissions do
    count = fetch(:keep_releases, 5).to_i
    run("ls -1dt #{releases_path}/* | tail -n +#{count + 1} | xargs chmod -R 777")
  end
end

# Task to build styles assets in production server
namespace :assets do
  desc "Build assets on the server"
  task :build do
    run "cp #{current_release}/bower.json #{shared_path}/bower.json && cp #{current_release}/package.json #{shared_path}/package.json"
    run "cd #{shared_path} && npm config set spin=false && npm install --silent"
    run "cd #{shared_path} && ./node_modules/.bin/bower install --config.interactive=false"
    run "ln -s #{shared_path}/bower_components #{current_release}/bower_components && ln -s #{shared_path}/node_modules #{current_release}/node_modules"
    run "cd #{current_release} && ./node_modules/.bin/gulp build"
  end
end

namespace :staging do
  desc "Add HTTP basic AUTH"
  task :protect do
    run "cat #{shared_path}/drupal/.htpasswd >> #{current_release}/drupal/.htaccess"
  end
end
