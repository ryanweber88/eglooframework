<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain,
    \eGloo\Utilities\Collection;
		
class Relation extends \eGloo\Dialect\ObjectSafe {
	
	function __construct(Domain\Model $model) {
		$this->builder    = new \Bella\Table($model->signature());
		$this->composed = $model::classNameFull(); 
		
		$this->chain = $this->builder;
	}
	
	
	/**
	 * 
	 */
	public function selects($__mixed) {
		$arguments = Collection::flatten(func_get_args());
		// if we only have one argument, we have either passed
		// a single string, which can be a tokenized list of
		// strings, a single field or an array of strings
		if (count($arguments) == 1) {
						
			if (is_string($argument = $arguments[0])) {
				
					// here our single string can be a field or tokenized list of fields
				$arguments = array_map(function($value) {
					return trim($value);	
				}, explode(",", $argument));

			}
			
			else if (is_array($argument)) {
				$arguments = $argument;
			}
			
			else {
				throw new \Exception(
					"Failed determining 'selects' because arguments are not valid : " . print_r (
					$__mixed		
				));
			}
		}
		
		$this->chain = $this->chain->project(implode(',', $arguments));
				
	}
	
	/**
	 * 
	 */
	public function where($mixed, $arguments = null) {
		
		if (Collection::isHash($conditions = $mixed)) {
				
		}
		
		else if (is_string($conditions = $mixed)) {
			
		}
		
		else {
			throw new \Exception(
				"Failed determining 'where' because arguments are not valid : " . print_r (
				$mixed		
			));
		}
				
	}
	
	public function joins($__mixed) { }
	
	public function on($__mixed) { }
	public function limit($number) { }
	public function offset($number) { }
	public function group($number) { }
	
	/**
	 * Evaluates query 
	 */
	public function build() {
		return $this->builder->to_sql();
	}

	protected $builder;	
	protected $chain;
	protected $composed;
}