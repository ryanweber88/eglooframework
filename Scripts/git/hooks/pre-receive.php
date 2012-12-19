#!/usr/bin/php
<?php
/**
 * Git server pre-receive hook: fires on push, and is responsible for enforcing
 * process and coding standards; rules can be added via lambda in pre-recieve/rules
 * directory
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
namespace eGloo\Script\Git\Hook;

use \eGloo\Configuration;
use \eGloo\Performance\Caching\Gateway as CacheGateway;
use \eGloo\Utility\Logger as Logger;

use \RecursiveDirectoryIterator as RecursiveDirectoryIterator;
use \RecursiveIteratorIterator as RecursiveIteratorIterator;

// Let's grab the arguments that are directed at the script execution (not command/subcommand)
// This would be anything starting with a dash (-) or double dash (--) before the first argument
// which does not contain one (which should be either local, or some command such as data or forms)
$egloo_script_arguments = array();

// AUTOLOAD ///////////////////////////////////////////////////////////////////
$path_set = false;

if ( !$path_set && isset( $_SERVER['EGLOO_INCLUDE_PATH'] ) ) {
	$full_path = $_SERVER['EGLOO_INCLUDE_PATH'] . '/PHP/Includes/eGlooCLIAutoload.php';

	if ( file_exists($full_path) && is_file($full_path) && is_readable($full_path) ) {
		set_include_path( $_SERVER['EGLOO_INCLUDE_PATH'] . ':' . get_include_path() );
		$path_set = true;
	} else {
		echo 'EGLOO_INCLUDE_PATH value of "' . $_SERVER['EGLOO_INCLUDE_PATH'] . '" is not a valid eGloo Framework path.  Ignoring...' . "\n";
	}
}

if ( !$path_set ) {
	$supported_operating_systems = array( 'Mac OS X' => array('Darwin'), 'Ubuntu' => array('Linux') );

	if ( in_array( PHP_OS, $supported_operating_systems['Mac OS X'] ) ) {
		set_include_path( '/Library/Frameworks/eGloo.framework' . ':' . get_include_path() );
		$path_set = true;
	} else if ( in_array( PHP_OS, $supported_operating_systems['Ubuntu'] ) ) {
		set_include_path( '/usr/lib/eglooframework' . ':' . get_include_path() );
		$path_set = true;
	} else {
		echo 'eGloo CLI OS does not support this operating system.  Looking for eGloo Framework in Linux default...' . "\n";
		set_include_path( '/usr/lib/eglooframework' . ':' . get_include_path() );
		$path_set = true;
	}
}

// We have an include path, so let's attempt to include
if ( $path_set ) {
	include( 'PHP/Includes/eGlooCLIAutoload.php' );
}


// REQUIRES ///////////////////////////////////////////////////////////////////

// @TODO move this to autoloader?
require_once 'Hook.php';
require_once 'Module.php';


// CLASS //////////////////////////////////////////////////////////////////////

class PreReceive extends Hook {


	protected function before_fire() {


		// retrieve revisions <old> <new> from stidin
		// @TODO this will probably refactored from here as
		// it seems like common functionality
		$resource = fopen('php://stdin', 'r');

		list($this->revision_old, $this->revision_new, $ignore) = explode(
			' ', fgets($resource)
		);

	}

	// @TODO replace with static attr_accessor
	public $revision_old;
	public $revision_new;

}





// MAIN ///////////////////////////////////////////////////////////////////////


$success = PreReceive::fire();


// if we have reached this point, fail our exit due to
// unknown reasons
exit($success);
