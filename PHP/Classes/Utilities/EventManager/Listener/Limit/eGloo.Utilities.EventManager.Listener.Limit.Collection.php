<?php
namespace eGloo\Utilities\EventManager\Listener;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Event listener to manage collection (array, quueue, stack, etc) limits 
 * @author Christian Calloway
 *
 */
class Collection extends \eGloo\Utilities\EventManager\Limit {
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;
	
	
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
    public function eventIncrease(Event $event) { 
    	$params = $event->getParams();
    	
    	if (isset($params['increase'])) { 
    		$this->current += $params['increase'];
    	}
    	
    	else {
    		$this->current++;
    	}
    	
    }
    
    /**
     * 
     * A 'decrease' event signals a net decrease in current
     * @param  Event $event
     * @return void
     */
	public function eventDecrease(Event $event) { 
	    $params = $event->getParams();
    	
    	if (isset($params['decrease'])) { 
    		$this->current -= $params['decrease'];
    	}
    	
    	else {
    		$this->current--;
    	}	
	}
    
	/**
	 * 
	 * Determines if our limit has been reached
	 * @return boolean
	 */
	public function reachedLimit() { 
		return $this->limit >= $this->current;
	}
    
}