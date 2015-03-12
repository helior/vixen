api = 2
core = 7.x

defaults[projects][subdir] = contrib

; Contrib Modules
projects[] = admin_menu
projects[] = ctools
projects[] = features

projects[entity][version] = 1.6
projects[entity][patch][2086225] = https://www.drupal.org/files/issues/2086225-entity-access-check-18.patch

projects[restful][type] = module
projects[restful][download][url] = git@github.com:RESTful-Drupal/restful.git
projects[restful][download][tag] = 7.x-1.0-rc4

; Contrib Themes
projects[tao][version] = 3.1
projects[rubik][version] = 4.1
