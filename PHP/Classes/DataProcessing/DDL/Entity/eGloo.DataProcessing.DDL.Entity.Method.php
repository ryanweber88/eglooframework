<?php
namespace eGloo\DataProcessing\DDL\Entity;

use \eGloo\DataProcessing\DDL;



/**
 * 
 * Represents a callable method for an entity
 * @author Christian Calloway
 *
 */
class Method extends \eGloo\Dialect\Object {
	
	function __construct(Entity $entity) { 
		$this->entity = $entity;
	}
	
	/**
	 * 
	 * Overrides default setter/getter - strlower name on set
	 * @param unknown_type $value
	 */
	public function name($value = null) { 
		return $this->setOrGet(__FUNCTION__, $value, function() { 
			// ensures that method signature name is lower cased
			$this->name = strtolower($value); 
		});
	}
	
	/**
	 * 
	 * Responsible for executing "method" or statement; this can 
	 * be done from an entity, when working outside of managerial
	 * context, or most likely, from the manager
	 * @return mixed[][];
	 */
	public function call() {
		
		// get statement content
		$content = DDL\Statement\Group::statement(
			$this->entity, $this->name
		);
		
		// build statement and pass to statement instance
		$statement = new DDL\Statement\Statement(DDL\Statement\Builder::build(
			$this->entity, $content
		));
				
		// execute statement and return contents to caller
		return $statement->execute()
	}
	
	public function __toString() { 
		return $this->name;
	}
	
	
	protected $name;
	protected $comments;
	protected $parameters;
	protected $return;
	protected $entity;
}