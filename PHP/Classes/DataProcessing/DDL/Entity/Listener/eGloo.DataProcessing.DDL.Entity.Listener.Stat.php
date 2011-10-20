<?php
namespace eGloo\DataProcessing\DDL\Entity\Listener;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Responsible for listening to entity stat events and updating
 * stat as appropriate
 * @author Christian Calloway
 *
 */
class Stat extends \eGloo\Utilities\Listener\Listener
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;
	
	
    public function eventAccessed(Event $event) { 

    	// set target's called property
    	//$event->getTarget()->called = $event->getParams()['name'];
    }
    
    
	public function eventModified(Event $event) { 
		
	}
}