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

// here we add a simple autoloader for git scripts to be able to load
// from framework classes
// @TODO this clearly needs to be refactored so it available to
// all script files
// spl_autoload_register($GLOBALS['__autoload_egloo'] = function($name) {
// 	$filename = preg_replace('/\\\\/', '.', $name) . '.php';

// 	// get our framework home; if set in environment variable, it
// 	// will take precedence; otherwise our fallback is to installer
// 	// default location

// 	$path_set = false;

// 	if ( !$path_set && isset( $_SERVER['EGLOO_INCLUDE_PATH'] ) ) {
// 		$full_path = $_SERVER['EGLOO_INCLUDE_PATH'] . '/PHP/Includes/eGlooCLIAutoload.php';

// 		if ( file_exists($full_path) && is_file($full_path) && is_readable($full_path) ) {
// 			$path = $_SERVER['EGLOO_INCLUDE_PATH'] . '/PHP/Classes';
// 			$path_set = true;
// 		} else {
// 			echo 'EGLOO_INCLUDE_PATH value of "' . $_SERVER['EGLOO_INCLUDE_PATH'] . '" is not a valid eGloo Framework path.  Ignoring...' . "\n";
// 		}
// 	}

// 	if ( !$path_set ) {
// 		$supported_operating_systems = array( 'Mac OS X' => array('Darwin'), 'Ubuntu' => array('Linux') );

// 		if ( in_array( PHP_OS, $supported_operating_systems['Mac OS X'] ) ) {
// 			$path = '/Library/Frameworks/eGloo.framework';
// 			$path_set = true;
// 		} else if ( in_array( PHP_OS, $supported_operating_systems['Ubuntu'] ) ) {
// 			$path = '/usr/lib/eglooframework';
// 			$path_set = true;
// 		} else {
// 			echo 'eGloo CLI OS does not support this operating system.  Looking for eGloo Framework in Linux default...' . "\n";
// 			$path = '/usr/lib/eglooframework';
// 			$path_set = true;
// 		}
// 	}

// 	$iterator = new \RecursiveIteratorIterator(
// 		new \RecursiveDirectoryIterator($path)
// 	);

// 	foreach($iterator as $file) {
// 		if ($file->isFile() && $file->getFilename() == $filename) {
// 			require_once $file;

// 			// make sure object is instanceof of global Object
// 			// - if the case, then we are assured that we have
// 			// a __statuc method, whether a stubb or
// 			// actualy definition - since we are checking
// 			// on a string, we need to call methodExists
// 			// over
// 			if ( method_exists($name, '__static') ) {
// 				// because method exists will return true for inherited methods that
// 				// are NOT explicitly defined in class - we need to determine that
// 				// __static is in fact defined in loaded classes, otherwise we will
// 				// constantly call the Object::__static for all of its descendants;
// 				// to do this, we use reflection and check the declaring class against
// 				// our passed name parameter
// 				$reflection = new \ReflectionMethod($name, '__static');

// 				// since our static constructors do share the same concept of inheritence
// 				// as do regular constructors, we use the 'Polymorphic' annotation to
// 				// describe any static constructor that should be called in the
// 				// children of
// 				if (strpos($reflection->getDocComment(), '@Polymorphic') !== false ||

// 						// check if __static is in declaring class, as opposed to simply available
// 						// through inheritence
// 						$reflection->getDeclaringClass()->getName() == $name) {

// 					$name::__static();
// 				}
// 			}
// 		}
// 	}
// });

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
