<?php
namespace eGloo\System\Server\Context\Listener;

use \Zend\EventManager\HandlerAggregate;
use \Zend\EventManager\Event;

/**
 * 
 * Responsible for observing the amount of memory being consumed by
 * a context, performing appropriate action when bounds have been
 * met
 * @author Christian Calloway
 *
 */
class Limit extends \eGloo\Dialect\Object implements HandlerAggregate { 
	
	use \eGloo\Utilities\EventManager\HandlerAggregateTrait;
	
	function __construct() { 
		// TODO determine limits - will these change in respect to
		// different contexts
	}
	
    public function attach(EventCollection $events) {
    	// TODO add limit events
 
    }
	
	private function sort($a, $b) { 
		// sorts attributes based on last accessed
		return $a->accessed - $b->accessed;		
	}
	
	protected $sizeof = 0;
}