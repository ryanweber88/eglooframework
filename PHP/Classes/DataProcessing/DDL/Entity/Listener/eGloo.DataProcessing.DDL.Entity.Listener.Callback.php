<?php
namespace eGloo\DataProcessing\DDL\Entity\Listener;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 * 
 * Responsible for listening to call and evaluate trigers
 * @author Christian Calloway
 * @todo   Should evaluate exist here, or even at all?
 * 
 *
 */
class Callback extends Listener {
	
	/**
	 * Keeps track of method calls made - resets on commit
	 * @param  Event
	 * @return Boolean
	 * @throws DDL\DDL\Exception
	 */
    public function eventCall(Event $event) { 
    	
    	
		// just shortcutting to params and results handler
		$params  = $event->getParams();
		$target  = $event->getTarget();
								
		// push callback onto target stack
		if (property_exists($target, 'callbacks')) { 
			$target->callbacks->push(new DDL\Utility\Callback(
				$params['name'], function(array $pass) use ($params) {
	
					$arguments = $params['arguments'];
					$runMethod = true;
					$results   = [ ];
						
					// if middleware has been specified, we are processing a method call (call
					// to underlying data layer) - middleware acts to process or make sence of 
					// all deferred callback data, which is passed as organized set to method
					// call - finally results will be processed by appropriate handler and
					// returned to evaluate method
					if (isset($params['middleware']) && is_array($params['middleware'])) {
						foreach($params['middleware'] as $middleware) {
							// a false return will indicate that method does not need to be
							// called
							if (($arguments = $middleware->processArguments($arguments)) === false) {
								// flag false on run methods and break out (short-circuit) middleware
								// processing loop
								$runMethod = false;
								break ;
							}
						}
						
						// if we have fields left after processing, then they will need to be queried
						if ($runMethod && count($arguments['fields'])) {
							
							try { 
								$result = MethodGateway::method($this->entity, $params['name'])->call(
									$arguments
								);  
							}
							catch (DDL\Exception\Exception $pass) {
								throw $pass;
							}
						}
						
														
						foreach(array_reverse($params['middleware']) as $middleware) {
							if (($results = $middleware->processResults($arguments, $results)) === false) {
								break ;
							}
						}
						
						return $results;
						
					}
					
					// if no middleware components are specified, we are simply passing arguments to next
					// callback handler
					else {
						$pass[$params['name']] = $arguments;
						
						return $pass;
					}
	
				}
			));
			
			// unless defer flag has been exp specified, trigger evaluation
			// immediately
			if (!isset($params['defer']) || $params['defer'] !== true) { 
				$target->events->trigger('evaluate');
			}
			
			return true;
		}
		
		
	
    	// throw exception as target does not have callbacks
    	throw new DDL\Exception\Exception(
    		'Target does not have a callback stack: ' . get_class($target)
    	);
    }
    
	
}