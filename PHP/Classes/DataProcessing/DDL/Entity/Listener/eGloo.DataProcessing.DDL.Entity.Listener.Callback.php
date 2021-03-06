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
				$params['name'], function(array $pass = [ ]) use ($params) {
					// @todo this entire callback mechanism needs to be refactored
					// - to many odd parameters being passed
					if (isset($params['definition']) && is_callable($params['definition'])) {
						return $params['definition']();
					}					
						
					// if middleware has been specified, we are processing a method call (call
					// to underlying data layer) - middleware acts to process or make sence of 
					// all deferred callback data, which is passed as organized set to method
					// call - finally results will be processed by appropriate handler and
					// returned to evaluate method
					else if (isset($params['middleware']) && is_array($params['middleware'])) {
						
						$runMethod = true;
							
						// must be careful that pass does not conflict/collide with
						// any hash keys used in arguments
						$arguments = array_merge($params['arguments'], $pass);
						$results   = [ ];
						
												
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
						if ($runMethod) {
						
							try { 
								$method = isset($params['method']) 
									? $params['method']
									: DDL\Entity\MethodGateway::method($this->entity, $params['name']);
								
								$results = $method->call(
									$arguments
								);  
								
							}
							catch (DDL\Exception\Exception $pass) {
								throw $pass;
							}
						}
						
						if (is_array($results)) { 								
							foreach(array_reverse($params['middleware']) as $middleware) {
								if (($results = $middleware->processResults($arguments, $results)) === false) {
									break ;
								}
							}
						}
												
						return $results;
						
					}
					
					// if no middleware components are specified, we are simply passing arguments to next
					// callback handler
					else {
						$pass[$params['name']] = $params['arguments'];

						return $pass;
					}
	
				}
			));
			
			// unless defer flag has been exp specified, trigger evaluation
			// immediately
			if (!isset($params['defer']) || $params['defer'] !== true) { 
				$target->events->trigger('evaluate', $target);
			}
			
			return true;
		}
		
		
	
    	// throw exception as target does not have callbacks
    	throw new DDL\Exception\Exception(
    		'Target does not have a callback stack: ' . get_class($target)
    	);
    }
    
	
}