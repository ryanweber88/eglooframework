<?php
namespace eGloo\DataProcessing\DDL\Entity\Listener;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Since our entities are lazy loaded, DataRequest is 
 * responsible for listening to events that request data
 * and performing the appropriate actions on persistent
 * entity
 * @author Christian Calloway
 *
 */
class Data extends \eGloo\Utilities\Listener\Listener
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;
	
	
	/**
	 * Listens to data request event; responsible for initiating
	 * operation to database
	 */
    public function eventEvaluate(Event $event) { 
    	
    	if (!$event->getTarget()->evaluated) { 
    		// TODO perform evaluation
    		
    		// set evaluated
    		$event->getTarget()->evaluated = true;
    	}

    }
	
}