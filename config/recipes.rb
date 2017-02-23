
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
    run_locally "yarn"
    run_locally "./node_modules/.bin/gulp build --production"

    upload("#{fetch(:build_path)}", "#{latest_release}/#{fetch(:build_path)}", { :via => :scp, :recursive => true })
  end
end

namespace :staging_env do
  desc "Add HTTP basic AUTH"
  task :protect do
    run "cat #{shared_path}/drupal/.htaccess.protect >> #{current_release}/drupal/.htaccess"
  end
end
