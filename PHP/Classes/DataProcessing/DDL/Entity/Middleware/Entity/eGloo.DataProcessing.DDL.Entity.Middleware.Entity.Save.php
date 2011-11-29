<?php
namespace eGloo\DataProcessing\DDL\Entity\Middleware\Entity;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Responsible for evaluating entity meta data, to determine what fields are applicable to
 * creating/updating a record
 * @author Christian Calloway
 *
 */
class Save extends DDL\Entity\Middleware\Middleware {
	
	public function processArguments(array $arguments) {
		
		
		// get list of of change columns and build into fields array
		foreach($this->entity->meta->columns as $column) {			
			if ($column->changed()) {
				$arguments['fields'][$column->name] = addslashes($column->is());	
			}
		}
		
		return $arguments;
	}
	
	/**
	 * (non-PHPdoc)
	 * @see MiddlewareInterface::processResults()
	 */
	public function processResults(array $arguments, array $results) {
		return $results;
	}
	
}