<?php
namespace eGloo\DataProcessing\DDL\Entity\Listener;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Responsible for observing the amount of memory being consumed by
 * a context, performing appropriate action when bounds have been
 * met
 * @author Christian Calloway
 *
 */
class Limit extends \eGloo\Dialect\Object implements ListenerAggregate { 
	

	
}