<?php

// Database
$databases['default']['default']['driver'] = 'mysql';
$databases['default']['default']['database'] = 'vixen';
$databases['default']['default']['username'] = 'root';
$databases['default']['default']['password'] = 'root';
$databases['default']['default']['host'] = 'localhost';
$databases['default']['default']['prefix'] = '';

// CORS support
$conf['cors_domains'] = array(
  '*' => '*,',
  'api/v1.0/*' => '<mirror>|GET|Content-Type,Authorization|true',
);
