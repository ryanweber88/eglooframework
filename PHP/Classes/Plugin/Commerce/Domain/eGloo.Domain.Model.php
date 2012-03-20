<?php
namespace eGloo\Domain;

use \eGloo\Utilities\Delegator;
use \eGloo\Utilities\InflectionsSafe;

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
		if ((is_array($__mixed) || $__mixed instanceof \ArrayAccess) && 
				\eGloo\Utilities\Collection::isHash($__mixed)) {
			
			$this->initialize($__mixed);
		}
		
		// pass to parent delegator::__construct our *DataAccess
		// instance or Domain\Data
		parent::__construct(static::data());

		// call our relationships method, which provides callbacks attached
		// to the names of our relationships
		$this->__relationships();
		$this->__callbacks();
		$this->__attributes();
	}

	/** @Polymorphic */ 
	public static function __static() {
		
	
		$class          = get_called_class();
		$formattedClass = strtolower(\eGlooString::toUnderscores(static::classname()));
		$classname      = static::classname();
			
		// assign static delegation 
		Delegator::delegate($class, get_class(static::data()));

		// provide reg exp list to check methods against
		$lookFor = array(
			'/^loadByI(D|d)$/'                    => 'find',
			"/^load{$classname}ByI(D|d)$/"        => 'find',
			'/^load([A-Z][a-z]+?)By([a-zA-Z]+)$/' => 'find_by_$1_$2',
			'/^get([A-Z][a-z]+?)By([a-zA-Z]+)$/'  => 'find_by_$1_$2',
			"/^load{$classname}List$/"            => 'all',
			"/^create{$classname}$/"              => 'create'
		);

		// retrieve list of methods from class
		$reflection = new \ReflectionClass($class);
		$methods    = $reflection->getMethods();
		$found      = array();		
		
		
		// iterate through patterns and check against our static methods
		// drawing up aliases where patterns match
		foreach($methods as $method) {

			//if ($method->getDeclaringClass()->getName() == $class) {
				 
				foreach($lookFor as $pattern => $alias) {				
					if (preg_match($pattern, $method->getName(), $match)) {
						
						// perform regexp replace on pattern, if applicable and
						// replace class name ( again, if applicable ) - these are
						// placed on two lines for readability 
						$alias = strtolower(\eGlooString::toUnderscores(preg_replace(
							$pattern, $alias, $method->getName()
						)));
						
						$alias = str_replace("{$formattedClass}_", null, $alias);
						$from  = $method->getName();
						
						try {
							
							//echo "$alias to {$method->getName()} on $class<br />";
							//echo "found alias $alias for $from on class $class<br />"; 
							static::defineMethod($alias, function($arguments) use ($class, $from) {
							
								// call original method and pass to process which will convert
								// over to proper return type (null, Model, Set)
								$result = call_user_func_array(
									array($class, $from), func_get_args() 
								);	
																				
								return $class::sendStatic('process', $result);
								
							});
							
							
							// get fully qualified class name and call alias method - 
							// 'static' should work here, but it doesn't??
							//static::aliasMethod(strtolower(preg_replace(
							//	$pattern, $alias, $method->getName()
							//
							//)), $match[0]);
							
						}
			
						// since we are not looking for a "steadfast" rule,
						// we ignore any exception generated by the fact that
						// method does not exist - the only caveat here is
						// that
						catch(\Exception $ignore) {
							//exit('bizarre');
							echo $ignore->getMessage() . "<br />"; 
						}
						
						break ;
						
					}
				}

			//}
		}


		// explicitly define find if we haven't found a suitable alias;
		// we can't explicitly define this method because it would interfere
		// with aliases, which for the time being are more correct (specific)
		// @TODO these need to be moved to __methodStatic
		
		if ( !static::respondTo('find') ) {
										
			static::defineMethod('find', function($__mixed, $class) {
				// expand on parameter matching, but for, just match on primary
				// and tablename_id pattern
				$arguments = func_get_args();
				$table     = $class::sendStatic('signature');
				$field     = "{$table}_id";
				$key       = $arguments[0]; 
				
				// we're GAURENTEED to throw an exception here if our by-conventions guess
				// does not pan out; so callers will be explicitly aware
				try {
					
					return new $class($class::statement("
						SELECT * FROM $table WHERE $field = ?
							
					", $key));
					
				}
				
				catch(\Exception $passthrough) {
					throw $passthrough;
				}
				
				
			});
			
		}
		
		// explicitly define all, if not aliased and not explicitly defined
		
		if ( !static::respondTo('all') ) {
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
		}
	}
	
	protected function __methods() {
		parent::__methods();

		// Provides a callback/deferred space in which to group transactions;

		$this->defineMethod('transaction', function($lambda) {

			// @TODO trigger begin transaction
		
			try {
				$result = $lambda();
			} 
			
			catch(\Exception $pass) {
				throw $pass;
			}
			
			return $result;
		
		// @TODO trigger end transaction
	
		});
		
	}
	
	protected static function __methodsStatic() {
		
		$class = get_called_class();
		
		static::defineMethod('transaction', function($lambda) {
			throw new \Exception(
				"Class-level transaction support not implemented"
			);
		});
		
	}

	/**
	 * Responsible for initialize of model attributes
	 */
	protected function initialize(array $arguments) {

		$self = $this;
		
		$this->runCallbacks(__METHOD__, function() use ($self, $arguments) { 
			foreach($arguments as $name => $value) { 
				$self->$name = $value;
			}
		});
				
		// set flag 'initialized' to true
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
		return isset($this->id) && !is_null($this->id);
		//return $this->initialized();
	}

	/**
	 * Overrides Object::aliasProperty to place property
	 * in properties member as well
	 */
	protected function aliasProperty($alias, $from) {
		parent::aliasProperty($alias, $from);
		
		$this->properties[$alias] = &$this->properties[$from];
	}

	/**
	 * Convenience method to specify 1 - 1 relationships; note that you
	 * must still follow plurality conventions
	 */
	protected function hasOne($name, $lambda) {
		if (InflectionsSafe::isSingular($name)) {
			return $this->defineRelationship($name, $lambda, true);
		}
		
		throw new \Exception(
			"Failed to create relationship '$name' because it does not follow singularity convention"
		);
	}
	
	protected function hasMany($name, $lambda) {
		if (InflectionsSafe::isPlural($name)) {
			return $this->defineRelationship($name, $lambda, false);
		}
		
		throw new \Exception(
			"Failed to create relationship '$name' because it does not follow plurality convention"
		);
	}
	
	/**
	 * This is an alias to defineMethod - currently it is here for 
	 * idiomatic reasons only
	 * @type experimental the moment - will be used to indicate relationship
	 * type if plurality rules are ineffective
	 */
	protected function defineRelationship($name, $lambda, $singular = null) {
		// get model name, using inflection class
		// @TODO this will need to be changed as it doesn't
		// belong here
		//echo static::namespaceName(); exit;
		$relationshipName = $name;
		$name             = ucfirst(\eGloo\Utilities\InflectionsSafe::instance()
						          ->singularize($name));
		//$ns               = $this->namespace();
		
		// @TODO this has to be determined dynamically, but for the time being
		// will ensure that proper model is instantiated if attempting an alias
		// call on \Model will return \Common\Domain\Model\*
		$ns               = '\\Common\\Domain\\Model';
		$self             = $this;
		
		// determine relationship type based on either $singular parameter, 
		// which takes prescedence, or looks at plurality using inflections
		$singular = $singular === true
			? $singular
			: InflectionsSafe::isSingular($relationshipName);
			
				
		if (class_exists($model = "$ns\\{$this->className()}\\$name") || class_exists($model = "$ns\\$name")) {
			return $this->defineMethod($relationshipName, function() use ($model, $self, $relationshipName, $lambda, $singular) {
				
				
				// check if the model exists in the database to ensure we are
				// not running queries against an empty/shallow model - because
				// there is nothing to match against here
				if ($self->initialized()) {
					$result = $lambda($model);

					// check if singular result or hash (which would indicate
					// a single record being returned); if an array is returned
					// then it should contain 1+ elements as this is-a required
					// contract of the defineRelationship method
					if (is_array($result)) {
						
						if (\eGloo\Utilities\Collection::isHash($result)) {
							$result = new $model($result);
							
							// @TODO this is a shortcut to we establish a better rule
							// in terms of convetion around singular vs set
							
							if (!$singular) {
								$result = new Model\Set(array($result));
							}	
							
						}
						
						// otherwise we have a set return; check if elements are
						// model instances, in which case we can simply wrap
						// reset in set instance
						else if ($result[0] instanceof Model) {

							$result = new Model\Set($result);
						
						}
						
						// otherwise, we manually build set with model instances
						else {
							
							foreach($result as $record) {
								$temporary[] = new $model($record);	
							}
							
							// replace result with temporary
							$result = new Model\Set($temporary);
						}
						
						return $result;
					}
					
				}

				
				// if the model doesn't exist (the case where we have a "shallow"
				// model) or our return result from lambda is false (which indicates 
				// an empty result or a failure to find data), 
				// we return a shallow copy of our relationship(s), either as an instance
				// of model or emptyset, based on plurality rules

				return $singular
					
					// return an empty instance of model
					? new $model
					
					
					: new Model\Set($model);
				
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
			//$hasAttribute = "has_$attribute";
			
			if (!isset($this->$attribute)) {
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
			
			if (!isset($this->$attribute)) {
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
	protected function __relationships() {
		
		$class     = $this->classname();
		$namespace = $this->namespace();
		
		// check for status relationship and draw if exists, we could
		// explicitly do this in a try/catch, but would present a serious
		// issue were someone to write a generic Common.Domain.Model.Status
		// class; so here, our convention is "if there is a Status class
		// in Comon.Domain.Model.$ClassName namespace, then define status
		// relationship"
		if (class_exists($model = "$namespace\\$class\\Status")) {
			$self = $this;
			
			$this->hasOne('Status', function() use ($self, $model) {
				return $model::find($self->id);
			});
						
			// finally alias $this->status to $this->Status->class_name_status
			// for convenient lookup; please remember that this can be overwritten
			// at anytime during initialization, so be cautious
			$field = strtolower(\eGlooString::toUnderscores($class)) . "_status";
			
			if ($this->Status->exists() && isset($this->Status->$field)) {
				$this->status__ = $this->Status->$field;
			} 
		}
		
	}

	protected function __callbacks() { }
	

	
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
	 * Attempts to find a model's "signature" which is a pattern based on namespace + class;
	 * basically everything appearing after "model" in namespace will be underscored 
	 */
	protected static function signature() {
		// get signature pattern - so Common\Domain\ModelProductOption\Status, will be
		// converted to product_option_status; this could have been accomplished on 
		// one line, but we sacrifice readability
		$tokens    = explode('\\', preg_replace('/^.+Model[\\\]?/', null, get_called_class()));
		$signature = strtolower(\eGlooString::toUnderscores(implode('_', $tokens)));
		
		return $signature;
	}
	
	/**
	 * Provides an array representation of modelphp 
	 */
	public function __toArray() {
		
		// wrap our current domain\model instance in arrayaccess 
		// in most instances, this will be to our smarty instance
		// which should only accept type scalar or array
		return new Utility\ArrayAccess(
			$this	
		);
		
	}	
	
	/**
	 * Alias to __toArray; this is meant to be called explicitly
	 * wherein __toArray satisfies the conditions of our ToArrayInterface;
	 * also, there are conditions where we simply cannot accept an
	 * object, even one that caters to array notation, so thus
	 * 
	 */
	public function toArray($wrapped = false) {
		if ($wrapped) {
			$returns = $this->__toArray();	
		}
		
		else {
			$values = array();
			
			foreach(array_keys($this->properties) as $field) {
				$values[$field] = $this->$field;
			}
			
			$returns = $values;
		}
		
		return $returns;
	}

	
	protected function __attributes() {
		// call our parent method to ensure any property work is done
		// up hierarchy chain
		//parent::__properties();
		
		// from ClassNameYada derive pattern class_class1_class2
		$class = strtolower( \eGlooString::toUnderscores(static::classname()) );
		
		// @TODO right now we are auto aliasing primary key, but this will cause corrupted data
		// with model; in the future need to determine existence of primary key and cache 
		// beforehand

		
		$this->aliasPrimaryKey("{$class}_id");
					
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
				

				try { 
					$this->aliasProperty(
						strtolower($match[1]), $name	
					);
				}

				catch(\Exception $ignore) {
					//var_export($this); exit;
				}
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
				
		else if ( \eGloo\Utilities\Collection::isHash($arguments = $arguments[0]) ) {
			
			$model     = new static($arguments);
			$model->id = null;
						
			
			// saves model to underlying data layer and sets
			// initialized to true
			$model->save();
			$model->initialized = true;
			
			// return model to caller
			return $model;
		}
		
		// otherwise we have passed an invalid argument to create and
		// we throw an exception to that fact
		else {
			$class = get_called_class();
			
			throw new \Exception(
				"Failed to create instance of '$model' because argument(s) are invalid " . print_r(
					$__mixed
				)
			);
		}
	}

	/*
	public static function find($__mixed) {
		if (isset($arguments[0]) && ($self = $arguments[0]) instanceof Model) {
		 
			
		} else {
			
			// flatten arguments - this will always return an array
			$arguments = \eGloo\Utilities\Collection::flatten($__mixed);
			$models    = array
			// iterate through arguments, 
			foreach($arguments as $key) {
				
			}
				
		}
		
	}
	 * 
	 */
	
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
			"Cannot save model because the attributes did not pass validation : " . print_r(
				$this->whatsInvalid(), true
		));
		
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
	
		
	protected function runCallbacks($event, $lambda = null) {
		
		// we use inject idea to pass values between callbacks,
		// if needed; if any callback returns false, then
		// we short-circuit execution
		$inject = true;
		
		// run our before/around callbacks
		foreach(array('before', 'around') as $point) {
			if (isset($this->callbacks[$event][$point])) {
				foreach($this->callbacks[$event][$point] as $callback) {
					if (($inject = $callback($inject)) === false) {
						return ;
					}
				}
			}		
		}
		
		// if we have wrapped functionality into our lambda
		// parameter; the intention is to run in between our before
		// and after callback events
		if (is_callable($lambda)) {
			$lambda();
		}
		
		// run our after callbacks in reverse order
		if (isset($this->callbacks[$event]['after'])) { 
			foreach(array_reverse($this->callbacks[$event]['after']) as $callback) {
				if (($inject = $callback($inject)) === false) {
					return ;
				}
			}
		}
		
		// @TODO retrieving a value from a callback seems 
		// like it is not the best idea, make but
		return $inject;
	
	}

	/**
	 * "Shapes" a result set into either a model or
	 * set of models; I don't know if I like the name of this
	 * method, so it is subject to change
	 * @return Model | Model\Set
	 */
	protected static function shape($result) {
		
		if (is_array($result) && count($result)) {	
			if (\eGloo\Utilities\Collection::isHash($result)) {
				$result = new static($result);					
			}
					
			// otherwise, we manually build set with model instances
			else {
				
				// check if result is composed of a list of Model
				// instances; then we set temporary to result list
				if ($result[0] instanceof Model) {
					$temporary = $result;
				}
				
				// otherwise, result list is set of
				// of associative arrays; we wrap each index
				// in Model instance
				else { 
					foreach($result as $record) {
						$temporary[] = new static($record);	
					}
				}
				
				// replace result with temporary
				$result = new Model\Set($temporary);
			}				
		}
		
		return $result;
	}
	
	/**
	 * Alias to shape, which sucks as a method name
	 */
	protected static function process($result) {
		return static::shape($result);
	}
	
	

	
	/**
	 * Aliases our primary key to 'id'
	 */
	protected function aliasPrimaryKey($from) {
		// for now we ignore our exception as primary
		// has already been aliased	
		try {
			$this->aliasProperty( 'id', $from );
		}
		
		catch(\Exception $ignore) {
			//var_export($ignore); exit;
		}
	}
	
	/**
	 * This is an alias of ObjectSafe#aliasProperty - since dynamically bound
	 * properties on a model are termed "attributes", "aliasAttribute" is
	 * moreso fitting
	 */
	protected function aliasAttribute($alias, $attribute) {
		$this->aliasProperty($alias, $attribute);
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
	public function __call($name, $arguments) {
		

		try { 
			return parent::__call($name, $arguments);
		}
		catch (\Exception $deferred) { }
		
		// if unable to find matching meta call within
		// __call chain, determine if 
		
		throw $deferred; 
	}
**/
	
	public static function __callstatic($name, $arguments) {
		
		try {
			return parent::__callstatic($name, $arguments);
		}
		catch(\Exception $deferred) { }
		
		// if unable to find matching meta call within
		// __call chain, determine if a dynamic finder
		
		
		if (preg_match('/^find_by_(.+)$/', $name, $match)) {
			$class  = get_called_class();
			$fields = explode('_and_', $match[1]);
						
			// now lets define out dynamic finder function
			$block = static::defineMethod($name, function($__mixed) use ($class, $fields) {
				
				// get table name using convetion of ModelName to model_name; this will
				// not fit in all cases and exception will be thrown from query if this
				// is the case
				$table = strtolower( \eGlooString::toUnderscores($class::className()) );
				
				// build string representation of query coinditionals
				$conditions = array();
				
				foreach($fields as $field) {
					$conditions[] = "$field = ?";
				}
				
				$conditions = implode(' and ', $conditions); 
				
				
				
				return $class::sendStatic('process', $class::statement("
					SELECT
						*
						
					FROM
						$table
						
					WHERE
						$conditions
						
				", func_get_args()));
				
				
			});
			
			// now call our little pretty dynamic finder method
			return call_user_func_array(
		  	$block, $arguments 
			);
		}
		
				
		throw $deferred;
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
		
		//echo "attempting set on $key\n";
		
		// we first attempt to resolve set within parent, which
		// is responsible for evaluating meta patterns. If they
		// do not exist, and property does not exist, then an 
		// exception will be thrown, which in this case is ignored
		// because we DO want dynamic properties/attributes added
		// to our receiver
		$failed = false;
		
		try {
			parent::__set($key, $value);
		}
		
		catch(\Exception $ignore)  { 
			$failed = true;
		}
		
		// if parent has thrown an exception, then meta tests have
		// failed and we intentionally wish to defined a dynamic 
		// property
		
		if ($failed) { 
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
		}
		
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
		
		//echo "attempting get on $name\n";
		//if ( isset($this->properties[$key] )) {
		//	return $this->properties[$key];
		//}
		
		$class = strtolower( \eGlooString::toUnderscores(static::classname()) );
	
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
		
		if ((preg_match('/^(.+?)(_?)Count$/', $name, $match))) {
			
			// convert to underscore to appease master
			if (\eGlooString::isCamelCase($match[0])) {
				$name = \eGlooString::toUnderscore();
			}
			
						
			if ($this->respondTo($match[1]) && \method_exists($this, $method = "__$name")) {
				if ($this->exists()) {
					return ($this->$name = $this->$method());
				}
				
				else {
					$class = get_class($this);
					
					throw new \Exception(
						"Failed to get count of association {$match[1]} because class '$class' does not exist"
					); 
				}
				
			}
		}

		// look for relationship using xxx_id pattern
		// and see if that relationship has been defined
		if (preg_match('/^(.+)_id/', $name, $match)) {
			$relationship = ucfirst($match[1]);
			
			if (isset($this->$relationship) && $this->$relationship instanceof Model) {
				// it is assumed that id field is set on model, whether it be null or not, it
				// should always alias to a primary key (or null if no primary key)	
				// @TODO fix relationship attribute alias
				$this->$name = null;
				$this->$name = &$this->$relationship->id;
				
				return $this->$name;
			};
		}
		
		// check for _change|changes pattern
		if (preg_match('/^(.+)_(change(s|d)?)$/', $name)) {
			
		}
		
		if (preg_match('/^(.+)_was/', )) {
			
		}
				
		if (\property_exists($this, $field = "{$class}_$name")) {
			$this->aliasProperty($name, $field);
			return $this->$name;
		}
		
		// check if primary key - this is temporary until better solution
		//$class = strtolower( \eGlooString::toUnderscores(static::classname()) );
		
		//if ($name == 'id' && \property_exists($this, $primaryKey = "{$class}_id")) {
		//	$this->aliasPrimaryKey($primaryKey);
		//	return $this->id;
		//}
				
		// if this is a new instance, and aliases have not been defined (since
		// we have not initialized; check to see if name is a match to class_name_property)
		// this has the danger of presenting very hard to track bugs, so we need to think
		// about legitimacy
		/*
		$class = strtolower( \eGlooString::toUnderscores(static::classname()) );
		echo "$class + $name<br />";
		
		if (property_exists($this, $field = "{$class}_$name")) {
			// @TODO having issues with alias property - doing it old fashioned way for now
			//$this->aliasProperty($name, "{$class}_$name");
			$this->aliasProperty($name, $field);
		}
		*/
		// otherwise pass to parent __get handler for higher level
		// processing

		
		return parent::__get($name);
			
		
		
	}	
	
	public function __toString() {
		if (($field = static::constGet('NATURAL_KEY'))) {
			try { 
				return $this->$field;
			}
			
			catch(\Exception $ignore) { }
		}
		
		return parent::__toString();
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
	protected $changed     = array();
}

