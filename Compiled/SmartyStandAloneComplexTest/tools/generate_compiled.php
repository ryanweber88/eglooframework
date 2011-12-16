#!/usr/bin/php
<?php
/**
 * Generates compiled scripts in ROOT/templates_c directory, and lists
 * them in files.list; this is needed as compiled files are required
 * pre-compilation
 * @author Christian Calloway
 */

// CONSTANTS //////////////////////////////////////////////////////////////////

const DIR_ROOT         = '../';
const DIR_APPLICATIONS = '/usr/lib/egloo/applications/';
const DIR_COMPILED     = '../templates_c';
const FILE_PHPLIST     = 'files.list';

// INI ////////////////////////////////////////////////////////////////////////

set_include_path(
	'.:../Smarty/libs'
);

error_reporting(E_ALL ^ E_NOTICE);

// REQUIRES ///////////////////////////////////////////////////////////////////

require_once 'Smarty.class.php';

// FUNCTIONS //////////////////////////////////////////////////////////////////

function findTemplateFiles($path, $pattern, $callback) {
  $path = rtrim(str_replace("\\", "/", $path), '/') . '/*';
                                 
  foreach (glob ($path) as $fullname) {
    if (is_dir($fullname)) {
      findTemplateFiles($fullname, $pattern, $callback);
    } else if (preg_match($pattern, $fullname)) {
      $callback($fullname);
    }
  }
}

// PROPERTIES /////////////////////////////////////////////////////////////////

$out = array();

// SETUP SMARTY INSTANCE //////////////////////////////////////////////////////

$smarty = new Smarty;
$smarty->caching = false;
$smarty->template_dir = DIR_COMPILED;

// FIND TPL FILES /////////////////////////////////////////////////////////////

// find all template files for egloo applications
findTemplateFiles(DIR_APPLICATIONS, '/.+?\.tpl/', function($file) use ($smarty) { 
	// fetch will create compiled file pointed to by
	// template_dir property
	echo "$file\n";
	$smarty->fetch($file);
});

// change to root directory and reindex all php files in file list
chdir(DIR_ROOT);
exec (
	'find . -name "*.php" > ' . FILE_PHPLIST
);

