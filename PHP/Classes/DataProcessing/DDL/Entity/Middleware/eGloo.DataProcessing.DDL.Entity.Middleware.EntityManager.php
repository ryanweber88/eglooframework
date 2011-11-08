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
class EntityManager extends Middleware {
	
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
	
}