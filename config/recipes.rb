
namespace :hotfix do
  task :fix_permissions do
    count = fetch(:keep_releases, 5).to_i
    run("ls -1dt #{releases_path}/* | tail -n +#{count + 1} | xargs chmod -R 777")
  end
end
