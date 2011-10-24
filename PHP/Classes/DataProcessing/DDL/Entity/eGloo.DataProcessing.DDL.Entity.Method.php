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
	 * Responsible for executing "method" or statement and
	 * initializing data structure of entity if statement
	 * returns data
	 * @param  mixed $arguments
	 * @return void
	 */
	public function call($arguments) {
		
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
	
	public function __toString() { 
		return $this->name;
	}
	
	
	protected $name;
	protected $comments;
	protected $parameters;
	protected $arguments;
	protected $return;
	protected $entity;
}