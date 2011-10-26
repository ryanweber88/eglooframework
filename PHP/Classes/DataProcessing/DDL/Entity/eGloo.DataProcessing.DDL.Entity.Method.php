<?php
namespace eGloo\DataProcessing\DDL\Entity;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Represents a callable method for an entity - extends Callback
 * functionality as method is simply a wrapper for deferred
 * functionality with the addition of executing prepapred
 * statements
 * @author Christian Calloway
 *
 */
class Method extends DDL\Utility\Callback {
	
	
	/**
	 * Overrides parent method, because method is ultimately
	 * responsible for executing "method" or statement and
	 * initializing data structure of entity if statement
	 * returns data
	 * @param  mixed $arguments
	 * @return void
	 */
	public function call(array $arguments = [ ]) {
		
		// get statement content
		$content = DDL\Statement\Group::statement(
			$this->entity, $this->name
		);
		
		echo $content;
				
		// build statement and pass to statement instance
		$data = DDL\Statement\Statement::rnew()
			->execute(DDL\Statement\Builder::build(
				$this->entity, $content
			));
				
		
		// if data has returned an array, we have requested
		// find method, or in all likilihood, entity
		// has requested evaluation.
		if ($data && is_array($data)) { 
			$this->entity->data(Data/Builder::create(
				$this->entity, $data
			));
		}
		
		// execute callback, if it exists
		
	}
	
	/**
	 * 
	 * String representation of method is returned as its name
	 */
	public function __toString() { 
		return $this->name;
	}
	
	
	protected $comments;
	protected $parameters;
	protected $return;
	protected $entity;
}