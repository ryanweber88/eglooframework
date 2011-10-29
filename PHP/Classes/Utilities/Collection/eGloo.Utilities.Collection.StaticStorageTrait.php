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
		
		if (!isset(static::$store[$key])) { 
			static::$store[$key] = $fallback($key);
		} 
		
		return static::$store[$key];
	}
	
	protected static $store = [ ];
}