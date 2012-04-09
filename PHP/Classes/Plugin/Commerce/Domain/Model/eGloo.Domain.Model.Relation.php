<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain,
    \eGloo\Utilities\Collection;
		
		
/**
 * Represents a relationship and provides query build tools; this class is never directly
 * invoked, but delegated to from Model. 
 * @TODO At the moment, it simply serves as a query build, but Model#defineRelationship will
 * eventually be moved here
 * @TODO this->chain = $this->chain needs to scoped to a handler method
 * 
 */		
class Relation extends \eGloo\Dialect\ObjectSafe 
	implements \eGloo\Utilities\ToArrayInterface {
	
	function __construct($model) {
		$this->builder = new \Bella\Table($model::sendStatic('signature'));
		$this->model   = $model; 
		
		$this->chain = $this->builder;
	}
	
	public function from($tables) {
		$this->chain = $this->chain->from($tables);
		
		return $this;
	}
	
	/**
	 * Shortcut/convenience to where method, creates field like ? conditions
	 */
	public function search(array $arguments) {
		$conditions = array();
		
		foreach($arguments as $key => $value) {
			$conditions[]    = "LOWER($key) like ?";
			$arguments[$key] = strtolower($value); 
		}
		
		return $this->where(
			implode(' OR ', $conditions), array_values($arguments)
		);
	}
	
	/**
	 * Alias to search, a bit more idiomatic in terms of its purpose 
	 * which is a like wildcard search
	 */
	public function like(array $arguments) {
		return $this->search($arguments);
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

		$conditions = array();
		$groups     = array();
		
				
		// it is assumed that if hash, we have passed key:value pairs, and
		// not key:? placeholders.. we push our values into arguments
		if (is_array($mixed) && Collection::isHash($arguments = $mixed)) {
			foreach($arguments as $field => $value) {
				// @TODO should the where here be cleaning argument input, or should
				// that job rest with extrinsic callers?
				$operator = 'AND';

				if (!empty($value)) {
					
					if (!is_array($values = $value)) {
						$values = array($value);
					}
					
					else {
						$operator = 'OR';
					}
					
					
					foreach($values as $value) {
						$groups[] = strpos($value, '%') !== false 
							? "$field like ?"
							: "$field = ?";
							
						$this->arguments[] = $value;	
					}
										
					//array_merge($);
					$conditions[] = "(" . implode (" $operator ", $groups) . ")";
					
				} 
			}
						
			$conditions = implode (" AND ", $conditions);
		}
		
		// otherwise we simply pass string to to our builder and check if 
		// arguments have been passed as well
		else if (is_string($mixed)) {
			
			$conditions = $mixed;
					
			// arguments can be variable length, so we determine first,
			// if they have been passed
			if (!is_null($__arguments)) {
				// since our first argument is required we slice off the first element
				$arguments = \eGloo\Utilities\Collection::flatten(array_slice(
					func_get_args(), 1
				));
								
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
	
	/**
	 * @TODO this should really be delegated, since its a direct call on 
	 * Bella/ARel, but delegation chains are getting complex
	 */
	public function joins($table) {
		$this->chain = $this->chain->join($table);
		//var_export($this->chain); exit;
		
		return $this;
	}

	/**
	 * @TODO this should really be delegated, since its a direct call on 
	 * Bella/ARel, but delegation chains are getting complex
	 */	
	public function on($field) {
		$this->chain = $this->chain->on($field);
		
		return $this;
	}
	
	public function to_sql() {
		return $this->chain->to_sql();
	}
	
	public function limit($number) { }
	public function offset($number) { }
	public function group($number) { }
	
	/**
	 * Evaluates query and executes on statement 
	 * @return Set
	 */
	public function build() {
		//echo $this->chain->to_sql(); exit;
		$model  = $this->model;
		$result = null;
				
		try { 
			$result = $model::sendStatic('process', $model::statement(
				$sql = $this->chain->to_sql(), $this->arguments
			));
		}
		
		catch(\Exception $deferred) { }
		
			
		// our query method should always return set, so we
		// wrap in set if we have only returned on record, which would
		// result in a single model instance
		if (isset($result) && $result instanceof Domain\Model) {
			$result = new Domain\Model\Set($result);
		}
							
		// now lets flush our chain and arguments to prepare
		// for fresh query
		$this->arguments = array();
		$this->chain     = $this->builder;	
		
		if (isset($deferred) && $deferred instanceof \Exception) {
			throw $deferred;
		}
	
		return $result;
	}
	
	public function __toArray() {
		return $this->build()->__toArray();
	}

	protected $builder;	
	protected $chain;
	protected $model;
	protected $arguments = array();
}