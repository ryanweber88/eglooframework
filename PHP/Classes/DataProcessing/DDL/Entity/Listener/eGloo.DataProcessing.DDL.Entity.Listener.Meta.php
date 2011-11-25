<?php
namespace eGloo\DataProcessing\DDL\Entity\Listener;


use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Provides runtime monitoring functionality for entity instances
 * @author Christian Calloway
 *
 */
class Meta extends Listener{
	
	public function eventAccessed(Event $event) { 
		$event->getTarget()->meta->accessed = time();
	}
	
	public function eventModified(Event $event) { 
		$event->getTarget()->meta->modified = time();
	}
	
	/**
	 * 
	 * Fired on entity creation/construction
	 * @param Event $event
	 */
	public function eventCreated(Event $event) {
		
		// shortcut to target
		$target = &$event->getTarget();
		
		// update record count on static basis?
		
		// fire accessed/modified
		$target->events->trigger('accessed', $target);
		$target->events->trigger('modified', $target);
	}
	
}