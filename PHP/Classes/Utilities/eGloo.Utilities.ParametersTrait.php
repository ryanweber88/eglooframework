<?php
namespace eGloo\Utilities;

trait ParametersTrait { 
	
	/**
	 * Assigns $mixed/$value as key, value to parameters property, or, if
	 * $mixed is array, performs an array_merge
	 * 
	 * Please note that assigning an array will perform a merge as opposed to
	 * reinitializing parameters property
	 */
	public function assign ($mixed, $value = null) { 
		// if array, perform merge - existing key/value pairs will be overwritten
		if (is_array($mixed)) { 
			$this->parameters = array_merge(
				$this->parameters, $mixed
			);
		}
		
		// if key, value pair, assign to parameters hash
		else { 
			$this->parameters[$mixed] = $value;
		}
		
		
		// otherwise, a value hasn't been specified and we throw an exception
		//else { 
		//	throw new \eGloo\Dialect\Exception(
		//		"INVALID value passed to assign >>  $mixed = $value"
		//	);
		//}
	}
	
	protected $parameters = [];
}