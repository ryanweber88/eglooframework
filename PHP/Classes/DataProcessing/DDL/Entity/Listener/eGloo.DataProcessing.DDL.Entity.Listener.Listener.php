<?php
namespace eGloo\DataProcessing\DDL\Entity\Listener;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

abstract class Listener implements Entity\EntityInterface, ListenterAggregate { 
	
	// PROVIDE STUB METHODS ------------------------------------------------ */
	
	public function onLoad(\Closure $lambda = null) { }
	public function onRemove(\Closure $lambda = null) { }
	public function onUpdate(\Closure $lambda = null) { }
	
}