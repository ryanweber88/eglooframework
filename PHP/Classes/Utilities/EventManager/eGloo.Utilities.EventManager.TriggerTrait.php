<?php
namespace eGloo\Utilities\EventManager;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EventManager\EventCollection;
use \Zend\EventManager\EventManager;

/**
 * Provides magic calls to trigger events dynamically; requires zf2 EventManager
 */
trait TriggerTrait {
	
	
	function __call($name, $args) { 
		// if magic function starts with trigger
		if (strpos($name, 'trigger_') !== false) { 
			if ($this->events instanceof EventManager) { 
				$this->events->trigger(substr($name, 8), $this, $args);
			}
			
			else { 
				throw new \eGloo\Dialect\Exception(
					"ATTEMPTED to trigger events; EventManager has not been instantiated"
				);
			}
		}
		
		// call parent call if an instance of super object
		if ($this instanceof \eGloo\Dialect\Object) { 
			parent::__call($name, $args);
		}
	}
	
	protected function initializeTrigger() { 
		// instantiate zf2 eventmanager class
		$this->events = new EventManager();
	}
	
	protected $events;
}