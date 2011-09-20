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

// TODO : remove when migrating to cli tool
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
	$paths = explode(":", get_include_path());
		
	array_walk($paths, function($path) use ($file) { 
		if (file_exists("$path/$file")) { 
			require_once "$path/$file";
			return true;
		}
		
		// check if redux exists
		if (strpos($file, '/Server') !== -1) { 
			$file = str_replace('/Server', '/ServerRedux', $file);
	
			if (file_exists("$path/$file")) { 
				require_once "$path/$file";
				return true;
			}
		}
		
	});
	
});

// PROPERTIES /////////////////////////////////////////////////////////////////

$target = $argv[count($argv)-1];

// EXECUTION //////////////////////////////////////////////////////////////////

// TESTING

// NOTE : Everything defined in global context will exist in global context
// amongst all EAS instances

// instantiate application object; a shared resource amongst EAS instances
$application = new \eGloo\System\Server\Application(
	__DIR__, $target
);

$configuration = &\eGloo\System\Server\Configuration::instance();

// run application bootstrap
$bootstrap = &$application->bootstrap()
	// bootstrap egloo environment 
	->bootstrap('egloo'); 
	
// run child processes
for ($counter = 0; $counter < $configuration->children; $counter++) { 
	
	// TODO encapsulate forking (something lighter than pear model)
	// TODO log children id
	$pid = pcntl_fork();
	
	// if not pid, we are running as child
	if (!$pid) { 
		\eGloo\System\Server\EventMachine::run(function() { 
			// start server and listen to connections
			\eGloo\System\Server\EventMachine::startServer(null, null, function($connection) { 
				
			});
		});
	}
	
	
	else {
		// TODO log children or throw exception if unable to fork
	}
}