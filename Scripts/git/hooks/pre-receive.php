#!/usr/bin/php
<?php
/**
 * Git server pre-receive hook: fires on push, and is responsible for enforcing
 * process and coding standards; rules can be added via lambda in pre-recieve/rules
 * directory
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
 namespace eGloo\Script\Git\Hook;
 
// CONSTANTS //////////////////////////////////////////////////////////////////


// REQUIRES ///////////////////////////////////////////////////////////////////

// @TODO move this to autoloader?
require_once 'Git.php';
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

	
}





// MAIN ///////////////////////////////////////////////////////////////////////


PreReceive::fire();


// finally exit successfully
exit(EXIT_FAIL);