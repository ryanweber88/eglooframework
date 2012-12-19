<?php
namespace eGloo\DataProcessing\DDL\Entity\Listener;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 *
 * Responsible for listening to entity log events
 * @author Christian Calloway
 *
 */
class Logger extends \eGloo\Utilities\Listener\Listener {

	use \eGloo\Utilities\EventManager\ListenerAggregateTrait;


    public function eventLog(Event $event) {

    }

}
