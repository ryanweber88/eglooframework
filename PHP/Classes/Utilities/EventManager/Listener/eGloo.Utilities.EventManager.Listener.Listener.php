<?php
namespace eGloo\Utilities\EventManager\Listener;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

abstract class Listener extends \eGloo\Dialect\Object {
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;
	
	function __construct() { 
		// use reflection to get all 'event' methods
		$reflection = new ReflectionClass($this);
		
		foreach ($reflection->getMethods as $method) { 
			if (strpos($method->getName(), 'event')) { 
				$eventName = lcfirst(str_replace(
					'event', null, $method->getName())
				);
				
				$events->attach(
					$method->getName(), array($this, $eventName)
				);
			}
		}
	}
}