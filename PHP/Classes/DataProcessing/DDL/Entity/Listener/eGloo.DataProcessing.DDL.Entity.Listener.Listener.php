<?php
namespace eGloo\DataProcessing\DDL\Entity\Listener;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Provides base functionality for entity listening classes
 * @author Christian Calloway
 *
 */
class Listener extends \eGloo\Utilities\EventManager\Listener\Listener {
	
	function __construct(DDL\Entity\Entity $entity, array $callbacks = [ ]) {
		parent::__construct($callbacks);
		
		$this->entity = $entity;
	}
	
	protected $entity;
}