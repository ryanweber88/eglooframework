<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain,
    \eGloo\Dialect,
    \eGloo\Utilities;

/**
 * Acts as primary interface to model instance, or as lightweight 
 * "representative" of a singleton model instance
 * @author Christian Calloway callowaylc@gmail.com
 */
class Proxy extends Dialect\Proxy implements Domain\ModelInterface {
	
	function __construct($mixed, $__mixed = null) {
		// @TODO determine performance hit using call_user_func; calling parent
		// constructor isn't as an overarching a concern as performance - we can't
		// call constructor directly because variable argument list isn't 
		// directly supported #wtfphp
		call_user_func_array(
			array('parent', '__constructor'), func_get_args()
		);
		
		// now check to ensure that delegated is instanceof Model
		// #george
		$this->delegated instanceof Domain\Model or throws(
			"Failed to construct instance '{$this->ident()}' because delegated '$delegated' ".
			"must be instance of Model"
		);
	}
	/**
	 * Evaluates results of given pass through method (__get, __set, __call, __callstatic)
	 * @return mixed
	 */
	protected function evaluate($lambda) {
		// first we get a singleton instance of model
		$model = $this->delegated;
			
		// first we use our caller utility to determine
		// calling method - not as performant as explicitly
		// passing method name, but cleaner in terms of interface
		$caller    = new Utilities\Caller;
		$arguments = $caller->arguments();
		$name      = $arguments[0];
		
		echo $caller; exit;
		 
		
		// check if dynamic property methods have been called
		// in which case we need to perform passthrough
		// operation on model instance and record returned
		// value on proxy instance
		if (in_array($method = $caller->method(), array('__get', '__set'))) {
			
			// check if value is already available on attributes; if so
			// retrieve and return
			if ($caller->method() == '__get'     &&
			    isset($this->attributes[$name])) {
				
				return $this->attributes[$name];	
			}		
							


			// if current id does not match, rebuild model and take
			// note of current id; we do this avoid build on model
			// as much as possible
			if (static::$current != ($id = spl_object_hash($this))) {
				$model->build($this->store);
				static::$current = $id;
			}			
			
			// if set method, we set value on model instance
			// and then (re)set value within attributes store
			if ($method == '__set') {
				$model->$name = $arguments[1];	
			}
			
			$this->attributes[$name] = $model->$name;
			
		}
		
		// otherwise we are dealing with __call, __callstatic;
		// we push arguments to that method and blindly return
		// results
		else {
			return call_user_func_array(
				array($model, $method), $arguments
			);
		}
						

		
	}
	
	private function instance() {
		// returns singleton instance of delegated class
		$class = get_class($this->delegated);
		exit;
		return $class::instance();
	}
	
	protected      $attributes = array();
	private static $current;
	
}