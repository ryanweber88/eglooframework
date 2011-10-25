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
	public function call() {
		
		// get statement content
		$content = DDL\Statement\Group::statement(
			$this->entity, $this->name
		);
		
		echo $content; exit;
		
		// build statement and pass to statement instance
		
		$data = DDL\Statement\Statement::rnew()
			->execute(DDL\Statement\Builder::build(
				$this->entity, $content
			));
				
		// execute statement and return contents to caller
		if (is_array($data)) { 
			$this->entity->data = new Data($this->entity);
			
		}
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