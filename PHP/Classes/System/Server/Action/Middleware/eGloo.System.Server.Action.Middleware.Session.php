<?php
namespace eGloo\System\Server\Action\Middleware;

/**
 * 
 * Represents a user session within stateful application
 * @author Christian Calloway
 *
 */
class Session extends \photon\session\Session { 
	
	
	function __construct($store) {
		parent::__construct($store); 
		
	}	
	
}