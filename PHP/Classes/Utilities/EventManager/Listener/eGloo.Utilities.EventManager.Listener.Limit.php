<?php
namespace eGloo\Utilities\EventManager\Listener;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Provides abstract functionality for monitoring limits of
 * an abstract pool
 * @author Christian Calloway
 *
 */
abstract class Limit extends Listener {
	
	
	function __construct($limit) { 
		// call parent constructor
		parent::__construct();
		
		// Sets limit to some theoretical max
		$this->limit = $limit;
	}
	
    /**
     * 
     * Enter description here ...
     * @param  Event $event
     * @return void
     */
    abstract public function eventCheckLimit(Event $event);
    
    
    /**
     * 
     * An 'increase' events signals a net increase in current pool
     * @param  Event $event
     * @return void
     */
    abstract public function eventIncrease(Event $event);
    
    /**
     * 
     * A 'decrease' event signals a net decrease in current
     * @param  Event $event
     * @return void
     */
	abstract public function eventDecrease(Event $event);
    
	/**
	 * 
	 * Determines if our limit has been reached
	 * @return boolean
	 */
	abstract protected function reachedLimit(Event $event);    
    
	
	protected $limit   = 0;
	protected $current = 0; 
}