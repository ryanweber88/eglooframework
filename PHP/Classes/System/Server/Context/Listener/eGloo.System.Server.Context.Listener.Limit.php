<?php
namespace eGloo\System\Server\Context\Listener;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;


/**
 * 
 * Responsible for observing the amount of memory being consumed by
 * a context, performing appropriate action when bounds have been
 * met
 * @author Christian Calloway
 *
 */
class Limit extends \eGloo\Dialect\Object implements ListenerAggregate { 
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;
	
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