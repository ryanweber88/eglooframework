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

	/**
	 * Flattens multidimensional array into single dimensonal array
	 * @param  mixed[](n)
	 * @return mixed[]
	 */
	public static function flatten($collection) {
		$return = array();
		
		array_walk_recursive($collection, function($a) use (&$return) {
			$return[] = $a;
		});
		
		return $return;
	}
	
	/**
	 * Trim is used mostly in conjunction with returned data sets; the point
	 * of which is to 1) return a single record if multi-dimension array only
	 * contains a single record and 2) return only column (as array or singular)
	 * if array contains only one keyed column 
	 * @param  mixed[](n)
	 * @return mixed
	 */
	public static function trim($collection) {
		if (count($collection[0]) == 1) {
			$values = array();
			$key    = \current(array_keys(
					$collection[0]
			));
				
			foreach($collection as $record) {
				$values[] = $record[$key];
			}
				
			$collection = $values;
		}
			
		// here we provide some convenience for our returned
		// collection - if only one record within collection, then we don't
		// want to return multidimensional collection
		if (count($collection) == 1) {
			$collection = $collection[0];
		}
		
		return $collection;
	}
	

} 