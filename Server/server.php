#!/usr/bin/php
<?php
/**
 * Initiating script and mini cli for controlling eGloo Application Server
 * @author Christian Calloway
 */

// CONSTANTS //////////////////////////////////////////////////////////////////

// NAMESPACE //////////////////////////////////////////////////////////////////

use \eGloo\System\Server;

// SET INCLUDE PATHS //////////////////////////////////////////////////////////

// @todo currently cwd is changing through course of this script which
// bad bad bad

set_include_path(
	get_include_path() . ':' .                      // EAS Server Path
	realpath(__DIR__)  . ':' . 
	realpath(__DIR__   . '/../') . ':' .            // egloo framework home
	realpath(__DIR__   . '/../PHP/Classes/') . ':'  // egloo framework class 
);


// AUTOLOAD ///////////////////////////////////////////////////////////////////

// These autoloaders are required to load initial server environment; they
// will be popped off the stack after environment has fully loaded
// TODO remove and place into cli tool

spl_autoload_register(function($className) { 
	
	// assume classes are namespaced and remove top level domain "eGloo"
	// as its a synonym for /root/PHP/Classes/
	// echo "class = $className\n";
	$parts = array_slice(
		explode ('\\', $className), 1
	);
	
	$path  = implode(
		DIRECTORY_SEPARATOR, array_slice($parts, 0, count($parts) - 1)
	);

	$file = "$path/eGloo." . implode('.', $parts) . '.php';
	
	
	// load file into currently running context 	
	$paths = array_reverse(explode(":", get_include_path()));
		
	array_walk($paths, function($path) use ($file) { 		
		if (file_exists("$path/$file")) { 
			require_once "$path/$file";
		}
	});
});

spl_autoload_register(function ($className) {
	// TODO change to configurable value
	$pathZendFramework = '/usr/share/php/Zend2';
	
	if (strstr($className, 'Zend')!==false) { 
		require_once "$pathZendFramework/" . str_ireplace('\\', '/', $className) . '.php';
	}
});



// PROPERTIES /////////////////////////////////////////////////////////////////

$target = $argv[count($argv)-1];

// EXECUTION //////////////////////////////////////////////////////////////////

// TESTING

class test extends \eGloo\Dialect\Object {

}

class test2 extends \eGloo\Dialect\Object {
	function __construct() {
		echo "{$this->_class}\n";
		
		$test = new test;
		echo "{$test->_class->name}\n";
	}	
}

$t = new test2;
exit;

// NOTE : Everything defined in global context will exist in global context
// amongst all EAS instances

// instantiate application object; a shared resource amongst EAS instances
$application = new \eGloo\System\Server\Application(
	__DIR__, $target
);


// run application bootstrap - load required dependencies
// into current application context
$bootstrap = &$application->bootstrap
->bootstrap('photon')
->bootstrap('zend');

// now that application-specific resources have been loaded; 
// determine command and execute 
\eGloo\System\Server\Command\CLI::factory(
	$argv[1]
)
->options(array_slice($argv, 2))
->legacy($GLOBALS['params'])
->execute();