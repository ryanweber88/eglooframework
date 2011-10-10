<?php
namespace eGloo\Utilities\EventManager;

use \Zend\EventManager\EventCollection;


/**
 * provides standard methods to handle Zend\EventManager\HandlerAggregate interface
 * @author Christian Calloway
 */
trait ListenerAggregateTrait { 

    abstract public function attach(EventCollection $events);
    
    public function detach(EventCollection $events) {
        foreach ($this->handlers as $key => $handler) {
            $events->detach($handler);
            unset($this->handlers[$key]);
        }
        $this->handlers = array();
    }
    
    protected $handlers;
}