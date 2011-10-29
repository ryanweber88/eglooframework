<?php
namespace eGloo\DataProcessing\DDL\Manager\Listener\Pool;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

class Limit extends \eGloo\Utilities\EventManager\CollectionLimit {
	
	// TODO count passed to construct should be configurable

	
	/**
	 * 
	 * Checks current pool size and responds accordingly if exceeded
	 * @param Event $event
	 */
	public function eventCheckLimit(Event $event) { 
		
		// if we have reached the limit
		if ($this->reachedLimit()) { 
			// TODO what do we do once limit is reached - items must
			// be detached from pool
		}
	}
	

	
}