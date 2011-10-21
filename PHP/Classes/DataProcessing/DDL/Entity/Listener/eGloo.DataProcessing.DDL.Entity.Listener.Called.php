<?php
namespace eGloo\DataProcessing\DDL\Entity\Listener;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Responsible for listening to entity method calls and keeping
 * track of last call
 * @author Christian Calloway
 *
 */
class Called extends \eGloo\Utilities\Listener\Listener
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;
	
	
	/**
	 * Keeps track of method calls made - resets on commit
	 */
    public function eventCalled(Event $event) { 
    	
    	$name = strlower($events->getParams()['name']);

    	// set target's called property
    	if ($name == 'commit') { 
    		// reset chain
    		$event->getTarget()->called = [ ];	
    	}
    	
    	else { 	
    		$event->getTarget()->called[] = $name;
    	}
    	
    	// check if first method called, which would signify the
    	// actual crud operation
    	if (count($event->getTarget()->called) == 1) { 
			$event->getTarget()->operation(
				$event->getTarget()->called[0]
			);
    	}
    }
	
}