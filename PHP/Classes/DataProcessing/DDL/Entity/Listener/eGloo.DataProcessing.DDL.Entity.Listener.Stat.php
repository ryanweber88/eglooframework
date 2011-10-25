<?php
namespace eGloo\DataProcessing\DDL\Entity\Listener;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Provides abstract functionality for monitoring 
 * @author Christian Calloway
 *
 */
class Stat extends \eGloo\Utilities\EventManager\Listener\Listener {
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;

	public function eventAccessed(Event $event) { 
		$event->getTarget()->accessed = time();	
	}
	
	public function eventModified(Event $event) { 
		$event->getTarget()->modified = time();
	}
	
}