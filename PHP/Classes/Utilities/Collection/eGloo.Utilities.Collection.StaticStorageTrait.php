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
	
	protected static function &retrieve($key, \Closure $fallback = null) { 
		
		// if key is our closure, then we generate key from
		// lambda signature
		if ($key instanceof \Closure) { 
			// assign key to fallback
			$fallback = $key;
			
			// now generate key from lambda signature
			// @todo below is costly in terms of steps, need
			// to extend reflectionfunction to provide quicker
			// lookup
			$reflection = new ReflectionFunction($key);
			$key = md5((string)$reflection);
			
		}
		
		if (!isset(static::$store[$key])) { 
			static::$store[$key] = $fallback($key);
		} 
		
		return static::$store[$key];
	}
	
	protected static $store = [ ];
}