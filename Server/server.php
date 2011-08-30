#!/usr/bin/php
<?php
/**
 * Initiating script and mini cli for controlling eGloo Application Server
 * @author Christian Calloway
 */

// CONSTANTS //////////////////////////////////////////////////////////////////


// NAMESPACE //////////////////////////////////////////////////////////////////


// BOOTSTRAP //////////////////////////////////////////////////////////////////

require_once 'bootstrap.php';

// SET INCLUDE PATHS //////////////////////////////////////////////////////////
// TODO: Remove; this should be part of cli bootstrap

set_include_path(
	get_include_path() . ':' . 
	realpath(__DIR__ .   '/../') . ':' .           // egloo framework home
	realpath(__DIR__ .   '/../PHP/Classes') . ':'  // egloo framework class library
);


// DEFINE AUTOLOADERS /////////////////////////////////////////////////////////
// TODO: Remove; this should be part of cli bootstrap


// photon autoload


// egloo & server dir autoload
spl_autoload_register(function($className) { 
	
	// assume classes are namespaced and remove top level domain "eGloo"
	// as its a synonym for /root/PHP/Classes/
	//echo "class = $className\n";
	
	
	$parts = array_slice(
		explode ('\\', $className), 1
	);
	
	$path  = implode(
		DIRECTORY_SEPARATOR, array_slice($parts, 0, count($parts) - 1)
	);

	$file = implode('.', $parts) . '.php';
	
	
	// load file into currently running context 	
	if (!(@include_once "$path/eGloo.$file")) { 
		
		// log className which could not be loaded
	} 
	
});


// PHOTON SUPPORT /////////////////////////////////////////////////////////////


// PROPERTIES /////////////////////////////////////////////////////////////////


// EXECUTION //////////////////////////////////////////////////////////////////

// TODO: Configs

// cli parameters used for underlying photon process
// TODO: Remove and make native to EAS script

$parser = \photon\getParser();
$result = $parser->parse();
$params = array('cwd' => getcwd());
$params = $params + $result->options;
$params += $result->command->command->options;
$params['argv'] = $argv; 
$params['task'] = @$result->command->args['task'];

// instantiate application object; a shared resource amongst EAS instances
$application = new \eGloo\System\Server\Application(
	__DIR__
);

// run application bootstrap
$application->bootstrap()
->bootstrap('photon')
->bootstrap('egloo');


// now that application-specific resources have been loaded; 
// determine command and execute 
\eGloo\System\Server\Command\CLI::factory(
	$argv[1]
)
->options(array_slice($argv, 2))
->legacy($params)
->execute();