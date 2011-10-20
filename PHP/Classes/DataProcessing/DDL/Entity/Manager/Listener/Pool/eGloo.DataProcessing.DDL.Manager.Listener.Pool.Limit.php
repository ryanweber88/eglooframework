<?php
namespace eGloo\DataProcessing\DDL\Manager\Listener\Pool;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

class Limit extends \eGloo\Utilities\EventManager\CollectionLimit {
	
	// TODO count should be configurable
	function __construct($count) {
		
	}
	
	/**
	 * 
	 * Checks current pool size and responds accordingly if exceeded
	 * @param Event $event
	 */
	public function eventCheck(Event $event) { 
		
	}	
	
}