<?php
namespace eGloo\Utilities\EventManager\Listener\Limit;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Event listener to manage collection (array, quueue, stack, etc) limits 
 * @author Christian Calloway
 *
 */
abstract class Collection extends \eGloo\Utilities\EventManager\Listener\Limit {
		
	
    /**
     * 
     * Responds to 'checklimit' event - fires reachedLimit method if limit has
     * indeed been reached
     * @param  Event $event
     * @return void
     */
    public function eventCheckLimit(Event $event) { 
    	if ($this->current >= $this->limit) {
    		$this->reachedLimit();
    	}
    }
    
    
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
    
    public function eventIncrement(Event $event) {
    	return $this->eventIncrease($event);
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
	
	public function eventDecrement(Event $event) {
		return $this->eventDecrease($event);
	}
    
    
}