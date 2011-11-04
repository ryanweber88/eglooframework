<?php
namespace eGloo\DataProcessing\DDL\Entity\Manager\Listener\Pool;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Provides a 'limit' listener for pool
 * @author Christian Calloway
 *
 */
class Limit extends \eGloo\Utilities\EventManager\Listener\Limit\Collection {
	
	function __construct($limit) { 
		parent::__construct($limit);

	}
	
	protected function reachedLimit(Event $event) {
		// determine how to dump from pool intelligently
		// pass
	}

	
	protected $pool;
}