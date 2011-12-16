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
class Meta extends Listener {
	
	public function eventAccessed(Event $event) { 
		$target = $event->getTarget();
		$meta   = $target->meta;		
		
		$this->updateStat($event);
	}
	
	public function eventModified(Event $event) { 
		$target = $event->getTarget();
		$meta   = $target->meta;
		$params = $event->getParams();

		// update fields changed if applicable
		if (isset($params['fields'])) {
			foreach($params['fields'] as $name => $value) {
				$meta->column($name)->change($value);
			}
		}
		

		// update modified for use with LRU operations
		$this->updateStat($event);		
	}
	
	public function eventEvaluated(Event $event) {
		$this->updateStat($event);	
	}
	

	/**
	 * 
	 * Fired on entity creation/construction
	 * @param Event $event
	 */
	public function eventCreated(Event $event) {
		
		// shortcut to target
		$target = $event->getTarget();
		
		// update record count on static basis?
		
		// fire accessed/modified
		$target->events->trigger('accessed', $target);
		$target->events->trigger('modified', $target);
		
	}
	
	private function updateStat(Event $event) {
		// uses event name to update correct meta stat
		$stat = strtolower($event->getName());
		$event->getTarget()->meta->$stat = time();	
	}
	
}