#!/usr/bin/php
<?php
/**
 * Initiating script and mini cli for controlling eGloo Application Server
 * @author Christian Calloway
 */

// CONSTANTS //////////////////////////////////////////////////////////////////

// NAMESPACE //////////////////////////////////////////////////////////////////

// you don't have to import java.lang
use \eGloo\Dialect;


// SET INCLUDE PATHS //////////////////////////////////////////////////////////
// TODO: Remove; this should be part of cli bootstrap

set_include_path(
	get_include_path() . ':' . 
	realpath(__DIR__ .   '/../') . ':' .           // egloo framework home
	realpath(__DIR__ .   '/../PHP/Classes') . ':'  // egloo framework class library
);


// DEFINE AUTOLOADERS /////////////////////////////////////////////////////////
// TODO: Remove; this should be part of cli bootstrap

// require_once 'photon/autoload.php'; // does not work; looking at pear autoload

// require_once 'PHP/Includes/eGlooCLIAutoload.php' // doesn't work

// Define autoloader for eGloo file naming convention to load from Server 
// TODO: Remove, autload should occur is system autoload script

// photon autoload
spl_autoload_register(function($className) { 
	
	
    $parts = array_filter(explode('\\', $className));
    if (1 < count($parts)) {
        // We have a namespace.
        $class_name = array_pop($parts);
        $file = implode(DIRECTORY_SEPARATOR, $parts) . '.php';
    } else {
        $file = str_replace('_', DIRECTORY_SEPARATOR, $className) . '.php';
    }
    // As we load only once to have everything is the process, the
    // require_once instead of require penalty is low. But the
    // require_once will prevent double loading a file and will result
    // in non confusing error messages.
    // printf("Class: %s, file: %s\n", $class, $file);    
    @include_once $file;
});

// egloo & server dir autoload
spl_autoload_register(function($className) { 
	
	// assume classes are namespaced and remove top level domain "eGloo"
	// as its a synonym for /root/PHP/Classes/
	
	$parts = array_slice(
		explode ('\\', $className), 1
	);
	
	$path  = implode(
		DIRECTORY_SEPARATOR, array_slice($parts, 0, count($parts) - 1)
	);

	$file = implode('.', $parts) . '.php';
	
	
	// load file into currently running context 	
	require_once "$path/eGloo.$file"; 
	
});

// PHOTON SUPPORT /////////////////////////////////////////////////////////////

require_once 'photon.bridge.php';

// PROPERTIES /////////////////////////////////////////////////////////////////


// EXECUTION //////////////////////////////////////////////////////////////////

// TODO: Configs

// cli parameters - this uses photons cli parser

$parser = \photon\getParser();
$result = $parser->parse();
$params = array('cwd' => getcwd());
$params = $params + $result->options;

// determine command and execute 

\eGloo\System\Server\Command\CLI::factory(
	$argv[1]
)
->options(array_slice($argv, 2))
->parameters($params)
->execute();