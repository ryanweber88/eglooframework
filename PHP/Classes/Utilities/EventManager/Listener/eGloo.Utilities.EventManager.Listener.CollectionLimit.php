<?php
namespace eGloo\Utilities\EventManager\Listener;

use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Provides abstract functionality for monitoring limits of a 
 * collection
 * @author Christian Calloway
 *
 */
abstract class CollectionLimit extends Listener {
	
	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;
	
	function __construct($count) { 
		// call parent constructor
		parent::__construct();
		
		// TODO determine limits - will these change in respect to
		// different contexts
		$this->count = $count;
	}
	
    
    abstract public function eventCheck(Event $event);
    
    
	
	
	protected $count = 0;
}