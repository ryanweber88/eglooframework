<?php
namespace eGloo\Utilities\EventManager\Listener;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Theorectically measures memory usage, based on event architecture
 * @author Christian Calloway
 *
 */
class Memory extends \eGloo\Utilities\EventManager\Limit {
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;
	
	function __construct($limit, $pool) { 
		// call parent constructor with theoretical max memory
		parent::__construct($limit, $pool);
		
		// set static to current mem usage
		static::$current = memory_get_usage(true); 
	}
	
    /**
     * 
     * Enter description here ...
     * @param  Event $event
     * @return void
     */
    public function eventCheckLimit(Event $event) { }
    
    
    /**
     * 
     * An 'increase' events signals a net increase in current pool
     * @param  Event $event
     * @return void
     */
    public function eventIncrease(Event $event) { }
    
    /**
     * 
     * A 'decrease' event signals a net decrease in current
     * @param  Event $event
     * @return void
     */
	public function eventDecrease(Event $event) { }
    
	/**
	 * 
	 * Determines if our limit has been reached
	 * @return boolean
	 */
	public function reachedLimit() { 
		return false;
	}
    
	protected static $memory;
}