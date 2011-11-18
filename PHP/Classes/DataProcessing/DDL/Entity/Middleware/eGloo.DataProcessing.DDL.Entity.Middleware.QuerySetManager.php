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
		$manager = DDL\Entity\Manager\Factory::factory();
				
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
				if ($manager->map->with($name)->with($value)->retrieves($this->entity) !== false) {
					
					// move value to found and unset from main args list
					$arguments['fields'][$name]['found'][] = $value;
					
					// remove argument from list as it has already been persisted
					unset($arguments['fields'][$name]['values'][$index]);
				}
			}
		}
		
		// A false return will flag to short circuit results, since
		// all of our entities can be found
		return $arguments;
		
	}
	
	/**
	 * (non-PHPdoc)
	 * @see MiddlewareInterface::processResults()
	 */
	public function processResults(array $arguments, array $results) { 
		$manager = DDL\Entity\Manager\Factory::factory();

		// appends to results the fields we are looking for, that will be 
		// mapped during the evaluation aspect of queryset
		// @todo this is sloppy, needs to be refactored
		
		// iterate through arguments - any arguments that have reached this
		// point HAVE been queried for
		foreach ($arguments as $fieldName => $composite) {
			
			foreach($results as $record) {
				
			}
		}
		
		return $results;
	}
	
}