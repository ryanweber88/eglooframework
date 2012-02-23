<?php
namespace eGloo\Domain;

use \eGloo\Utilities\Delegator;

/**
 * Superclass for all domain models; provides generic functionality
 * @author Christian Calloway callowaylc@gmail.com
 */
abstract class Model extends Delegator 
	implements \eGloo\Utilities\ToArrayInterface {
	
	// this acts as a store for adding runtime instance properties
	// @TODO this will be replaced, as storing values will be delegated
	// in the future
	protected $properties = array();
	
	/**
	 * @param variable-length $__mixed
	 */
	function __construct($__mixed = null) {
		
		// make sence of parameter - this will change as EPA
		// is folded into our domain model
		if (is_array($__mixed) && \eGloo\Utilities\Collection::isHash($__mixed)) {
			$this->initialize($__mixed);
		}
		
		// pass to parent delegator::__construct our *DataAccess
		// instance or Domain\Data
		try {
			parent::__construct(static::data());
		}	
		
		// there is not a gaurentee that every class will have an
		// associated *DataAccess to delegate to - in which case
		// we simply ignore the generated exception
		catch(\Exception $ignore) { }
		
		
		// call our relationships method, which provides callbacks attached
		// to the names of our relationships
		$this->__relationships();
		$this->__callbacks();
		
		

	}
	
	/** @Polymorphic */
	static function __static() {
		// assign static delegation 
		Delegator::delegate(get_called_class(), get_class(static::data()));
	}
	
	

	
	
	/**
	 * Responsible for initialize of model attributes
	 */
	protected function initialize(array $arguments) {

		foreach($arguments as $name => $value) { 
			$this->$name = $value;
		}
				
		// call __relationships - the idea is that child classes should
		// use method as area to concretely draw all domain based relationships;
		// this method should be seen as a constructor for relationships
		$this->__properties();

		
		// finally set flag 'initialized' to true
		$this->initialized = true;
	}
	
	/**
	 * Makes a determination if model has been initialized
	 */
	public function initialized() {
		return $this->initialized;
	}
	
	/**
	 * Determines if model exists as record in underlying database; 
	 */
	public function exists() {
		// @TODO this clearly needs to change - for right now, just check if id has been
		// set
		return !is_null($this->id);
	}

	
	/**
	 * This is an alias to defineMethod - currently it is here for 
	 * idiomatic reasons only
	 */
	protected function defineRelationship($name, $lambda) {
		// get model name, using inflection class
		// @TODO this will need to be changed as it doesn't
		// belong here
		//echo static::namespaceName(); exit;
		$relationshipName = $name;
		$name             = \eGloo\Utilities\InflectionsSafe::instance()
						          ->singularize($name);
		$ns               = $this->namespace();
		$self             = $this;
				
		if (class_exists($model = "$ns\\$name") || class_exists($model = "$ns\\{$this->className()}\\$name")) {
			return $this->defineMethod($relationshipName, function() use ($model, $self, $relationshipName) {
				
				
				// check if the model exists in the database to ensure we are
				// not running queries against an empty/shallow model
				if ($self->exists()) {
					$result = $lambda($model);
					
					// check if singular result or hash
					if (is_array($result)) {
						if (\eGloo\Utilities\Collection::isHash($result)) {
							$result = new $model($result);
						}
						
						else {
							
							foreach($result as $record) {
								$temporary[] = new $model($record);	
							}
							
							// replace result with temporary
							$result = $temporary;
						}
					}
				
					return $result;
				}
				
				// if the model doesn't exist, or this is a case where we have a "shallow"
				// model, we return a shallow copy of our relationship(s)
				else {

					return \eGloo\Utilities\InflectionsSafe::isSingular($relationshipName)
						
						// return an empty instance of model
						? new $model
						
						// @TODO maybe 'EmptySet' here?
						: new Utility\EmptySet($model);
				}
			});
		}
		
		throw new \Exception(
			"Failed to define relationship \"$name\" because model \"$model\" does not exist"	
		);
	}

	
	
	/**
	 * Provides a variable length argument list of items that
	 * must exist prior to certain callbacks
	 */
	protected function validates($__mixed) {
		$this->validates = is_array($__mixed[0])
			? $__mixed
			: func_get_args();
	}
	
	/**
	 * Determines if model is valid based on attribute values specified
	 * in validates
	 */
	public function valid() {
		
		// run our validation callbacks
		$this->runCallbacks('validate');
		
		// explicitly check fields
		foreach($this->validates as $attribute) {	
			$hasAttribute = "has_$attribute";
			
			if (!$this->$hasAttribute) {
				return false;
			}
		}
				
		return true;
	}
	
	/**
	 * Returns a printout of validation failures; this should only be used 
	 * during testing
	 */
	public function whatsInvalid() {
		
		// right now just return a list of invalid fields
		$attributes = array();
		
		foreach($this->validates as $attribute) {
			$hasAttribute = "has_$attribute";
			
			if (!$this->$hasAttribute) {
				$attributes[] = $attribute;
			}
		}
		
		return $attributes;
	}
	
	/**
	 * Convenience method meant to return array of values from
	 * fields specified in arguments list; is not mindful of 
	 * whether field values exists or not
	 */
	public function values($__mixed) {
		$fields = is_array($__mixed[0])
			? $__mixed
			: func_get_args();
		
		foreach($fields as $name) {
			$values[] = $this->$name;
		}
		
		return $values;
	}

	
	/**
	 * A stubb method here to be used by concrete model classes
	 */
	protected function __relationships() { }
	protected function __callbacks()     { }
	
	/** Callbacks **************************************************************/
	
	/*
	protected function beforeCreate() { }
	protected function beforeSave()   { }
	protected function beforeUpdate() { }
	*/
	

	
	/**
	 * @param variable-length $__mixed
	 */
	static function __constructStatic($__mixed = null) {
		static::defineMethod('columns', function() {
			throw new \Exception('columns not implemented - because it sucks'); 	
		});
		
	}
	
	
	
	/**
	 * Provides an array representation of model
	 */
	public function __toArray() {
		
		// wrap our current domain\model instance in arrayaccess 
		// in most instances, this will be to our smarty instance
		// which should only accept type scalar or array
		return new Utility\ArrayAccess(
			$this	
		);
		
	}	

	
	protected function __properties() {
		// call our parent method to ensure any property work is done
		// up hierarchy chain
		parent::__properties();
		
		// from ClassNameYada derive pattern class_class1_class2
		$class = strtolower(preg_replace(
			'/([a-z])([A-Z])/', '$1_$2', static::className()
		));
				
		// iterate across properties and determine if they
		// fit pattern of $class_(name)
		// @TODO replace self reference - stupid 5.3 issue
		$self = $this;
				
		
		// @TODO static cache is not working here - needs to be
		// polymorphic
		$properties = static::cache(function() use ($self) {
			return \array_keys(\get_object_vars($self));
		});
		
		$properties = \array_keys(\get_object_vars($this));
		
		
		foreach($properties as $name) {
			if (preg_match("/{$class}_(.+)/", $name, $match)) {
				$this->aliasProperty(
					strtolower($match[1]), $name	
				);				
			}
		}
			
	}
	
	
	/**
	 * Create method is a really wrapper to instantiate model, and then
	 * call save
	 * @return Model
	 * @param  variable-length[] $__mixed
	 */
	public static function create($__mixed = null) {
		
		// because create can be sent to both instance and class
		// receivers, we have to explicitly check to determine 
		// who are reciever is; in the former case, receiver is
		// passed as argument and should never been be external
		// to Model
		$arguments = func_get_args();
		
		// check if receiver has beenb passed as argument 
		if (isset($arguments[0]) && ($self = $arguments[0]) instanceof Model) {
			
			// because runCallbacks is a protected method, we use the send method 
			// to by-pass access modifier; sorry folks, this is the only way to do
			// this without creating a static create and instance create method
			$self->send('runCallbacks', __FUNCTION__);
		}
			
		
		// instantiate model and explicitly set primary key to nil; this will ensure
		// that a record is created as opposed to an update - the onus lies
		// upon the developer that they do not do an explicit call on create
				
		else {
			
			$model     = new static($arguments);
			$model->id = null;
			
			// saves model to underlying data layer
			$model->save();
			
			// return model to caller
			return $model;
		}
	}
	
	public function save() {
		

		// we ask the question again, if valid, after performing
		// our validation routines
		if ($this->valid()) { 
			// execute our save callbacks
			$this->runCallbacks(__FUNCTION__);
			
			// based on whether model primary key is set, call the correct
			// action method
			return $this->exists() 
			
				// run update against instance if 
				? $this->update()
				
				// unfortunately this has be passed here as we can call static
				// context, but not have static funciton be aware of instance
				: $this->create($this);
		}
		
		// lets see what is missing for validation and throw exception
		throw new \Exception(
			"Cannot save model because the attributes did not pass validation : " . 
			print_r($this->whatsInvalid(), true)	
		);
		
	}
	
	
	public function update() {
		$this->runCallbacks(__FUNCTION__);
	}
	
	public static function delete($key = null) {
		if (isset($this)) { 
			return $this->runCallbacks(__FUNCTION__);
		}
		
		else {
			$model = static::find($key);
			return $model->delete();
		}
	}
	
	
	
	protected function defineCallback($event, $mixed, $lambda = null) {
	
		$point = $mixed;
	
		if (is_null($lambda) && is_callable($mixed)) {
			$lambda = $mixed;
			
			// @TODO 'around' should not be specified inline
			$point  = 'around';
		}
	
		if (is_callable($lambda)) {
			$this->callbacks[$event][$point][] = $lambda;
		}
	
		else {
			throw new \Exception(
					"A block/lambda must be provided when defining a callback"
			);
		}
	
	}
		
	protected function runCallbacks($event) {
		
		// we use inject idea to pass values between callbacks,
		// if needed; if any callback returns false, then
		// we short-circuit execution
		$inject = true;
		
		// run our before/around callbacks
		foreach(array('before', 'around') as $point) {
			if (isset($this->callbacks[$event][$point])) {
				foreach($this->callbacks[$event][$point] as $lambda) {
					if (($inject = $lambda($inject)) === false) {
						return ;
					}
				}
			}		
		}
		
		// run our after callbacks in reverse order
		if (isset($this->callbacks[$event]['after'])) { 
			foreach(array_reverse($this->callbacks[$event]['after']) as $lambda) {
				if (($inject = $lambda($inject)) === false) {
					return ;
				}
			}
		}
	
	}
	
	
	
	
	protected static function __methodsStatic() {
		$class = static::className();
		
		// provide reg exp list to check methods against
		$lookFor = array(
				'/loadByI(D|d)/'                   => 'find',
				"/load{$class}ByI(D|d)/"           => 'find',
				'/load([A-Z][a-z]+?)By([a-zA-Z])/' => 'find_by_$1_$2',
				"/load{$class}List/"               => 'all',
				"/create{$class}/"                 => 'create' 
		);

		// retrieve list of methods from class
		$reflection = new \ReflectionClass(get_called_class());
		$methods    = $reflection->getMethods(\ReflectionMethod::IS_STATIC);
		
		// iterate through patterns and check against our static methods
		// drawing up aliases where patterns match
		foreach($lookFor as $pattern => $alias) {
			foreach($methods as $method) {
				if (preg_match($pattern, $method->getName(), $match)) {
					
					try { 
						static::aliasMethod(
							$alias, strtolower(preg_replace(
								$pattern, $alias, $method->getName()
							)) 	
						);
					}
					
					// since we are not looking for a "steadfast" rule,
					// we ignore any exception generated by the fact that
					// method does not exist - the only caveat here is
					// that 
					catch(\Exception $e) { }
				}
			}		
		}
	}
	
	
	/**
	 * Aliases our primary key to 'id'
	 */
	protected function aliasPrimaryKey($alias) {
		$this->aliasProperty($alias, 'id');
	}
	
	/**
	 * Uses reflection/polymorphism to determine caller name, from
	 * which we derive the name of our *DataAccess class; this simply
	 * serves as a convenience to access *DataAccess::instance()
	 * @return Data
	 * @param variable-length $__mixed 
	 * @TODO is this even needed anymore if we are delegating to data class?
	 */
	protected static function data($__mixed = null) {
		$className     = get_called_class();
		$dataClassName = get_called_class() . 'DataAccess';

		$interface = class_exists($dataClassName)
			? $dataClassName::instance()
			: new Data;
		
		// Model::data will allow us to pass arguments to invoke funcitonality
		// directly on dataaccess, or pass in a lambda to access instance - 
		// this may expand as need arises
		if (count($arguments = func_get_args())) {
			
			// in this instance we will be dynamically invoking a method and passing
			// any additional parameters as arguments to invoked method
			// @TODO I don't know if this really needed, over say data()->method
			// but does provide some niceities in terms of clean presentation
			if (is_string($method = $arguments[0])) {
				return call_user_func_array(
						array($interface, $method), array_slice($arguments, 1)
				);
			}
			
			// in the instance of passing a lambda/block, we will pass the interface to
			// the lambda and return to caller the return from lambda
			else if (is_callable($lambda = $arguments[0])) {
				return $lambda($interface);
			}
		}
		
		return $interface;
		
 
	}
	

	/**
	 * Set/create properties on instance; this will
	 * eventually be removed and handled via delegated
	 * class
	 *
	 * @param type $key
	 * @param type $value
	 */
	public function __set($key, $value) {
		// because we rely on certain instance fields being set
		// during class definition (or when class is self) we
		// also set field on public
		// @TODO remove and place into properties when we
		// have figured out succesful toArray implementation
		// on our classes
		$this->$key = $value;
		
		// we also set on properties to maintain backwards 
		// compatibility on anything that is explicitly 
		// setting/getting on properties
		$this->properties[$key] = $value;
		
		return $this;
	}
	
	/**
	 * Get properties on instance that belong to
	 * our properties array; this will eventually
	 * be removed and handled on our delegated class
	 * 
	 * @param type $key
	 *
	 * @return mix type object retrieved from brand
	 *
	 */
	public function __get($name) {
		
		//if ( isset($this->properties[$key] )) {
		//	return $this->properties[$key];
		//}
		
	
		// check if name has been defined in methods - if so, 
		// and method does not take arguments, call method
		if ($this->respondTo($name)) {
			$reflection = new \ReflectionFunction(
					$this->_methods[$name]
			);
			
			
			// we don't want to use __get as replacement or alternative
			// to __call, but simply to call methods, which look like
			// properties, where it makes sense 
			if (count($reflection->getParameters()) == 0) {
				$this->$name = null;
				
				$this->$name = call_user_func(
						$this->_methods[$name]
				);
				
				return $this->$name;
			}
			
		}
		
		// otherwise pass to parent __get handler for higher level
		// processing

		
		return parent::__get($name);
			
		
		
	}	
	
	
	
	
	private function guessPrimaryKey() {
		// attempt to get primary key based on strlower(classname)_id pattern
		$tokens       = explode('\\', get_class());
		$primary_key  = strtolower(array_pop($tokens)) . '_id';
		
		return property_exists($this, $primary_key)
			? $primary_key
			: false;
		
	}
	
	static protected function factory($name) {
		/*
		$refle
		$class = static::namespace() . "\\Model\\$name";
	
		if (class_exists($class)) {
			return new $class;
		}
		*/
		throw new \Exception(
				"Failed to create model $class becfause it does not exist"
		);
	}	
	
	
	
	
	
	protected $validates   = array();
	protected $callbacks   = array();
	private   $initialized = false;
	
}