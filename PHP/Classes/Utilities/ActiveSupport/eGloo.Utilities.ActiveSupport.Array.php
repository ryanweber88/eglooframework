<?php
/**
 * Contains class definition for Array
 * @author Christian Calloway callowaylc@gmail christian@petflow
**/ 
namespace eGloo\Utilities\ActiveSupport;
use       \eGloo\Utilities;


/**
 * Provides active support extensions for array
 *
 */
class Array extends Utilities\ActiveSupport {
	
	public function values($__keys) {
		$values = array();

		foreach (func_get_args() as $key) {
			try {
				$values[] = $this->value[$key];
			} catch(\Exception $ignore) { }
		}

		return $values;
	}	


}