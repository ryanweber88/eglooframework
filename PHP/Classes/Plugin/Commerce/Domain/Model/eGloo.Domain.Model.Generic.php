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
	
	function __construct($pseudonym = null, $__mixed = null) {
		
		// @TODO this is temporoary until i can figure out a 
		// a more elegant way doing this; until that point
		// if an array is being passed as first argument
		// we assume that we are using prior pseudonym (note
		// this may cause very unhappy shit)
		if (is_array($arguments = $pseudonym) || is_null($pseudonym)) {
			if (static::$pseudonym !== null) {
				$tokens    = explode('\\', static::$pseudonym);
				$pseudonym = $tokens[count($tokens)-1];
			} 
			
			else {
				throw new \Exception(
					'Failed to instantiate generic model because a pseudonym has not been defined'
				);
			}
		} 
		
		else {
			$arguments = $__mixed;
		}
		
		static::$pseudonym = $pseudonym;
			
		parent::__construct($arguments);
			
		// now lets create our fake namespaced pseudonym
		static::$pseudonym = "{$this->namespace()}\\$pseudonym";

		
		// fakes like the class it's pretending to be! unfortunately this
		// has to be a static call in order to create a static method; an
		// unfortunate and sordid part of wtfphp
		static::fakeIt();
	}
	
	/**
	 * Overrides ObjectSafe.instantiate to reuse preexisting class
	 * variable pseudonym is not arguments are passed
	 * @throws Exception
	 */
	public static function instantiate($__mixed = null) {
		$returns    = null;	
		$arguments  = func_get_args();
		$reflection = new \ReflectionClass(get_called_class()); 

		// if arguments have been passed we create an instance as usual
		if (count($arguments)) {
			$returns = $reflection->newInstanceArgs($arguments);
		
		// otherwise, if no arguments have been passed, we attempt to create
		// a new generic with pre-existing pseudonym
		} else if (static::$pseudonym !== null)  {
			$returns = new static(static::$pseudonym);
			
		// otherwise we throw an exception
		} else {
			throw new \Exception(
				"Failed to instantiate generic model without arguments"
			);
		}
				
		return $returns;
	}
	
	
	/**
	 * 
	 */
	static function __static() {
			
	}

	public static function entity() {
		return static::entityName();
	}

	public static function entityName() {
		return static::signature(
			static::$pseudonym
		);
	}
	
	public function ident() {
		return get_called_class() . '/' . 
		       static::classNameFull()  .
		       '<' . spl_object_hash($this) . '>';
	}
	
	public static function factory($pseudonym, $__mixed = null) {
		return new static($pseudonym, $__mixed);
	}
	
	/**
	 * @TODO for the time being, this must be set to return false, but we can check
	 * exists by looking at pseudoname pattern
	 */
	public function exists() {	
		$primaryKey = $this->primaryKeyName();
	
		if (isset($this->$primaryKey)) {			 
			return !is_null($this->$primaryKey);
		}
		
		// @TODO can't determine if generics that fall outside of naming
		// conventions actually exist (esp in case of junction tables)
		return true;	
	}
	
	public function primaryKeyName() {
		return static::signature() . '_id';
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

	public static function instance($model = null) {
		if ($model !== null) {
			static::$pseudonym = $model;
		}
		
		return parent::instance();
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
	
	public static function __callstatic($name, $arguments) {
		if (in_array($name, $methods = array('selects', 'where', 'join', 'limit', 'order', 'group', 'offset'))) {
			static::delegates($a = array(
				'methods' => $methods,
				'to'      => new Relation(get_called_class())
			));			
			
		}
		
		return parent::__callstatic($name, $arguments);
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
				// @TODO passthrough isn't getting pushed
				// to caller scope/context	
				echo $passthrough;
				exit;
				
				//throw $passthrough;				
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

				// @TODO clean this up later - I shouldn't have to keep asking whether
				// item is set or model
				$result = $class::sendStatic('process', $set);
							
				if ($result instanceof Domain\Model) {
					$result = new Set($result);
				}
				
				
				
				return $result;
			}
			
			catch(\Exception $passthrough) {
				// @TODO passthrough isn't getting pushed
				// to caller scope/context	
				echo $passthrough;
				exit;
				
				//throw $passthrough;
			}
			
			
		});
			
				
		// delegate our query building methods to Relation
		// @TODO we should delegate to scoped which should handle
		// the rest
			
		// @TODO user is causing all kinds of fucking problem when not
		// receiving an initializing hash; so i am taking the bitch out
		// for the moment
			

		
		return ;
	}
	
	
	
	public static $pseudonym;
}
