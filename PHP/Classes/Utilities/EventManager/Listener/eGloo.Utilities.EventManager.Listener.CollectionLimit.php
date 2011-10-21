<?php
namespace eGloo\Utilities\EventManager\Listener;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Provides abstract functionality for monitoring limits of a 
 * collection
 * @author Christian Calloway
 *
 */
abstract class CollectionLimit extends Listener {
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;
	
	function __construct($limit) { 
		// call parent constructor
		parent::__construct();
		
		// TODO determine limits - will these change in respect to
		// different contexts
		$this->count = $count;
	}
	
    
    abstract public function eventCheckLimit(Event $event);
    
    public function eventIncrement(Event $event) { 
    	$this->count += 1;
    	
    	// fire check limit event
    	$this->eventCheckLimit($event);
    }
    
    public function eventDecrement(Event $event) { 
    	$this->count -= 1;
    }
    
    final private function reachedLimit() { 
    	return $this->count >= $this->limit;
    }
    
    
	
	
	protected $limit = 0;
	protected $count = 0;
}