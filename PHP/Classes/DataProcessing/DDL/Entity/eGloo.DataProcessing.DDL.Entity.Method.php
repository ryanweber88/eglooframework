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
class Method extends \eGloo\Dialect\Object {
	
	
	function __construct(Entity $entity, $name) { 
		
	}
	
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
		$content = DDL\Statement\Bundle::create($this->entity)
			->statement(
				$this->entity, $this->name
			);
		
				
		// build statement and pass to statement instance
		$data = DDL\Statement\Statement::rnew()
			->execute(DDL\Statement\Builder::create(
				$this->entity, $content, $arguments
			));
				
		
		// if data has returned an array, we have requested
		// find method, or in all likilihood, entity
		// has requested evaluation.
		// TODO how to do multiple data sets?? 
		if ($data && is_array($data)) { 
			$this->entity->data(Data/Builder::create(
				$this->entity, $data
			));
		}
				
	}
	
	/**
	 * 
	 * String representation of method is returned as its name
	 */
	public function __toString() { 
		return $this->name;
	}
	
	
	protected $arguments;
	protected $name;
	protected $comments;
	protected $parameters;
	protected $return;
	protected $entity;
}