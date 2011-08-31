#!/usr/bin/php
<?php
/**
 * Initiating script and mini cli for controlling eGloo Application Server
 * @author Christian Calloway
 */

// CONSTANTS //////////////////////////////////////////////////////////////////


// NAMESPACE //////////////////////////////////////////////////////////////////


// SET INCLUDE PATHS //////////////////////////////////////////////////////////

set_include_path(
	get_include_path() . ':' . 
	realpath(__DIR__ .   '/../') . ':' .              // egloo framework home
	realpath(__DIR__ .   '/../PHP/Classes/') . ':'   // egloo framework class 
);

// AUTOLOAD ///////////////////////////////////////////////////////////////////

// TODO : remove when migrating to cli tool
require_once 'autoload.php';

// PROPERTIES /////////////////////////////////////////////////////////////////


// EXECUTION //////////////////////////////////////////////////////////////////

// NOTE : Everything defined in global context will exist in global context
// amongst all EAS instances


// instantiate application object; a shared resource amongst EAS instances
$application = new \eGloo\System\Server\Application(
	__DIR__
);

// run application bootstrap
$application->bootstrap()
->bootstrap('photon')
->bootstrap('egloo')
->bootstrap('pear');


// now that application-specific resources have been loaded; 
// determine command and execute 
\eGloo\System\Server\Command\CLI::factory(
	$argv[1]
)
->options(array_slice($argv, 2))
->legacy($GLOBALS['params'])
->execute();