<?php
namespace eGloo\Utilities\EventManager\Listener;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Provides abstract functionality for monitoring 
 * @author Christian Calloway
 *
 */
class Stat extends Listener {
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;
	
	abstract public function eventAccessed(Event $event);
	abstract public function eventModified(Event $event);
	
}