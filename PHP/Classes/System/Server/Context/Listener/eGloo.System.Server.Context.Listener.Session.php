<?php
namespace eGloo\System\Server\Context\Listener;

use \Zend\EventManager\HandlerAggregate;
use \Zend\EventManager\Event;

/**
 * 
 * Responsible for monitoring session viability (does a session user id exist) 
 * and expiring data, should that data no longer exist
 * @author Christian Calloway
 *
 */

class Session extends \eGloo\Dialect\Object implements HandlerAggregate { 
	
	use \eGloo\Utilities\EventManager\HandlerAggregateTrait;
	
	function __construct() { 
		
	}
	
    public function attach(EventCollection $events) {
    	// TODO add session validation events
    	
    }
	
	
}