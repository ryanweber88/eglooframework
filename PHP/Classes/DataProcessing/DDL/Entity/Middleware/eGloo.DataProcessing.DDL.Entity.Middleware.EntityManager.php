<?php
namespace \eGloo\DataProcessing\DDL\Entity\Middleware;

/**
 * 
 * Responsible for communicating with entity manager (persitence context) to
 * determine what entities need to be queried, and which currently exist
 * @author Christian Calloway
 *
 */
class EntityManager extends \eGloo\Dialect\Object implements MiddlewareInterface {
	
	use MiddlewareTrait;
	
	/**
	 * (non-PHPdoc)
	 * @see MiddlewareInterface::processArguments()
	 */
	public function processArguments(array $arguments) { 
		$manager = Manager\Factory::factory();
		
		// check fields for entities that already exist in database - 
		// flag them if that is the case
		foreach ($arguments['fields'] as $name => $composite) {
			$arguments['fields'][$name]['found'] = [ ];
			$counter = 0;
			
			foreach($composite['values'] as $key) {
				// if entity is found then  
				if ($manager->find($entity, $key)) {
					$arguments['fields'][$name]['found'][] = [
						'index' => $counter++ , 'value' => $key;
					];
				}	
			}
		}
		
		return $arguments;		
	}
	
	/**
	 * (non-PHPdoc)
	 * @see MiddlewareInterface::processResults()
	 */
	public function processResults(array $arguments, $results) { 
		
	}
}