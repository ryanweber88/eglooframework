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
class Collection extends Utilities\ActiveSupport {
	
	/**
	 ** Uses array of keys or indicies to return array
	 ** of values
	 **/
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