<?php
namespace eGloo\System\Server\Context\Listener\Attribute;

use \eGloo\System\Server;


/**
 * 
 * A 'Cache' observer - when notified, via update, checks if value
 * @author Christian Calloway
 *
 */
class Time extends Server\Context\Listener\Time implements ListenerAggregate { 

	
	public function valid(Event $event) { 
		// checks if cache is still valid; if not, unbind the value from attributes
		// owner (a context object)
		if ($this->expired()) { 
			$event->getTarget()->owner()->unbind($event->getTarget()->name);
		}
	}
	
}