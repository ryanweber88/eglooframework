<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain,
    \eGloo\Utilities\Collection;
		
class Relation extends \eGloo\Dialect\ObjectSafe {
	
	function __construct(Domain\Model $model) {
		$this->builder = new \Bella\Table($model->signature());
		$this->model   = $model; 
		
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
		
		return $this;
				
	}
	
	/**
	 * 
	 */
	public function where($mixed, $__arguments = null) {
		

		
		// it is assumed that if hash, we have passed key:value pairs, and
		// not key:? placeholders.. we push our values into arguments
		
		if (Collection::isHash($arguments = $mixed)) {
			foreach($arguments as $field => $value) {
				$conditions[]      = "$key = ?";
				$this->arguments[] = $value; 
			}
			
			$conditions = implode (' AND ', $conditions);
		}
		
		// otherwise we simply pass string to to our builder and check if 
		// arguments have been passed as well
		else if (is_string($mixed)) {
			
			$conditions = $mixed;
					
			// arguments can be variable length, so we determine first,
			// if they have been passed
			if (!is_null($__arguments)) {
				// since our first argument is required we slice off the first element
				$arguments = array_slice(func_get_args(), 1);
				
				// now we merge onto our list of arguments
				$this->arguments = array_merge(
					$this->arguments, $arguments
				);
			}			
		}
		
		else {
			throw new \Exception(
				"Failed determining 'where' because arguments are not valid : " . print_r (
				$mixed		
			));
		}
			
		// pass our conditions to where method and return instance
		$this->chain = $this->chain->where($conditions);
		
		return $this;
				
	}
	
	public function joins($__mixed) { }
	
	public function on($__mixed) { }
	public function limit($number) { }
	public function offset($number) { }
	public function group($number) { }
	
	/**
	 * Evaluates query and executes on statement 
	 */
	public function build() {
		$result = $model::statement(
			$this->builder->to_sql(), $this->arguments
		);
			
		// now lets flush our chain and arguments to prepare
		// for fresh query
		$this->arguments = array();
		$this->chain     = null;	
	}

	protected $builder;	
	protected $chain;
	protected $model;
	protected $arguments;
}