### Dependencies
- [Drush](https://github.com/drush-ops/drush)
- [Drush Make Local](https://github.com/helior/make_local)
- [Node.js](http://nodejs.org/)
- [Grunt](http://gruntjs.com/)
- PHP/MYSQL/HTTP

### Installation
`npm install` - will install all Node.js dependencies

`grunt core` - will compile the source to a deployable artifact in `docroot`

`grunt install` - will install Drupal with the Vixen profile using the `docroot` directory. (generated via running `$> grunt core`).


### Development
`grunt profile` - will download all Drupal dependencies inline the Vixen installation profile.

###### Database configuration
The default configuration will assume you have a mysql database named `vixen` and connect using the username/password of `root`/`root`. You can override this by setting the `SITE_ENV` environment variable on your local machine and create a corresponding `settings.SITE_ENV.php` file in the `docroot/site/default/settings` directory. 


### Usage
###### Environment Variables:
- `SITE_ENV`: string identifier for the environment name. Used to load the corresponding environment-specific `settings.php` file.
