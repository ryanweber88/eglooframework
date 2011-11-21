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
class Find extends DDL\Entity\Middleware {
		
	
	/**
	 * (non-PHPdoc)
	 * @see MiddlewareInterface::processArguments()
	 */
	public function processArguments(array $arguments) { 
		$manager = DDL\Entity\Manager\Factory::factory();
		$allIn   = true;
		
		var_export($arguments); exit;
								
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
		 			
		// TODO write some measure of intelligence in the number
		// of entities built on an evaluation
		$this->entities = new \SplFixedArray(count($results));
		$counter = 0;
	 			
		// iterate through results - remember that results can be a
		// combination of records (as returned by the database) and
		// entities, from persistence 			
		foreach ($results as $index => $mixed) {
			
			// result is an entity, which was gleaned from persistence context by 
			// a middleware component			
			if (is_object($mixed) && $mixed instanceof Entity) { 
				$this->entities[$counter++] = $mixed;
			}
			
			// otherwise result is coming from database, and we do search of persistence
			// context for entity 
			else {
				
				$allIn = false;
				
 				$this->entities[$counter++] = $manager->find(
 					$this->entity, 
 					$record[$this->entity->definition->primary_key], function() use ($record) { 
 						
 						// instantiate entity
 						$entity              = clone $this->entity;
 						$entity->attributes  = $record;
 						
 						// returning entity to manager to handle persistence
 						return $entity;
 						
 					}
 				); 	
 				
 				echo "adding entity\n";
 				
 				
 				// now do side associations
 				// @todo abstract this into something nicer than associative
 				// array 
 				if (is_array($results['look_for'])) { 
	 				foreach ($results['look_for'] as $fieldName => $composite) { 
	 					if (isset($record[$fieldName])) { 
	 						foreach ($composite['values'] as $value) {

	 							// if we find a match, map a new association, unset value
	 							// from looks for, and break loop
	 							if ($record[$fieldName] == $value) {
	 								$entities = $manager->map
	 										->with($this->entity->definition->primary_key)
	 										->with($record[$this->entity->definition->primary_key])
	 										->retrieves($this->entity);
	 										
	 								$manager->map->with($fieldName)->with($value)->refers($entities);
	 								
	 								// unset value as we should not look for again
	 								unset($results['looks_for'][$fieldName]);
	 								
	 								break;
	 							}
	 						}
	 					}
	 				}
 				}
 				
			}
		}		
		
		return $results;
	}
	
}