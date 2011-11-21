<?php
namespace eGloo\DataProcessing\DDL\Entity\Middleware\QuerySet;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Responsible for communicating with entity manager (persitence context) to
 * determine what entities need to be queried, and which currently exist
 * @author Christian Calloway
 *
 */
class Find extends DDL\Entity\Middleware\Middleware {
		
	
	/**
	 * (non-PHPdoc)
	 * @see MiddlewareInterface::processArguments()
	 */
	public function processArguments(array $arguments) { 
		$manager = DDL\Entity\Manager\Factory::factory();
		$allIn   = true;
		
								
		// check fields for entities that already exist in database - 
		// flag them if that is the case
		// @todo this needs to be moved an object relationship - horrifically
		// ugly at the moment
		foreach ($arguments['fields'] as $name => $composite) {
			// found is where we stash a note that a particular field and
			// value has been found
			$arguments['fields'][$name]['found'] = [ ];
			$counter = 0;
						
			foreach($composite['values'] as $index => $value) {
				if ($manager->map->with($name)->with($value)->retrieves($this->container->entity) !== false) {
					
					// move value to found and unset from main args list
					$arguments['fields'][$name]['found'][] = $value;
					
					// remove argument from list as it has already been persisted
					unset($arguments['fields'][$name]['values'][$index]);
				}
				
				// if entity cannot be found
				else if ($allIn) {
					$allIn = false;
				}
			}
		}
		

		
		// A false return will flag to short circuit results, since
		// all of our entities can be found		
		return $allIn 
			? false
			: $arguments;

		return $arguments;
		
	}
	
	/**
	 * (non-PHPdoc)
	 * @see MiddlewareInterface::processResults()
	 */
	public function processResults(array $arguments, array $results) { 
		$manager = DDL\Entity\Manager\Factory::factory();
		$allIn   = count($results) > 0;

		// appends to results the fields we are looking for, that will be 
		// mapped during the evaluation aspect of queryset
		// @todo this is sloppy, needs to be refactored
		
		// iterate through arguments - any arguments that have reached this
		// point HAVE been queried for
		foreach ($arguments as $fieldName => $composite) {
			
			if (isset($composite['found']) && is_array($composite['found'])) { 
				// append found values to the end of results
				foreach($composite['found'] as $value) { 
					$results = array_merge(
						$results, $map->with($fieldName)->with($value)->retrieves($this->container->entity)
					);
				}
			}
			
		}
		
		return $results;
		 			
	}
	
}