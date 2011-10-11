<?php
namespace eGloo\System\Server\Context\Listener;

use \eGloo\System\Server;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;


/**
 * 
 * Responsible for monitoring session viability (does a session user id exist) 
 * and expiring data, should that data no longer exist
 * @author Christian Calloway
 *
 */

class Session extends \eGloo\Dialect\Object implements ListenerAggregate { 
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;
	
	function __construct(Server\Action\Middleware\Session $session) { 
		$this->session = $session;
	}
	
    public function attach(EventCollection $events) {
    	$events->attach('valid', array($this, 'valid'));
    }
	
	public function valid(Event $event) { 
		// TODO invalidate context if session has expired - should
		// this be done in conjunction with time listener?
	}    
	
	protected $session;
}