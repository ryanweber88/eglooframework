<?php
namespace eGloo\Utilities\EventManager\Listener;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

class Listener extends \eGloo\Dialect\Object implements ListenerAggregate {
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;
	
	function __construct(array $callbacks = [ ]) { 
		$this->callbacks = $callbacks;	
	}
	
	public function attach(EventCollection $events) { 
		// use reflection to get all 'event' methods
		$reflection = new \ReflectionClass($this);
		
		foreach ($reflection->getMethods() as $method) { 
			if (strpos($method->getName(), 'event') === 0) { 
				$eventName = strtolower(str_replace(
					'event', null, $method->getName())
				);
								
				$this->handlers[$eventName] = $events->attach(
					$eventName, function(Event $event) use ($method) { 
						return $this->{$method->getName()}($event); 
					}
				);
			}
		}	

		// override event methods with callbacks, if provided
		foreach($this->callbacks as $event => $callback) { 
			
			if ($callback instanceof \Closure) { 
				
				// detach previous event, should it exist
				if (isset($this->handlers[$event])) { 
					$this->detach($this->handlers[$event]);	
				}
								
				// attach override event
				$this->handlers[$event] = $events->attach($event, function(Event $event) use ($callback, &$events) { 
					// if callback returns absolute false, then detach particular event from
					// collection
					if ($callback($event) === false) { 
						$events->detach($this->handlers[$event->getName()]);
					}
				});
				
			}
		}
	}
	
	
	protected $callbacks;
}