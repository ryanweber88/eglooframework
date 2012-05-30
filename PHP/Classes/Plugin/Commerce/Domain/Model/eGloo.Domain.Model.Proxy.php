<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain,
    \eGloo\Dialect;

/**
 * Acts as primary interface to model instance, or as lightweight 
 * "representative" of that instance
 * @author Christian Calloway callowaylc@gmail.com
 */
class Proxy extends Dialect\Proxy implements Domain\ModelInterface {
	
	public function evaluate($lambda) {
		$model = $this->instance();
		
		// if current id does not match, rebuild model and take
		// note of current id
		if (static::$current != ($id = spl_object_hash($this))) {
			$model->build($this->store);
			static::$current = $id;
		}
		
		// now call parent method to evaluate and set value; we must
		// also retrieve calling method, "the caller", in order to 
		// determine our action on proxy because our get/sets have
		// implicit underlying functionality that must be written
		// onto proxy
		$caller = new Utilities\Caller;
		
		if (in_array($caller->method(), function('__get', '__set')))
		
		// 
		switch($caller->method()) {
			// if we have reached this point, then most likely a model
			// attribute has been requested; we set the return value onto
			// a proxy property of the same name	
			case '__get' :
				$arguments = $caller->argue
			
			case '__set' :
				
			// for our method missing calls (instance and class), we
			// simply route directly through and return value
			default      :
				return $lambda();
		}
		
		
	}
	
	private function instance() {
		// returns singleton instance of delegated class
		$class = $this->class->qualified_name;
		return $class::instance();
		
	}
	
	private function current() {
		// retrieves 

	}
	
	private static $current;
}