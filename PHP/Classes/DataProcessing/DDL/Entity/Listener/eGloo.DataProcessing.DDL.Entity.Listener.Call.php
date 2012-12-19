<?php
namespace eGloo\DataProcessing\DDL\Entity\Listener;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\ListenerAggregate;
use \Zend\EventManager\Event;
use \Zend\EVentManager\EventCollection;

/**
 *
 * Responsible for listening to entity method calls and keeping
 * track of last call
 * @author Christian Calloway
 *
 *
 */
class Call extends Listener {

	/**
	 * Keeps track of method calls made - resets on commit
	 */
    public function eventCall(Event $event) {


		// just shortcutting to params and results handler
		$params  = $event->getParams();
		$target  = $event->getTarget();

		// push callback onto target stack
		$target->callbacks->push(new DDL\Utility\Callback(
			$params['name'], function(array $pass) use ($params) {

				$arguments = $params['arguments'];
				$runMethod = true;

				if (isset($params['middleware']) && is_array($params['middleware'])) {
					foreach($params['middleware'] as $middleware) {
						// a false return will indicate that method does not need to be
						// called
						if (($arguments = $middleware->processArguments($arguments)) === false) {
							$runMethod = false;
							break ;
						}
					}

					if ($runMethod) {

						$result = MethodGateway::method($this->entity, $params['name'])->call(
							$arguments
						);

						foreach(array_reverse($params['middleware']) as $middleware) {
							if (($results = $middleware->processResults($arguments, $results)) === false) {
								break ;
							}
						}
					}
				}


				return $results;
			}
		));

		// unless defer flag has been exp specified, trigger evaluation
		// immediately
		if (!isset($params['defer']) || $params['defer'] !== true) {
			$this->events->trigger('evaluate');
		}


		// true return will short-curcuit any subsequent calls

		return true;
    }

    public function eventEvaluate(Event $event) {

    }

}
