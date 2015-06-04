
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
    run "cd #{current_release} && npm config set spin=false && npm install --silent"
    run "cd #{current_release} && ./node_modules/.bin/bower install --config.interactive=false"
    run "cd #{current_release} && ./node_modules/.bin/gulp build"
  end
end
