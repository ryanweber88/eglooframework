<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain;

/**
 * A concrete and "generic" representation of the domain model; in most instances, this will
 * be used as a dynamically determined model so we can avoid stubbing every single godamn
 * table
 */
class Generic extends Domain\Model {
	
	function __construct($pseudonym, $__mixed = null) {
		parent::__construct($__mixed);
		
		// now lets create our fake namespaced pseudonym
		$namespace         = $this->namespace();
		static::$pseudonym = "$namespace\\$class";
	}
	
	
	protected static function signature() {
		// get signature pattern - so Common\Domain\ModelProductOption\Status, will be
		// converted to product_option_status; this could have been accomplished on 
		// one line, but we sacrifice readability
		$tokens    = explode('\\', preg_replace('/^.+Model[\\\]?/', null, get_called_class()));
		$signature = strtolower(\eGlooString::toUnderscores(implode('_', $tokens)));
		
		return $signature;
	}
	
	public static function classname() {
		$tokens = explode('\\', static::get_called_class());
		return $tokens[count($tokens)-1];
	}
	
	public static function get_called_class() {
		return static::$pseudonym;
	}
	
	
	
	protected static $pseudonym;
}
