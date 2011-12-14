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
		
		
		// check if entity is currently being managed, in which case, we
		// are performing an update, so we check changed fields
		if ($this->entity->state == DDL\Manager::ENTITY_STATE_MANAGED) { 
			foreach($this->entity->meta->columns as $column) {			
				if ($column->changed()) {
					$arguments['fields'][$column->name] = addslashes($column->is());	
				}
			}
		}
		
		// otherwise entity is new, and we check that fields have been set
		else {
			foreach ($this->entity->meta->columns as $column) {
				// if column does not validate, throw exception
				if (!$column->required && is_null($column->value)) {
					throw new DDL\Exception\Exception(
						"Field $column does not validate"
					);
				}
				
				else if(!is_null($column->value)) {
					$arguments['fields'][$column->name] = $column->value;
				}
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