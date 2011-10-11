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
		$this->events->attachAggregate(new Server\Context\Listener\Time(25));			
	}
	
	
}