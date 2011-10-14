<?php
namespace eGloo\System\Server\Context;

use eGloo\System\Server;

/**
 * 
 * Provides specific caveats for a session context
 * @author Christian Calloway
 *
 */
class Session extends Server\Context {
	
	function __construct(&$owner) { 
		// call parent constructor
		parent::__construct($owner);
		
		// attach session listener aggregate - something more here
		$this->events->attachAggregate(new Server\Context\Listener\Session($owner));	
		
		// attach time listener aggregate 
		// TODO session expiry time should be configurable
		$this->events->attachAggregate(new Server\Context\Listener\Time(10));

	}
	
	public function &bind($key, $value, $expires = null) { 
		\eGloo\System\Server\Application::instance()->context()->retrieve('logger.test')->log(
			"----SessionHandler::CALLING SESSIONCONTEXT::BIND with key $key---"
		);			
		
		return parent::bind($key, $value);
	}
	
	public function unbind($key) { 
		\eGloo\System\Server\Application::instance()->context()->retrieve('logger.test')->log(
			"----SessionHandler::CALLING SESSIONCONTEXT::UNBIND with key $key---"
		);	
		
		return parent::unbind($key);
	}
	
	
}