<?php
namespace eGloo\DataProcessing\DDL\Entity\Middleware;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Responsible for communicating with entity manager (persitence context) to
 * determine what entities need to be queried, and which currently exist
 * @author Christian Calloway
 *
 */
class QuerySetManager extends Middleware {
		
	
	/**
	 * (non-PHPdoc)
	 * @see MiddlewareInterface::processArguments()
	 */
	public function processArguments(array $arguments) { 
		$manager = Manager\Factory::factory();
		$allIn   = true;
		
		// check fields for entities that already exist in database - 
		// flag them if that is the case
		foreach ($arguments['fields'] as $name => $composite) {
			$arguments['fields'][$name]['found'] = [ ];
			$counter = 0;
			
			foreach($composite['values'] as $key) {
				// if entity is found then  
				if (($entity = $manager->map->with($name)->with($key)->retrieves) !== false) {
					$arguments['fields'][$name]['found'][] = [
						'index' => $counter++ , 'value' => $key, 'entity' => $entity
					];
				}

				// check difference to see if all values are found
				// in persitence context, if not flag it damnit
				if ($allIn) { 
					if (count($composite['values']) > count($arguments['fields'][$name]['found'])) {
						$allIn = false;
					}
				}				
			}
		}
		
		// A false return will flag a short circuit results 
		return $allIn 
			? false 
			: $arguments;
		
		
		// check if all entities are found, in which case, we flag short-circuit
		// generating results (since we have no need to hit database if currently
		// everything sought is currently in persistence context)
		
		return $arguments;		
	}
	
	/**
	 * (non-PHPdoc)
	 * @see MiddlewareInterface::processResults()
	 */
	public function processResults(array $arguments, $results) { 
		$manager = Manager\Factory::factory();
		
		foreach($arguments['fields'] as $name => $composite) {
				
			foreach ($composite['values'] as $key) { 
				
			}
		}
		
		return $results;
	}
	
	protected $entity;
}