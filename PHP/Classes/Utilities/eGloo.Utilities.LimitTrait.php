<?php
namespace eGloo\Utilities\EventManager\Listener;

use \Zend\EventManager\EventManager;

/**
 * 
 * Event listener to manage collection (array, quueue, stack, etc) limits 
 * @author Christian Calloway
 *
 */
interface LimitTrait {
	
	protected function init() { 
		// pass
		//if (!$this->events) { 
			//$this->events = new EventManager();
		//}
	}
	
	protected function limit($collection, $listeners) { 
		// pass	
	}
	
	protected $events;
}