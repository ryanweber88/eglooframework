<?php
namespace eGloo\Utilities;


/**
 * Provides utility methods, mostly static, for array manipulation
 * @author Christian Calloway callowaylc@gmail.com
 */
class Collection extends \eGloo\Dialect\ObjectSafe {
	
	/**
	 * 
	 * Determines if collection is a dictionary/associative/etc;
	 * if a Collection object is being used, it must respond
	 * to the correct methods in order to work properly
	 * @param Collection $collection
	 */
	public static function isHash($collection) {
		return array_keys($collection) !== range(0, count($collection) - 1);
	}

} 