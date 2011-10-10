<?php
namespace eGloo\System\Server\Context\Listener;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;


/**
 * 
 * Responsible for monitoring session viability (does a session user id exist) 
 * and expiring data, should that data no longer exist
 * @author Christian Calloway
 *
 */

class Session extends \eGloo\Dialect\Object implements ListenerAggregate { 
	
	use \eGloo\Utilities\EventManager\HandlerAggregateTrait;
	
	function __construct() { 
		
	}
	
    public function attach(EventCollection $events) {
    	// TODO add session validation events
    	
    }
	
	
}