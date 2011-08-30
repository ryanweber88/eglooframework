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
	realpath(__DIR__ .   '/../PHP/Classes/') . ':' .  // egloo framework class 
	realpath(__DIR__ .   '/../PHP/Classes/System/Server') . ':'
);

// APPLICATION ////////////////////////////////////////////////////////////////

require_once 'eGloo.System.Server.Application.php';

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
->bootstrap('egloo');

exit;


// now that application-specific resources have been loaded; 
// determine command and execute 
\eGloo\System\Server\Command\CLI::factory(
	$argv[1]
)
->options($GLOBALS['params'])
->legacy($GLOBALS['params'])
->execute();