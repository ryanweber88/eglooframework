<?php
namespace eGloo\DataProcessing\DDL\Statement;

use \eGloo\DataProcessing\DDL;
use \eGloo\DataProcessing\DDL\Entity\Entity;


/**
 * 
 * Responsible for building statement to be executed by Statement
 * @author Christian Calloway
 * @todo   limit_static
 *
 */
class Builder extends \eGloo\Dialect\Object {
	
	use \eGloo\Utilities\Collection\StaticStorageTrait;
	
	
	public static function create(Entity $entity, $path, array $arguments = [ ]) {
		$builder            = new Builder();
		$builder->entity    = $entity;
		$builder->path      = $path;
		$builder->arguments = $arguments;
								
		return $builder->build();
	}
	
	/**
	 * 
	 * Responsible for building/parsing statement, given entity
	 * data
	 * @param Entity $entity
	 * @param string $content
	 */
	public function build() { 
		
		// add meta information to arguments
		// @todo we need a meta "namespace" in which
		// to store all meta names - for now, kiss
		
		// add entity type (class name) to arguments
		$this->arguments['type'] = strtolower(
			$this->entity->_class->name
		);	
		
		$this->arguments['primary_key'] = $this->entity->definition->primary_key;

		// splat array ends/leaves 
		// @todo, adapter must be specified either by injection or configuration 
		// (or combination of the two)
		extract(Adapter\SQL::processArguments($this->splatArray(
			$this->arguments
		)));
								
		// "parse" required content and place into buffer
		ob_start();
		require $this->path;
		return  ob_get_clean();
		
	}
	

	
	private function splatArray($array) { 
		// a bit of misnormer - recursively splats the end points of arra
		foreach($array as $key => $value) {
									
			// look for leaf condition - current element is array, but child
			// element is not
			if (is_array($value)) { 
				if (count($keys = array_keys($value)) && !is_array($value[$keys[0]])) { 

					// splat array to list of comma seperated values
					$array[$key] = implode (',', $array[$key]);	
					
				}
				
				//else if (!$this->isAssoc($value)) { 
				else {
					$array[$key] = $this->splatArray($value);
				}
			}		
		}

		return $array;
	}
	
	private function isAssoc($arr) {
		// guesses if array is associative or not
	    return array_keys($arr) !== range(0, count($arr) - 1);
	}
	
	
	protected $entity;
	protected $path;
	protected $arguments;
	
}