<?php
namespace eGloo\System\Server\Context\Listener;

use \Zend\EventManager\HandlerAggregate;
use \Zend\EventManager\Event;

/**
 * 
 * Responsible for monitoring changes within context (newly bound/expired/changed attributes, context
 * destruction (sessions, cookies), etc; on-change events will trigger a specified handler
 * @author Christian Calloway
 *
 */
class Change extends \eGloo\Dialect\Object implements HandlerAggregate { 
	
	use \eGloo\Utilities\EventManager\HandlerAggregateTrait;
	
	function __construct() { 
		
	}
	
    public function attach(EventCollection $events) {
    	// TODO attach change events
    }
	
}