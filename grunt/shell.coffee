module.exports =
  dist_make:
    command: [
      'rm -rf docroot'
      'drush make vixen-site.make docroot'
    ].join('&&')
  profile_make:
    command: 'drush make --no-core --contrib-destination=. --yes vixen.make'
    options:
      execOptions:
        cwd: 'src/vixen'
  install:
    command: 'drush si vixen --account-name=admin --account-pass=admin -y'
    options:
      execOptions:
        cwd: 'docroot/sites/all'
