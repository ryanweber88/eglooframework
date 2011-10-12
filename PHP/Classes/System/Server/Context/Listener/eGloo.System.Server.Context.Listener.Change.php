<?php
namespace eGloo\System\Server\Context\Listener;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Responsible for monitoring changes within context (newly bound/expired/changed attributes, context
 * destruction (sessions, cookies), etc; on-change events will trigger a specified handler
 * @author Christian Calloway
 *
 */
class Change extends \eGloo\Dialect\Object implements ListenerAggregate { 
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;
	
	function __construct() { 
		
	}
	
    public function attach(EventCollection $events) {
	    // TODO attach change events
	    $events->attach('bind'  , array($this, 'changed'));
	    $events->attach('unbind', array($this, 'changed'));
    }
    
	public function changed(Event $event) { 
		// TODO differentiate between change events			
		// flag target (context) that change has occured 
		$event->getTarget()->changed(true);
	}      
	
}