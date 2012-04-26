<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain;
use \eGloo\Utilities\Delegator;


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
		static::$pseudonym = "$namespace\\$pseudonym";
		
		// fakes like the class it's pretending to be! unfortunately this
		// has to be a static call in order to create a static method; an
		// unfortunate and sordid part of wtfphp
		static::fakeIt();
	}
	
	/**
	 * 
	 */
	static function __static() {
			
	}
	
	public static function factory($pseudonym, $__mixed = null) {
		return new static($pseudonym, $__mixed);
	}
	
	/**
	 * Uses convention to determine if underlying layer has data representation
	 * as identified by $name
	 * 
	 */
	public static function tangible($name) {
		$class = static::classnamefull();
		
		throw new \Exception(
			"Failed send method 'tangible' to class receiver '$class' because ".
			"it cannot be determined at framework level"
		);
	}

	
	protected static function signature() {
		// get signature pattern - so Common\Domain\ModelProductOption\Status, will be
		// converted to product_option_status; this could have been accomplished on 
		// one line, but we sacrifice readability
		$tokens    = explode('\\', preg_replace('/^.+Model[\\\]?/', null, static::classNameFull()));
		$signature = strtolower(\eGlooString::toUnderscores(implode('_', $tokens)));
		
		return $signature;
	}
	
	public static function className() {
		$tokens = explode('\\', static::$pseudonym);
		return $tokens[count($tokens)-1];
	}

	public static function classNameFull() {
		return static::$pseudonym;
	}
		
	public static function get_called_class() {
		return static::$pseudonym;
	}
	
	
	private static function fakeIt() {
		// fakes 
		$class     = get_called_class();
		$signature = static::signature();
		$classname = static::className();
		$fakeClass = static::classNameFull();
					
		// assign static delegation
		 
		Delegator::delegate(get_called_class(), get_class(static::data()));
		
				
		// explicitly define find if we haven't found a suitable alias;
		// we can't explicitly define this method because it would interfere
		// with aliases, which for the time being are more correct (specific)
		// @TODO these need to be moved to __methodStatic
		
		static::defineMethod('find', function($__mixed, $class) use ($fakeClass) {

			// expand on parameter matching, but for, just match on primary
			// and tablename_id pattern
			$arguments = func_get_args();
			$table     = $class::sendStatic('signature');
			$field     = "{$table}_id";
			$key       = $arguments[0]; 
									
			// we're GAURENTEED to throw an exception here if our by-conventions guess
			// does not pan out; so callers will be explicitly aware
			try {
				
				return new $class($fakeClass, $class::statement("
					SELECT * FROM $table WHERE $field = ?
						
				", $key));
				
			}
			
			catch(\Exception $passthrough) {
				throw $passthrough;
			}
			
			
		});
		
				
		// explicitly define all, if not aliased and not explicitly defined
		
		static::defineMethod('all', function($class) {
				
			// expand on parameter matching, but for, just match on primary
			// and tablename_id pattern
			$arguments = func_get_args();
			$table     = $class::sendStatic('signature');
			$field     = "{$table}_id";
			$key       = $arguments[0]; 
			
			// we're GAURENTEED to throw an exception here if our by-conventions guess
			// does not pan out; so callers will be explicitly aware
			try {
				
				$set = $class::statement("
					SELECT * FROM $table
						
				");
				
				return $class::sendStatic('process', $set);
			}
			
			catch(\Exception $passthrough) {
				throw $passthrough;
			}
			
			
		});
	
				
		// delegate our query building methods to Relation
		// @TODO we should delegate to scoped which should handle
		// the rest
			
		// @TODO user is causing all kinds of fucking problem when not
		// receiving an initializing hash; so i am taking the bitch out
		// for the moment
			
		static::delegates(array(
			'methods' => array('selects', 'where', 'join', 'limit', 'order', 'group'),
			'to'      => new Relation(get_called_class())
		));		
	}
	
	
	
	protected static $pseudonym;
}
