<?php
namespace eGloo\DataProcessing\DDL\Entity\Listener;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Provides logger details for lifecycle callback
 * @author Christian Calloway
 *
 */
class Logger extends Listener { 
	
	// PROVIDE STUB METHODS ------------------------------------------------ //
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\DataProcessing\DDL\Entity\Listener.Listener::onLoad()
	 */
	public function onLoad(\Closure $lambda = null) { 
		
	}
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\DataProcessing\DDL\Entity\Listener.Listener::onRemove()
	 */
	public function onRemove(\Closure $lambda = null) { 
	
	}
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\DataProcessing\DDL\Entity\Listener.Listener::onUpdate()
	 */
	public function onUpdate(\Closure $lambda = null) { 
	
	}
	
}