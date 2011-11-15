<?php
namespace eGloo\Utilities\Collection;

/**
 * 
 * Provides a set useful functions for saving state to 
 * class variable - this meant to be used only within
 * class context
 * @author Christian Calloway
 * @todo   Add limiting\lru traits
 *
 */
trait StaticStorageTrait { 
	
	protected static function &retrieve($key, $fallback = null) { 
		
		// if passing multiple keys, these will be representative
		// of dimension in array
		$node = &static::$store;
		
		// if key is passed as array of multiple keys,
		// pop the last element as key and build multi-
		// dimension path to array
		if (is_array($key)) { 	
			
			$tmp = array_pop($key);
			
			foreach($key as $value) {
				if (!isset($node[$value])) {
					$node[$value] = [ ];
				}
				
				$node = &$node[$value];
			}
			
			$key = $tmp;
		}
		
		
				
		// if key is our closure, then we generate key from
		// lambda signature
		else if (is_callable($key)) { 
			// assign key to fallback
			$fallback = $key;
			
			// now generate key from lambda signature
			// @todo below is costly in terms of steps, need
			// to extend reflectionfunction to provide quicker
			// lookup
			$reflection = new ReflectionFunction($key);
			$key = base64_encode((string)$reflection);
			
		}
		
		if (!isset(static::$store[$key])) { 
			$node = $fallback($key);
		} 
		
		return static::$store[$key];
	}
	
	protected static $store = [ ];
}