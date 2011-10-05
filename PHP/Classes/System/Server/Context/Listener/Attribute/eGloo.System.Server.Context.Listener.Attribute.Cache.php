<?php
namespace eGloo\System\Server\Context\Listener\Attribute;

use \Zend\EventManager\HandlerAggregate;
use \Zend\EventManager\Event;

/**
 * 
 * A 'Cache' observer - when notified, via update, checks if value
 * @author Christian Calloway
 *
 */
class Cache extends \eGloo\Dialect\Object implements HandlerAggregate { 
	
	use \eGloo\Utilities\EventManager\HandlerAggregateTrait;
	
    public function attach(EventCollection $events) {
    	$events->attach('valid', array($this, 'valid'));
    }
    	
	function __construct($expires) {
		// set absolute expires timestamp 
		$this->expires = time()  + $expires;
	}
	
	protected function valid(Event $event) { 
		// checks if cache is still valid; if not, unbind the value from attributes
		// owner (a context object)
		if ($this->expired()) { 
			$event->getTarget()->owner()->unbind($event->getTarget()->name);
		}
	}
	
	final private function expired() { 
		return ($this->expires - time()) <= 0;
	}
	
	protected $expires;
}