<?php
namespace eGloo\Utilities;

/**
 * Provides fallback method to provide a default in case initial value is null, or
 * not available; similar to python dict.get(value, default)
 */
trait FallbackTrait { 
	
	/**
	 * Provides a fallback or default value or a closure if $value is not available
	 * @throw \eGloo\Dialect\Exception
	 */
	public static function fallback($value, $default) { 
		
		// if value is empty, check whether default is callable
		if (empty($value)) {
			// if default is callable, call-it and return value 
			if (is_callable($default)) { 
				return $default();
			}
			
			else if (!empty($default)) { 
				return $default;
			}
			
			else { 
				throw new \eGloo\Dialect\Exception(
					"EMPTY default value" 
				);
			}
		}
		
		// otherwise return value 
		return $value;
	}
}