<?php
namespace eGloo\Domain;
use       \eGloo\Utilities\Delegator;
use       \eGloo\Utilities\InflectionsSafe;
use       \eGloo\Utilities\Collection;
use       \eGloo\Domain\Model\Callback;
use       \eGloo\Domain\Cache;
use       \eGloo\Performance\Caching;
use       \eGloo\Domain\Model;
use       \eGloo\Utilities;
use       \eGloo\Primitives;

/**
 * Superclass for all domain models; provides generic functionality
 * @author Christian Calloway callowaylc@gmail.com
 */
abstract class Model extends Delegator 
	implements \eGloo\Utilities\ToArrayInterface, \eGloo\TemplateProcessing\ToTemplateInterface, 
	           \ArrayAccess, \Serializable, Caching\CacheKeyInterface, Caching\CacheableInterface, 
	           ModelInterface {
	           	
	use Utilities\DelayedJobTrait;

	// this acts as a store for adding runtime instance properties
	// @TODO this will be replaced, as storing values will be delegated
	// in the future
	protected $properties = array();

	/**
	 * @param variable-length $__mixed
	 */
	function __construct($__mixed = null) {

		// pass to parent delegator::__construct our *DataAccess
		// instance or Domain\Data
		parent::__construct(static::data());

		
		// calls our index method, in which we are responsible for defining
		// attributes which will servce as cache indicies
		//$this->__indexes();
		
					
		// make sence of parameter - this will change as EPA
		// is folded into our domain model
		if ((is_array($__mixed) || $__mixed instanceof \ArrayAccess) && 
				\eGloo\Utilities\Collection::isHash($__mixed)) {
			
			$this->initialize($__mixed);
					
		}
		

		// assign left-over columns to model
		// @TODO delegate this to overrideable method, or place into
		// 'after' initialize
		// @TODO I don't remember why user entity was removed
		// from column assignment
		if (!in_array($signature = static::entity(), array('user')) && 
		    is_array($columns = Data::columns($signature))) {
		    	
			foreach($columns as $attribute) {
				if (!\property_exists($this, $attribute)) {
					$this->$attribute = null;
				}
			}
		}		
		
		// @TODO temporary until all instances of relationships is removed		
		$this->associations = &$this->relationships;
						
					
	}

	/** @Polymorphic */ 
	public static function __static() {
		
		// create reflection instance as we need to determine
		// if current context is within abstract class, which
		// wouldnt/shouldnt have an entity counterpart
		$reflection = new \ReflectionClass(get_called_class());

		if (!$reflection->isAbstract()) { 
			// assign static delegation 
			Delegator::delegate(
				$class = \get_called_class(), get_class(static::data())
			);

			// call static model construct methods

			// call our validates method, which provides validation definitions
			// for Model attributes
			static::__validates();

			// call our relationships method, which provides callbacks attached
			// to the names of our relationships
			static::__relationships();

			// call __callbacks method, which defines behaviors during life cycle
			// of instance
			static::__callbacks();
			
			// finally call attributes, which sets up convience attributes for
			// instance		
			static::__attributes();
	}
		


		// @TODO below shouldnt be needed anymore as we are following
		// heirarchy strain to Domain::Model
		// explicitly define find if we haven't found a suitable alias;
		// we can't explicitly define this method because it would interfere
		// with aliases, which for the time being are more correct (specific)
		// @TODO these need to be moved to __methodStatic
		
		/*
		if ( !static::respondTo('find') ) {
			
			static::defineMethod('find', function($__mixed, $class) {
				
				
				// expand on parameter matching, but for, just match on primary
				// and tablename_id pattern
				$arguments = Collection::flatten(func_get_args());
				$table     = $class::sendStatic('entity');
				$field     = Data::primaryKeys($table)[0];
				$key       = $arguments[0]; 
				$set       = array();
				$manager   = Model\Manager::instance();
								
				
				// we're GAURENTEED to throw an exception here if our by-conventions guess
				// does not pan out; so callers will be explicitly aware
				try {
					
					
					foreach($arguments as $key) {
						
						if (is_numeric($key)) {
							
							// check if model has already been persisted
							// @TODO this needs to be converted to single statement ASAP  
							$result = $manager->find($class, $key, function($class, $key) use ($field) {
								
								// check model cache to determine if exists in cache already; we use our
								// static instance so we DON'T have to reinstantiate everytime we call find
								// as it is an expensive operation and the model in this instance only serves
								// as template of sorts (see todo)
								// @TODO since model is really only a template, this should be replaced with
								// Virtual Proxy concept
								$cache  = new Cache\Model;
								$model  = $class::instance();
								$model->id = $key;
								
									
								// @TODO model caching is breaking references on callbacks and following
								// trace is nearly impossible - for the time being, we are removing this
								// functionality								
								//$result = $cache->find($model, function() use ($class, $field, $key) {
									$result = $class::sendStatic('process', $class::where(array(
										$field => $key
									)));
									
																		
									// we know that if result is not absolute false, it will be returned
									// as a set from our process method									
									if ($result) {
										$result = $result[0];
									}
									
									//return $result;
								//});
																
					
																							
								return $result;
							});
							
							
							if ($result !== false) {
								$set[] = $result;
							}
							
						}

					}
					
					// @TODO place our afterFind in background task
					if (count($set)) {
						foreach($set as $model) {
							$model->send('runCallbacks', 'find', 'after');
						}
	
						
						// if a set consisting of a single element; return element, as the likely
						// intended purpose was to retrieve a single record; otherwise return set
						// instance
						return count($set) == 1
							? $set[0]
							: new Model\Set($set);
					}
					
					return false;
				}	
					
				catch(\Exception $passthrough) {
					throw $passthrough;
				}				
			});
			
		}
		*/
		
		
		if ( !static::respondTo('all') ) {
			static::defineMethod('all', function() {
					
				// expand on parameter matching, but for, just match on primary
				// and tablename_id pattern
				$arguments = func_get_args();
				$table     = static::signature();
				$field     = "{$table}_id";
				$key       = $arguments[0]; 
				
				// we're GAURENTEED to throw an exception here if our by-conventions guess
				// does not pan out; so callers will be explicitly aware
				try {
					
					$result = static::selects('*')
					                ->build();
					
					// our 'all' method should return an empty set if failed to return
					// result
					return $result !== false ?: new Model\Set(\get_called_class());
					
				}
				
				catch(\Exception $passthrough) {
					throw $passthrough;
				}
				
				
			});
		}
				
		// delegate our query building methods to Relation
		// @TODO we should delegate to scoped which should handle
		// the rest
		//$reflection = new \ReflectionClass(static::classNameFull());
			
		// @TODO user is causing all kinds of fucking problem when not
		// receiving an initializing hash; so i am taking the bitch out
		// for the moment
		if (!$reflection->isAbstract() ) {
			
			
			static::delegates(array(
				'methods' => array(
					'selects', 
					'search', 
					'like', 
					'where', 
					'from', 
					'join', 
					'limit', 
					'offset', 
					'order', 
					'group'
				),
				'to'      => new Model\Relation(static::classnamefull())
			));
		}
	}
	
	protected function __methods() {
		parent::__methods();
		$self = $this;
		
		// Provides a callback/deferred space in which to group transactions;

		$this->defineMethod('transaction', function($lambda) use ($self) {

			$self->send('runCallbacks', 'transaction', 'before');
			
			$self::transaction($lambda);
			
			$self->send('runCallbacks', 'transaction', 'after');
		
		});
		
	}
	
	
	/**
	 * A "method space" to provide cache/index definitions
	 */
	protected function __indexes() {
		$this->index('id');
	}

	/**
	 * Responsible for initialize of model attributes
	 */
	protected function initialize(array $arguments) {
		
		$self = $this;
		
		$this->runCallbacks(__FUNCTION__, 'before');
			
			 
		foreach($arguments as $name => $value) {

			// first check if a method exists with the same name
			// or if value is a lambda, in which case we define
			// as "callable" attribute
			$attributeAccessor = \method_exists($self, "get_$name") ||
			                     \method_exists($self, "set_$name");
			                   //  \method_exists($self, $name) // this feature needs to be fleshed out more
			
			if ($attributeAccessor || is_callable($value)) {	
				$this->attr_accessor($name);
			}
		
			// now set value of attribute; if it has been defined as a callable attribute
			// then value will be routed through closure that $self->$name defines
			$this->$name = $value;
				
		}
				
		// set flag 'initialized' to true
		$this->initialized = true;

		$this->runCallbacks(__FUNCTION__, 'after');
				
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
		if (static::hasCompositeKeys()) {
			foreach(static::primaryKey() as $key) {
				if (!isset($this->$key) || is_null($this->$key)) {
					return false;
				}
			}
			
			return true;
		}
		
		else {
			return  isset($this->id)      && 
						 (!empty($this->id)     ||
						  !is_null($this->id));
		}					 
	}
	
	/**
	 * Specifies index 
	 */
	public function index($__mixed = null) {
		$arguments = Collection::flatten(func_get_args());
		
		
	}
	
	/**
	 * Retrieves the name of underlying entity; entity is used as lcd term 
	 * to describe table, document, etc.
	 * @return string
	 * @deprecated
	 */
	protected static function entityName() {
		return static::signature(static::classnamefull());
	}
	
	/**
	 * Alias to entityName - I think entityName is bit redundant, and I like this
	 * signature better
	 * @return string
	 */
	protected static function entity() {
		return static::signature(static::classnamefull());
	}


	/**
	 * Overrides Object::aliasProperty to place property
	 * in properties member as well
	 */
	protected function aliasProperty($alias, $from) {
		parent::aliasProperty($alias, $from);
		
		//$this->properties[$alias] = &$this->properties[$from];
	}

	/**
	 * Convenience method to specify 1 - 1 relationships; note that you
	 * must still follow plurality conventions
	 */
	protected static function hasOne($name, $lambda = null) {
	
	
 		// if lambda has not been defined, we provide a by-convention
		// handler which will assume that foreign key is the same as
		// primary key name
		if (is_null($lambda)) {
						
			$lambda = function($model) {
				$key    = $this->primaryKeyName();
				$method = "find_one_by_{$key}";	
				
				return $model::$method($this->id);
			};
		}
		
			
		$name = preg_replace(
			'/\s+and\s+is\s+dependent/i', null, $name
		);
			
		
		// look for join table definition
		// @TODO replace search for "through" with method
		$join = null;
		
		if (preg_match($pattern = '/\s+through\s+?([a-z]+)$/i', $name, $match)) {
			
			// reomve from pattern	name
			$name = preg_replace($pattern, null, $name);
			
			// retrieve join from match
			$join = $match[1];	
		}
		
		$singular = InflectionsSafe::isSingular(
			$relation = preg_replace('/\s+as\s+([A-Z].*)$/', null, $name)
		);

		if ($singular) {
			return static::defineRelationship($name, $lambda, true, $join);
		}
		
		throw new \Exception(
			"Failed to create relationship '$relation' because it does not follow singularity convention"
		);
	}
	
	/**
	 * Either provides an alias to hasOne (but more idiomatic), or answers the question
	 * of whether model belongsTo another
	 */
	protected function belongsTo($mixed, $lambda = null) {
		
		$arguments  = Collection::flatten( func_get_args() );
		
		
		// check if the last argument is a lambda
		if (is_callable($arguments[count($arguments) - 1])) {
			$lambda = array_pop($arguments);
		}
		
		// otherwise provide a default lambda, which makes assumptions
		// based on convention - that this model will contain a foreign
		// key with the name pattern table_name + id; if this is not the case
		// it is up to the developer to determine otherwise ( ie, provide your
		// own lambda)
		else {
			$lambda = function($model) {
		  	// belongs to convention dictates that a foreign key with name
		  	// signature_id exists on calling model	
		  	$fk = $model->send('primaryKeyName');
		  	
				
		  	if (property_exists($model, $fk)) {
		  		// get primary key name, which SHOULD exist as 
		  		// as a fk on self; if it does not, throw an exception
		  		// to fact
		  		$fk = $model->send('primaryKeyName');	
		  		
					// check 
					if (isset($self->$fk)) {
						// find, using belonged_to primary key
				  	$result = $model::find($this->$fk);
					}
					
					else {
						throw new \Exception(
							"Failed to create 'belongsTo' relationship with '{$model->class->qualified_name}' " .
							"because '{$this->ident()}' does not have foreign key attribute '$fk'"
						);	
					}
					
					// finally aliasAttribute between foreign/primary key
					//$self->send('aliasAttribute', $field, function & () use ($result) {
					//	return $result->id;
					//});
					
					
					return $result;
				}
				
				else {
					throw new \Exception(
						"Failed to create 'belongsTo' relationship with '{$model->class->qualified_name}' " .
						"from '{$this->class->qualified_name}' because model '{$model->class->name}' does " . 
						"not have a primary key"
					);
				}
		  };			
		}
		
		
		// finally assign relationships; if there was a lambda contained within arguments
		// it has been popped off the back
		$relationships = $arguments;
		
		
		foreach($relationships as $name) {
			
			// @TODO check whether this is needed anymore
			// otherwise, we follow convention that foreign reference is within
			// table, so we set property
			// @TODO we need to grab an actual signature as opposed to making a 
			// guess in terms 
			/*
			$foreignKey = strtolower(\eGlooString::toUnderscores(
				$name
			));
			
			$foreignKey .= '_id';
		
			// set value to null, we'll check against whether property exists
			// when relationship is evaluated
			$this->$foreignKey = null;	
			*/			

			// finally, we create our 1 - 1 relationship
			static::hasOne($name, $lambda);	
		}		

	}
	
	protected static function hasMany($name, $lambda = null) {
		
		
		// if lambda has not been defined, we provide a by-convention
		// handler which will assume that foreign key is the same as
		// primary key name
		if (is_null($lambda)) {						
			$lambda = function($model)  {
				$key    = $this->primaryKeyName();
				$method = "find_by_{$key}";	
				
				return $model::$method($this->id);
			};
		}
		
		// remove 'dependency' marker
		// @TODO implement depedencies
		$name = preg_replace(
			'/\s+and\s+is\s+dependent/i', null, $name
		);
				
		// look for join table definition
		$join = null;
		
		if (preg_match($pattern = '/\s+through\s+?([a-z]+)$/i', $name, $match)) {
			
			// reomve from pattern	name
			$name = preg_replace($pattern, null, $name);
			
			// retrieve join from match
			$join = $match[1];	
		}
		
		
		if (InflectionsSafe::isPlural($relation = preg_replace('/\s+as\s+([A-Z].*)$/', null, $name))) {
			return static::defineRelationship($name, $lambda, false, $join);
		}
		
		throw new \Exception(
			"Failed to create relationship '$relation' because it does not follow plurality convention"
		);
	}
	
	/** @TODO Remove once hasRelationship references are removed */
	public static function hasRelationship($name) {
		return isset(
			static::domain('sassociations')[$name]
		);
	}

	/** Determines if association exists */
	public static function hasAssociation($name) {
		return isset(
			static::domain('sassociations')[$name]
		);
	}	
	

	/**
	 * Returns reference to current association hash;
	 * does not error check against whether association 
	 * yet to be defined; this method is an internal 
	 * convenience
	 */
	protected static function &association($name, $value = null) {
		// if value is null, we are returning association value
		if (is_null($value)) {
			return static::domain('sassociations')[$name];

		// otherwise we are setting association value
		} else {
			$association = &static::association($name);
			$association = $value; 
		}
	}

	/**
	 * This is an alias to defineMethod - currently it is here for 
	 * idiomatic reasons only
	 * @type experimental the moment - will be used to indicate relationship
	 * type if plurality rules are ineffective
	 */
	protected static function defineRelationship($name, $lambda, $singular = null, $join = null) {
		// get model name, using inflection class
		// @TODO this will need to be changed as it doesn't
		// belong here

		// check if an 'as Alias' has been specified
		$aliases = [ ];
		
		if (preg_match($pattern = '/\s+as\s+([A-Z].*)$/', $name, $match)) {
			$name = trim(preg_replace(
				$pattern, null, $name
			));
						
			foreach(explode(',', $match[1]) as $alias) {
				$aliases[] = trim($alias);
			}
			
		}
		
		$relationshipName = $name;
		$name             = ucfirst(
			InflectionsSafe::instance()
			               ->singularize($name)
		);
		//$ns               = $this->namespace();

		// @TODO this has to be determined dynamically, but for the time being
		// will ensure that proper model is instantiated if attempting an alias
		// call on \Model will return \Common\Domain\Model\*
		//$ns   = '\\Common\\Domain\\Model';
		preg_match('/^.+?Model/', static::klass()->namespace, $match);
		$ns   = $match[0];
		
		// determine relationship type based on either $singular parameter, 
		// which takes prescedence, or looks at plurality using inflections
		$singular = $singular === true
			? : InflectionsSafe::isSingular($relationshipName);
		
			
		// if class does not exist, then replace with generic	handler
		$classname = static::classnamefull();
			
		if (!class_exists($model = "$ns\\{$classname}\\$name") && 
		    !class_exists($model = "$ns\\$name"))	{
		  
			// use callers namespace; this makes the assumption that generic
			// exists in current namespace - this may have to be changed
			// later  	
			$model = "$ns\\Generic";
			
			// make a determination if name points to a "tangible" entity, and
			// if the cace, we create an instance
			// @TODO remove this when Model.Generic static issue is corrected
			if ($model::tangible($name)) {
				$model::factory($name);
			}
			
			else {
				throw new \Exception(
					"Failed to create generic relation '$name' using the Generic model, because " .
					"it cannot be determined on underlying data layer"
				);				
			}
		}

		
		// if relationship name aready exists, attempt to use a provided alias; if no alias is 
		// provided, then throw exception as otherwise we will be overwriting an already
		// existing relationship
		// @TODO replace with Model.Relation
		// @TODO we shouldn't have to check on callable status on relationship; there is a 
		// currently a bug somewhere that is setting a relationship name without attaching
		// lambda?
		if (static::hasAssociation($relationshipName) && 
		    is_callable(static::association($relationshipName))) {
		    	
		  exit('check why we have lambda defined in sassociations');
			if (count($aliases)) {
				$relationshipName = array_shift($aliases);
			}
			
			else {
				//var_export($this->relationships); exit;
				throw new \Exception(
					"Failed to define relationship '$relationshipName' on model '$classname' ". 
					"because it already exists. You must provide an alias if you wish to "    .
					"define additional relationship of the same type"
				);
			}
		}
		
		static::association($relationshipName, [
			'model'  => $model,

			// this lambda is considered to be in the context/scope
			// of an instance, though it is defined within a class scope
			'lambda' => function() use 
				($model, $relationshipName, $lambda, $singular, $join, $name) {
				
				//$self->send('runCallbacks', 'relationship', 'before');
				$this->runCallbacks('relationship', 'before');
								 
				$association = new Model\Association(array(
					'owner'       => $self,
					'target'      => $model,
					'through'     => $join,
					'cardinality' => $singular 
						? Model\Association::SINGULAR
						: Model\Association::MANY 
				));	
							

				// get reference to relationships and make reference that relationship is
				// beging created
				$result = null;

				// check if the model exists in the database to ensure we are
				// not running queries against an empty/shallow model - because
				// there is nothing to match against here
				if ($this->exists()) {
						
					// check if model is generic - in which case we have to set
					// pseudonym before feeding to our lambda
					// @TODO this is cumbersome and inefficient - lets figure out
					// more elegant solution or at least clear up exactly what
					// is happening here
					if (($model = $model::instance()) instanceof Model\Generic) {
						$model = $model::instantiate($name);
					}
					
					
						
					// create relation instance - for time being this is used for caching
					// $relation = new Model\Relation($model);
					
					// check cache to determine if model exists, either as a singular
					// or as a collection/set
					//$cache = new Cache\Relation($self);
					
					//$result = $cache->find($relation, function() use ($model, $lambda) {
					// first bind lambda to this context
					$lambda = $lambda->bindTo($this, $this);

					try {
						$result = $lambda($model);
					}
					
					catch(\Exception $pass) {
						throw $pass;
					}
					//});


				
					
					// if returned result is an instance of relationship, which is a query build tool
					// then evaluate and pass to statement
					// @TODO the relation should be responsible for the build of model instance, not just
					// as a query build tool - this will have to be addressed, but converting right now
					// will present too much variability
					if ($result instanceof Model\Relation) {
						try { 
							$result = $result->build();
						}
						
						catch(\Exception $passthrough) {
							throw $passthrough;
						}

					}
					

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
					}
				}

				// if the model doesn't exist (the case where we have a "shallow"
				// model) or our return result from lambda is false (which indicates 
				// an empty result or a failure to find data), 
				// we return a shallow copy of our relationship(s), either as an instance
				// of model or emptyset, based on plurality rules
				
				if (!$result) {

					$result = $singular
						
						// return an empty instance of model
						? new $model
						
						
						: new Model\Set($model);

				}
				
				// because our find_by methods returns sets automatically, we need to
				// check $singular argument to see if this is truely intended
				else if ($singular && $result instanceof Model\Set) {
					$result = $result[0];
				}
				
							

				// check finally if result is set; if the case, pass in our association
				// meta data
				// @TODO is there a reason to set results of type Model with association
				// as well
				//$result->association = $association;
				if ($result instanceof Model) {

					 
					// the the result belongs to this model - meaning
					// that result has a foreign key with the same signature
					// as this model, then aliasAttribute on result to top this
					// model primary key 
					$foreignKey = $this->primaryKeyName();
					
					if(\property_exists($result, $foreignKey)) {
						
						// unset the property, otherwise our aliasAttribute call will 
						// never register
						//unset($result->$foreignKey);
						// @TODO why is foreign key being set and then being aliased?
						$result->$foreignKey = $this->id;

						// now alias foreign key on result to primary key of this model
						$result->send('aliasAttribute', $foreignKey, function & () {
							return $this->id;
						});
						
						// @TODO this is temporary - our alias does not fucking exist because its
						// being deferred, thus our isset calls will return false
						$result->$foreignKey;
					}
					
					if ($association->usesJunction()) {
						
						/*
						$owner  = $association->owner;
						$target = $association->target;
						$join   = $association->through; 
							
						
						$joinModel = class_exists($class = "{$owner->class->namespace}\\$join")
							? $class 
							: Model\Generic::factory($join);
							
						// @TODO this should be accomplished in a single query
						$joinModel::find_one_by
						*/
					}
						

				}
				
				else if ($result instanceof Model\Set) {
					$result->association = $association;
				}

				
				$this->runCallbacks('relationship', 'after');

				// otherwise we return result as is, which can be any value outside
				// of null
				return $result;
				
			}
		]);
		
		foreach($aliases as $alias) {			
			static::aliasRelationship($alias, $relationshipName);
		}
		
		

		//throw new \Exception(
		//	"Failed to define relationship \"$name\" because model \"$model\" does not exist"	
		//);
		
	}

	protected static function aliasRelationship($alias, $relation) {
		
		// check if we have valid relationship/association in which
		// to alias in first place
		if (static::hasRelationship($relation)) {
			static::association(
				$alias, static::domain('sassociations')[$relation]
			);
		
		// otherwise we need to throw an exception to fact that association
		// does not exist
		} else {
			throw new \Exception(
				"Failed to alias relation '$relation' because it does not exist ". 
				"in instance receiver '{$this->ident()}'"
			);
		}	
	}
	
	/**
	 * Will idiomatic synononym to call Model#__construct
	 * 
	 */
	public function build($mixed) {
		$this->__construct($mixed);
	}

	/**
	 * The point of trapping the defineMethod event is to determine
	 * if any names match that of attributes, in which case we replace
	 * the current handler or value with the new handler
	 * 
	 */
	protected function methodAdded($name, $lambda) {

		//if (isset($this->_attributes[$name])) {
		//	$this->attrAccessor($name);
		//}
	}
	 
	/**
	 * Provides a variable length argument list of items that
	 * must exist prior to certain callbacks
	 */
	protected static function validates($__mixed) {
		static::$svalidates[static::classnamefull()] = 
			Collection::flatten(func_get_args());
	}
	
	/**
	 * Determines if model is valid based on attribute values specified
	 * in validates
	 */
	public function valid() {
		
		// run our validation callbacks
		$this->runCallbacks('validate', 'before');
		
		// explicitly check fields
		foreach(static::$svalidates[static::classnamefull()] as $attribute) {	
			//$hasAttribute = "has_$attribute";
			

			// unfortunately, motherfucking references and '0' values can be viewed 
			// as !isset === true, so we have to check against !is_null to ensure
			// that we are not returning false positive
			if (!isset($this->$attribute)   ||
			    is_null($this->$attribute)) {
 	
				return false;
			}
		}
		
		$this->runCallbacks('validate', 'after');
				
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
			
			// wtfphp once again!! unfortunately, motherfucking references and '0' values can be viewed 
			// as !isset === true, so we have to check against !is_null to ensure
			// that we are not returning false positive			
			if (!isset($this->$attribute)   ||
			    is_null($this->$attribute)) {
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

	/** CacheKeyInterface Interface ********************************************/
	// Provides method to ensure the return of valid/reliable cache key
	
	/**
	 * Returns a unique cache key for this instance
	 */
	public function cacheKey() {
		if ($this->exists()) {
			$encrypted = static::cache($this->class->reversed(), function($key) {
				return md5($key);
			});
			
			return "$encrypted/{$this->id}";
		}

		throw new \Exception(
			"Failed to generate cache key because instance {$this->ident()} does not exist"
		);
	}

	/** CacheKeyInterface Interface ********************************************/
	// Provides method to ensure the return of valid/reliable cache key
	
	/**
	 * Returns a unique cache key for this instance
	 */
	public function cacheable() {
		return true;
	}
		
	/**
	 * Convenience method to pass sql to underlying layer;
	 * @TODO this may be removed 
	 */
	public static function find_by_sql($statement, $__mixed = null) {
		return forward_static_call_array('statement', array_slice(func_get_args(), 1));
	}
	
	public function findBySql($sql) {
		return $this->find_by_sql($sql);
	}

	/**
	 * This method is a temporary measure to provide a place to cache
	 * queries; eventually this should be moved into Model\Relation
	 * 
	 */	
	public static function statement($statement, $__mixed = null) {
		
		// create a callback/lambda to pass arguments to 
		// Domain\Data handler method 'statement
		$model     = static::singleton();
		$arguments = func_get_args();
		$handler   = function() use ($arguments) {
			$data = static::data();
			return $data::send('statement', $arguments);

		};
		

		
		// check that statement is a select statement	
		if ($model->cacheable() && 
		    preg_match('/^\s*?select/is', $statement, $match)) {
		
				
			// we're going to use Model\Relation as query cache, since 
			// functionality will be moved there and it encapsulates cacheKey
			// generation
			// @TODO this really hacky (using relation in this manner) 
			// this needs to be addressed as Relation is moved away from
			// Model (when creating )
			// @TODO change this to query/cache as opposed to jammin
			// into relation
			$cache    = new Cache\Relation;
			$relation = new Model\Relation(get_called_class());
			$relation->sql($statement);
			$relation->arguments(Collection::flatten($arguments));
			
			
			// attempt to find the cache, or set if it has not yet been
			// established
			// @TODO why the fuck is caching turned off (commented out) here?
			//return $cache->find($relation, $handler);
					
		}
		
		return $handler();
	}	
	
	protected static function createCacheKey($id) {
		// not part of the CacheKeyInterface, but allows for static call
		// when creating a cache key
		$tokens = array_reverse(explode('\\', static::classnamefull()));
		return "<$id>" . implode ('\\', $tokens);		
	}

	/** Serializable Interface *************************************************/
	// Provides method to allow model to be serialized; this is mostly used for
	// caching
	
	/**
	 * Serializes model; removes aliases and relationships
	 * @TODO currently we are only caching attribute values; this should be expanded
	 * to cover the many areas of Model, including callbacks
	 */
	public function serialize() {
		$attributes = array();
			
		foreach($this->attributes() as $key => $attribute) {
			// @TODO currently aliased properties are NOT removed from
			// return of attributes method, so we are doing so explictly
			// here	
			// @TODO 
			
			if (!$this->isAliasedProperty($attribute)) {
				$attributes[$key] = $attribute;		
			}
		}	
		
		return serialize($attributes);
	}
	
	/**
	 * Unserializes model
	 * @TODO currently we are only caching attribute values; this should be expanded
	 * to cover the many areas of Model, including callbacks 
	 * (not currently possible in 5.3, dont know in 5.4)
	 */
	public function unserialize($serialized) {
		$this->__construct(unserialize($serialized));
	}


	
	/** Static Model Constructors ************************************************/
	

	/**
	 * A "method space" to provide validation definitions
	 */
	protected static function __validates() { }

	/**
	 * A stubb method here to be used by concrete model classes
	 */
	protected static function __relationships() {
		
		$class     = static::classname();
		$namespace = static::klass()->namespace;
		
		// check for status relationship and draw if exists, we could
		// explicitly do this in a try/catch, but would present a serious
		// issue were someone to write a generic Common.Domain.Model.Status
		// class; so here, our convention is "if there is a Status class
		// in Comon.Domain.Model.$ClassName namespace, then define status
		// relationship"

		if (class_exists($model = "$namespace\\$class\\Status")) {
			static::hasOne('Status', function($model) {
				return $model::find($this->status_id);
			});
			
						
		}
		
	}

	protected static function __attributes() {
		// alias our primary key, using convention of tablename_id - this
		// is important as primary keys can now be accessed via instance->id
		if (static::hasPrimaryKey()) {
			static::aliasPrimaryKey(static::primaryKey());
		}
			
	}

	
	/**
	 * Alias to relationships; want to replace with association terminology
	 */
	protected static function __associations() {
		static::__relationships();
	}

	protected static function __callbacks() {
		
		$class     = static::classnamefull();
		$signature = static::signature(); 
		
		static::defineCallback('transaction', 'before', function() {
			
		});
		
		static::defineCallback('transaction', 'after', function()  {

		});	
		
		static::after_initialize(function() use ($class, $signature) {

			// assign left-over columns to model
			// @TODO delegate this to overrideable method, or place into
			// 'after' initialize
			// @TODO I don't remember why user entity was removed
			// from column assignment
			if (!in_array($signature = static::entity(), array('user')) && 
			    is_array ($columns   = Data::columns($signature))) {
			    	
				foreach($columns as $attribute) {
					if (!\property_exists($this, $attribute)) {
						$this->$attribute = null;
					}
				}
			}				

			$attributes = $class::cache($signature, function() {
				return $this->attributes;
			});
			

			foreach($attributes as $name) {
				
				
				// in some instances, for sub model types, like coupon\type, 
				// our convention doesn't work for fields with the same 
				// name as the class (ie, coupon_type.coupon_type); in these 
				// cases we look for a field matching the exact name
				$match = array();
				
				if (preg_match("/^{$signature}_(.+)/", $name, $match) || 
					  $name == $signature) {
					
					
					// first lets alias 'name' to 'signature'
					if ($name == $signature) {
						
						try { 
							// @TODO whi is this not alias attribute?
							$this->aliasProperty('value', $name);
						
						// the only reason an exception would be thrown, is if 
						// 'name' attribute already exists
						} catch(\Exception $ignore) { }
					}
					
					else {
						$alias = $match[1];
					}
					
					
					$alias = $name == $signature
						? preg_replace('/^.+_/', null, $name)
						: $match[1];
						
					
						

					try { 
						// @TODO aliasAttribute?
						$this->aliasProperty(strtolower($alias), $name);
	
					} catch(\Exception $ignore) { }
				}
			}
		
			// check if model has status relationship
			// @TODO this may be a bit too specific for this instance
			if (isset($this->status_id) &&
			    static::hasAssociation('Status')) {
			    	
				$field = "{$signature}_status";
				$this->aliasAttribute('status', function & () use ($field) {
					return $this->Status->$field;
				});
			}
						
					
		});

		
		// redefine our create/update callback to automatically
		// account for meta fields (last_action, last_action_taken, action_by)
		$counter = 0;

		foreach(array('create', 'update', 'delete') as $name) {
			static::setCallback($name, Callback\CRUD::instance());
		}	

		static::after_find( Callback\CRUD::instance() );

		// finally lets add cache callback; test that
		// instance is cacheable before adding callback
		// instance

		// @TODO comeback for review as I dont know whether to
		// have cacheable at instance/class level
		//if ($this->cacheable()) {
			//$this->after_find( Callback\Cache::instance() );
		//	$this->after_save( Callback\Cache::instance() );
		//	$this->after_delete( Callback\Cache::instance() );
		//}
		

				
	}

	public function __toString() {
		if ($this->exists()) {
			if (!is_null($value = $this->proxyToString())) {
				return $value;
			}
		}
		
		return parent::__toString();
	}
	
	protected function proxyToString() { }
	

	/** ArrayAccess Interface **************************************************/
	// ArrayAccess interface is intended to be used to access attribute values
	// from within override setters; though the methods are public, it is not
	// truely intended for outside access
	
	public function offsetGet($attribute) {
		return $this->_attributes[$attribute]['value'];
	}
	
	public function offsetSet($attribute, $value) {
		$this->_attributes[$attribute]['value'] = $value;
	}
	
	public function offsetExists($attribute) {
		return isset($this->_attributes[$attribute]);
	}
	
	public function offsetUnset($attribute) {
		unset($this->_attributes[$attribute]);
	}
	
	
	
	
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
	protected static function signature($name = null) {
		// get signature pattern - so Common\Domain\ModelProductOption\Status, will be
		// converted to product_option_status; this could have been accomplished on 
		// one line, but we sacrifice readability
		$class = is_null($name)
			? static::classnamefull()
			: $name;
			
		$tokens    = explode('\\', preg_replace("/^.+Model[\\\]?/", null, $class));
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
	 * Serialize model instance to json
	 */
	public function toJson() {
		$data = [ ];
		
		
		// first merge attribute values to data
		$data = array_merge(
			$data, $this->attributes()
		);
		
		// second we pull associations and determine their links
		// @TODO decouple link generation from model
		// @TODO remove tight coupling of server variables..
		
		
		foreach ($this->associations as $name => $ignore) {
			$name = strtolower($name);
			$data[ "uri_$name" ] = strtolower("{$_SERVER['PATH_INFO']}/$name");

		}
		
		// @TODO remove pretty print
		return json_encode(
			$data, JSON_PRETTY_PRINT
		);
	}
	
	/**
	 * @TODO currently aliasing __toArray; need to change once references
	 * are removed
	 */
	public function toTemplate() {
		return $this->__toArray();
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
			
			foreach($this->attributes as $field) {
				$values[$field] = $this->$field;
			}
			
			$returns = $values;
		}
		
		return $returns;
	}
	
	/**
	 * Returns a list of attributes as associative array
	 * @TODO this currently only works if instance exists - 
	 * given the way model works, this perhaps should be the
	 * required/intended behavior
	 * @TODO name may be too close to __attributes?
	 * @return mixed[]
	 */
	public function attributes() {
		
		$values = array();
						
		// iterate through properties, retrieve values and return
		foreach($this->attributes as $field) {
			
			// @TODO there is a chance here that an alias may have the same
			// name as a property
			if (//!$this->isAliasedProperty($field)    &&
			    !$this->hasRelationship($field))     {
			    	
				$values[$field] = $this->$field;
			}
			
		}
		
		return $values;
		
	}

	/**
	 * Gets/Sets static attributes within "class domain"
	 */	
	private static function attribute($name, callable $value = null) {

		// if value is null, we are returning a reference to
		// current element
		if (is_null($value)) {
			return static::domain('_sdefers')[$name];

		// otherwise set value on attribute 
		} else {
			static::defer($name, $value);
		}
	}
	
	/**
	 * Updates instances attribute set; save must explicitly be called
	 * post attribute update
	 */
	public function updateAttributes(array $attributes) {
		if (Collection::isHash($attributes)) {	
			foreach($attributes as $key => $value) {
				$this->$key = $value;
			}
		}
		
		else {
			throw new \Exception(
				"Failed to update attributes on model '{$this->ident()}' " . 
				"because parameter attributes must be a hash/associative array"
			);
		}
	}
	

	

	
	// CRUD methods //////////////////////////////////////////////////////////
	
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
		if (isset($arguments[0]) && ($model = $arguments[0]) instanceof Model) {
			// because runCallbacks is a protected method, we use the send method 
			// to by-pass access modifier; sorry folks, this is the only way to do
			// this without creating a static create and instance create method
			$model->send('runCallbacks', __FUNCTION__);
			
		}
			
		
		// instantiate model and explicitly set primary key to nil; this will ensure
		// that a record is created as opposed to an update - the onus lies
		// upon the developer that they do not do an explicit call on create
				
		else if ( \eGloo\Utilities\Collection::isHash($arguments = $arguments[0]) ) {
			$model     = new static($arguments);
			//$model->id = null;
						

			// saves model to underlying data layer and sets
			// initialized to true
			// @TODO change this back to $model->save onces
			// composite keys are defined
			//$model->save();
			if ($model->valid()) {
				$model->runCallbacks('save', 'before');
				$model->create($model);
				$model->initialized = true;
			}
			
			else {
				throw new \Exception(
					"Failed to create instance of '$model' because the following attributes are not valid : " . implode(
						', ', $model->whatsInvalid()
					) 
				);
			}
			
		}
		
		// otherwise we have passed an invalid argument to create and
		// we throw an exception to that fact
		else {
			$class = static::getCalledClass();
			
			throw new \Exception(
				"Failed to create instance of '$model' because the following attributes are not valid : " . implode(
					', ', $model->whatsInvalid()
				) 
			);
		}
		
		return $model;
	}

	/**
	 * Create method is a really wrapper to instantiate model, and then
	 * call save
	 * @return Model
	 * @param  variable-length[] $__mixed
	 */
	public static function find($__mixed) {
				
				
		// expand on parameter matching, but for, just match on primary
		// and tablename_id pattern
		if (static::hasCompositeKeys()) {
			throw new \Exception(
				"Find on composite keys not yet supported"
			);


		} else {
			$arguments = Collection::flatten(func_get_args());
			$table     = static::entity();
			$field     = static::primaryKey();
			$key       = $arguments[0]; 
			$set       = array();
			$manager   = Model\Manager::instance();
							
			
			// we're GAURENTEED to throw an exception here if our by-conventions guess
			// does not pan out; so callers will be explicitly aware
			try {
				
				
				foreach($arguments as $key) {
					
					if (is_numeric($key)) {
						
						// check if model has already been persisted
						// @TODO this needs to be converted to single statement ASAP  
						$result = $manager->find(static::classnamefull(), $key, 
							function($class, $key) use ($field) {
							
								// check model cache to determine if exists in cache already; we use our
								// static instance so we DON'T have to reinstantiate everytime we call find
								// as it is an expensive operation and the model in this instance only serves
								// as template of sorts (see todo)
								// @TODO since model is really only a template, this should be replaced with
								// Virtual Proxy concept
								$cache  = new Cache\Model;
									
								// @TODO model caching is breaking references on callbacks and following
								// trace is nearly impossible - for the time being, we are removing this
								// functionality								
								//$result = $cache->find($model, function() use ($class, $field, $key) {
								$result = $class::where([
									$field => $key
								])
								->build();
								
																	
								// we know that if result is not absolute false, it will be returned
								// as a set from our process method									
								if ($result) {
									$result = $result[0];
								}
												
								return $result;
						});
							
							
						if ($result !== false) {
							$set[] = $result;
						}	
					}
				}
				
				// @TODO place our afterFind in background task
				if (count($set)) {
					foreach($set as $model) {
						//$model->send('runCallbacks', 'find', 'after');
					}

					
					// if a set consisting of a single element; return element, as the likely
					// intended purpose was to retrieve a single record; otherwise return set
					// instance
					return count($set) == 1
						? $set[0]
						: new Model\Set($set);
				}
				
				return false;
			}	
				
			catch(\Exception $passthrough) {
				throw $passthrough;
			}	
		}			
	}
	
	public function save($cascade = false) {
				
		// we ask the question again, if valid, after performing
		// our validation routines
		if ($this->valid()) { 
			// execute our save callbacks
			$this->runCallbacks(__FUNCTION__, 'before');
			
			// flag to detemrine if running a create operation; this is important
			// for cascading save operations, as updates do not cascade save
			// on has many relationships
			$isCreate = false;
			
			// based on whether model primary key is set, call the correct
			// action method
			if ($this->exists()) {
				
				$model = $this;
				
				// @TODO this needs to be updated, because changed model doesn't work, because changes can't be
				// recorded without some type of indirection when loading attributes 
				//if ($this->changed() || 
				//    isset($this->overrides_changed) && $this->overrides_changed === true) {
				if (true) {  
					$this->update();
				}				
		
			}
			
			else {
				
				// unfortunately this has be passed here as we can call static
				// context, but not have static funciton be aware of instance
				$model = $this->create($this);
			
			}
			
			// reset our changed, since model is now (theoretically) in 
			// parrallel to database
			$model->changes = array();
			
			// finally call after callback
			$this->runCallbacks(__FUNCTION__, 'after');
		}
		
		// lets see what is missing for validation and throw exception
		else { 
			throw new \Exception(
				"Cannot save model '{$this->ident()}' because the attributes did not pass validation : " . print_r(
					$this->whatsInvalid(), true
			));
		}
		
		
		// @EXPERIMENTAL = we are going to run through our relationships
		// and determine if they have been created - if not, we attempt
		// to create them
		// @TODO this should be pushed into a callback, not has a "hard-code"
		// here
		
		if ($cascade) {
			foreach($model->associations(true) as $relation) {
				
				// determine if a hasOne relationship and if initialized - 
				// which case save
				// @TODO this needs to be abstracted to Model.Relation
				// @TODO we need to be able to make a determination of changed..
				// php provides no hooks for property changed, which makes
				// this tuff to implement (thats right, i said 'tuff')
				if ($relation instanceof Model) { 
				    //$relation->initialized())  {
						//$relation->changed()) {
						//!$relation->exists())      {
														
					try {
						$relation->save(true);
					}
					
					// a not changed exception we ignore, as this will be the case
					// in many instances
					catch(Model\Exception\Update\NotChanged $ignore) { }
					
					catch(\Exception $pass) {
						throw  $pass;
					}
					
				}
				
				// we ONLY do updates on has_many relationships on a create event
				else if ($isCreate && (($relations = $relation) instanceof Model\Set)) {
				
					foreach($relation as $relation) {
						
						//if ($relation->initialized()) { 
						    //$relation->changed())    {
						    //!$relation->exists())     {	
							try {
								$relation->save(true);
							}
							
							catch(Model\Exception\Update\NotChanged $ignore) { }
							
							catch(\Exception $pass) {
								throw $pass;
							}
						}
					//}
				}
			}
		}
		
		return $model;
		

				
	}


	/**
	 * Returns a list of relation instances of this model instance
	 * @deprecated changed to Model#associations
	 */
	public function relations() {
		$relations = array();
		
		foreach($this->relationships as $key => $ignore) {
			 $relations[$key] = $this->$key;
		}
		
		return $relations;
	}
	
	/**
	 * Returns a listing of associations to this model
	 */
	public function associations($onlyLoaded = false) {
		$associations = array();
				
		foreach($this->associations as $association => $ignore) {
			if (!$onlyLoaded ||
			   ($onlyLoaded  && isset($this->$association))) {
				
				$associations[] = $this->$association;
			}
		}
		
		return $associations;
	}


	
	
	public function update() {
		$this->runCallbacks(__FUNCTION__);
	}
	
	public static function delete($__mixed = null) {
		$arguments = Collection::flatten(
			func_get_args()
		);
		
		// an instance of model is needed
		// in order to run callbacks
		$model = new static;
		
		if (count($arguments)) {
			foreach ($arguments as $key) {
				
				// we assign primary key value to model as identifying
				// during our delete callback
				$model->id = $key;
				
				// @TODO currently delete is limited to invidual deletes per callback
				// session, as opposed to allowing for group deletes (single statement);
				// don't know if there is really a use case where many keys will be
				// pushed to this method to justify writing aorund this limitation
				$model->send('runCallbacks', __FUNCTION__);
			}
		}
		
		// otherwise we are calling a delete all
		else {
			$model->send('runCallbacks', __FUNCTION__, 'before');
			
			// @TODO decouple explicit sql call
			$model::statement("
				DELETE FROM {$model::entity()}	
			
			");
			
		
			$model->send('runCallbacks', __FUNCTION__, 'after');
		}
	}
		
	
	/**
	 * Adds a callback of type $event, to a specific point (before, around, after)
	 * and pushes callback $lambda on event + point stack
	 */
	protected static function defineCallback($event, $mixed, $lambda = null) {
	
		$point = $mixed;
		
	
		if (is_null($lambda)) {
			
			// @TODO 'around' should not be specified inline
			$point  = 'around';
			$lambda = $mixed;
		}


		// check if mixed is an object of type Callback; if callable,
		// it will be set on is_callable check, if not, and instsance of Callback, we 
		// can wrap 
		if (($object = $lambda) instanceof Model\Callback) {

			// cache the process of checking for appropriate callback method on
			// callback instance and wrapping within closure; this can be done
			// at class level, as there should exist only one instance of callback
			// type
			// @TODO i don't believe static cache is needed anymore			
			$lambda = static::cache($object, function($object) 
				use ($event, $point) {

				// check if callback class has like/appropriately named method;
				// if so, return as closure
				 
				if (\method_exists($object, $method = $event)                    ||
				    \method_exists($object, $method = $point . ucfirst($event))) {

					
					return function($model) use ($object, $method) {
						try {
							return call_user_func_array(
								array($object, $method), 
								array( $model )
							);

						} catch(\Exception $pass) {
							throw $pass;
						}
						
					};

				}
							
				else {
					throw new \Exception(
						"Failed to define callback '$event/$point' because callback instance " .
						"'{$mixed->ident()}' does not define method '$method'"
					);
				}
				
			});
		}


		
	
		if (is_callable($lambda)) {
			$callbacks   = &static::callbacks($event, $point);
			$callbacks[] = $lambda;

		} else {
			throw new \Exception(
				"A block/lambda/closure must be provided when defining a " .
				"callback on receiver " . static::klass()
			);
		}


	
	}
	
	/**
	 * Does the same as defineCallback, but first unsets an event + point callback stack and
	 * pushes on new event
	 */
	protected static function setCallback($event, $mixed, $lambda = null) {
		
		// assign empty array to callback stack, effectively
		// unsetting all callbacks	
		$callbacks = &static::callbacks($event);
		$callbacks = [];		



		try {
			static::defineCallback($event, $mixed, $lambda);

		} catch(\Exception $pass) {
			throw $pass;
		}

	}
	
	/**
	 * Determines if an event + point callback stack exists
	 */
	protected static function hasCallbacks($event, $point) {
		// reference callbacks so my fingers fall off
		$cs = &static::domain('scallbacks');
		
		// now return condition
		return isset($cs[$event])         && 
		       isset($cs[$event][$point]) && 
		       count($cs[$event][$point]);
			
	}

	protected static function &callbacks($event, $point = null) {
		if (is_null($point)) {
			return static::domain('scallbacks')[$event];

		} else {
			return static::domain('scallbacks')[$event][$point];
		}
	}


	

	
		
	protected function runCallbacks($event, $mixed = null) {
		
		// we use inject idea to pass values between callbacks,
		// if needed; if any callback returns false, then
		// we short-circuit execution
		$inject = true;
		$points = null;
						
		if (is_null($mixed)) {
			$points = array(
				'before', 'around', 'after'
			);
		}
		
		else {			
			if (is_array($mixed)) {
				$points = $mixed;
			}
			
			else {
				$points = array( $mixed );
			}
		}
		
		
		// run our before/around callbacks
		foreach($points as $point) {
			if (static::hasCallbacks($event, $point)) {
				foreach(static::callbacks($event, $point) as $callback) {
					$callback = $callback->bindTo($this);
					try { 
						if (($callback()) === false) {
							return ;
						}
					
					
					// @TODO this exception is not bubbling up, for now, exit 
					// and 
					} catch(\Exception $pass) {
						throw $pass;
						
					}
				}
			}		
		}

	}
	

	
	/**
	 * "Shapes" a result set into either a model or
	 * set of models; I don't know if I like the name of this
	 * method, so it is subject to change
	 * @return Model | Model\Set
	 */
	protected static function shape($result) {
		
		if (($relation = $result) instanceof Model\Relation) {
			// cache based on query
			$result = $relation->build();	
		}
		
		else if (is_array($result) && count($result)) {
			$manager = Model\Manager::instance();
			
	
			// guess key for manager, and get class
			$signature = static::signature();
			$key       = "{$signature}_id";
			$class     = static::classnamefull();
			
			$tmp       = get_called_class();
			$instance  = $tmp::instance();
								
			if (\eGloo\Utilities\Collection::isHash($result)) {
				$result = $manager->find($instance, $key, function($class) use ($result) {					
					return new $class($result);
				});				
								
				
				$result->send('runCallbacks', 'find', 'after');
				
			}
					
			// otherwise, we manually build set with model instances
			else {
				
				$set = array();
				
				// check if result is composed of a list of Model
				// instances; then we set temporary to result list
				if ($result[0] instanceof Model) {
					$set = $result;
				}
				
				// otherwise, result list is set of
				// of associative arrays; we wrap each index
				// in Model instance
				else {
					foreach($result as $record) {
						// @TODO this is a temporary measure to guard against returns of a single
						// value - this need to be fixed in Model#initialize
						if (!is_array($record)) {
							$record = array($record);
						}
						// attempt to retrieve instance from pool, if it is not available, return
						// "fallback" result from pool; 
						$set[] = $manager->find($instance, $key, function($class) use ($record) {
							return new $class($record);
						});					
					}
				}
				
				// run after find callback
				// @TODO centralize this behavior - at the moment its interspersed 
				// throughout Model
				// @TODO removing afterFind callback improves performance significantly - 
				// id prefer to have afterFind, but need a way to make performant

				//foreach($set as $model) {
					//$model->send(
					//	'runCallbacks', 'find', 'after'
					//);
				//}
				
				
				// replace result with temporary
				$result = new Model\Set($set);
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
	 * "Overrides" delegated "columns" method
	 */
	protected static function columns() {
		$class = get_called_class();
		return $class::columns(static::signature());
	}
	
	/**
	 * Aliases our primary key to 'id'
	 */
	protected static function aliasPrimaryKey($from) {
		// for now we ignore our exception as primary
		// has already been aliased	
		try {
			static::aliasAttribute( 'id', $from );
		
		} catch(\Exception $ignore) { }

		//static::$primaryKeyName = $from;
		
	}
	
	
	/**
	 * Check to determine if model has been specified as having
	 * composite primary keys
	 * @return boolean
	 */
	public function hasCompositeKeys() {
		//return is_array($this->primaryKeys) && 
		//       count($this->primaryKeys);

		// @TODO cache?
		return count(static::primaryKey()) > 1;
	}
	
	public static function hasPrimaryKey() {
		//$field = $this->primaryKeyName();
		
		//return isset($this->$field) &&
		//      !is_null($this->$field);
		return count(static::primaryKey())  > 0;

	}
	
	/**
	 * This is an alias of ObjectSafe#aliasProperty - since dynamically bound
	 * properties on a model are termed "attributes", "aliasAttribute" is
	 * moreso fitting
	 */
	protected static function aliasAttribute($__mixed) {
		
		// flatten arguments and check if last argument is a lambda
		// and determine our aliases
		$arguments = \eGloo\Utilities\Collection::flatten(
			func_get_args()
		);
		
		
		// @TODO fix below; not suitable for ternary operator
		$aliases = is_callable($lambda = $arguments[count($arguments) - 1])
			? array_slice($arguments, 0, count($arguments) - 1)
			: array_slice($arguments, 0, count($arguments) - 1);
		
				

		// attribute is callable, then lambda should return a reference to the
		// attribute in question, to which our alias will become a true
		// alias of
		if (is_callable($lambda)) {
			// make sure that lambda returns a reference, if it does
			// not we are creating a true alias and throw an exception
			// if the case
			$reflection = new \ReflectionFunction($lambda);
			
			if ($reflection->returnsReference()) {

				
				// now specify alias as attribute accessor and set with
				// value as lambda
				foreach($aliases as $alias) {

					static::attribute($alias, $lambda);
					
					// unset our attribute; this will make sure referenced values
					// are not unset as well
					/*
					$initialValue = null;
					
					if (isset($self->$alias)) {
						$initialValue = $self->$alias;
					}
					
					
					unset($this->$alias);			
					
					// for the moment, simply set aliasedProperties with alias
					// in order to note that $alias is indeed an alias! We set to
					// false in order to indicate that value has not yet been set
					$this->_aliasedProperties[$alias] = false;
							
					 
					//$this->defineMethod($alias, $lambda);
					$this->defer($alias, function() use ($alias, $self, $lambda, $initialValue) {
						
						// bind by reference alias to return of lambda (which should be
						// a reference to a relationship attribute)
						//if (isset($self->$alias)) {
						//	$currentValue = $self->alias;
						//}
						
						$self->$alias = &$lambda($self);
										
						if (!is_null($initialValue)) {
							$self->$alias = $initialValue;
						}
											
												
						// returning null indicates that value should NOT be assigned
						// to $this->$alias, since we have already done so above
						return null;
					});
					*/
				}
				
				
			}
			
			else {
				throw new \Exception(
					"Failed to create alias '$alias' because lambda does not return-by-reference"
				);
			}
		}
		
		else {
			// @TODO why aren't we iterating through aliases here?
			// Ahh because it doesn't make sense otherwise, or at 
			// least isnt very readable
			list($alias, $from) = $arguments;

			static::attribute($alias, function & () use ($alias, $from) {
				return $this->$alias = &$this->$from;
			});

			//foreach($aliases as $alias) {
			//$this->aliasProperty($arguments[0], $arguments[1]);
			//}
		}
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
		$className     = static::classNameFull();
		$dataClassName = static::classNameFull() . 'DataAccess';

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
	 * Checks equality against model primary key value and type
	 * @return boolean
	 */
	public function equals(Model $model) {
		if ($model instanceof static) {
			// we surround with try catch in-case model has not been
			// initialized, or primary key is unavailable; in these
			// cases, checking equality is pointless so we return false
			// as opposed to raising an exception message
			try {
				return $model->id == $this->id;
			}
			
			catch(\Exception $ignore) { }
		}
		
		return false;
	}



	public function __call($name, $arguments) {
		$self = $this;		

		try { 
			return parent::__call($name, $arguments);
		}
		catch (\Exception $deferred) { }
		
		// check for callback shortcut methods; instead of running 
		// defineCallback, we can run this->before_create 
		if (preg_match('/^(before|after|around)_(.+?)$/i', $name, $match)) {
			return call_user_func_array(
				static::defineMethod($name, function($mixed) use ($match) {

					if (func_num_args()) {				
						static::defineCallback(
							$event = $match[2], $match[1], $mixed
						);

					// otherwise we are executing/firing(?) the callback stack
					} else {
						static::runCallbacks($match[2], $match[1]);

					}

			}), $arguments);
			
		}	

		
		throw $deferred; 
	}

	
	public static function __callstatic($name, $arguments) {
		
		
		try {
			return parent::__callstatic($name, $arguments);
		}
		catch(\Exception $deferred) { }


		// check for callback shortcut methods; instead of running 
		// defineCallback, we can run this->before_create 
		if (preg_match('/^(before|after|around)_(.+?)$/i', $name, $match)) {
			return call_user_func_array(
				static::defineMethod($name, function($mixed) use ($match) {

					if (func_num_args()) {				
						static::defineCallback(
							$event = $match[2], $match[1], $mixed
						);

					// otherwise we are executing/firing(?) the callback stack
					} else {
						static::runCallbacks($match[2], $match[1]);

					}

			}), $arguments);
			
		}		
		
		// if unable to find matching meta call within
		// __call chain, determine if a dynamic finder
		if (preg_match('/^delete_by_(.+)$/', $name, $match)) {
			$class   = get_called_class(); 
			$fields  = explode('_and_', $match[1]);
			
									
			// now lets define out dynamic finder function
			// @TODO most of the funcitonality here should be moved
			// to Relation
			return call_user_func_array(static::defineMethod($name, function($__mixed) 
				use ($fields, $name) {

				$conditions = array();
				$arguments  = Collection::flatten(func_get_args());
				
				foreach($fields as $field) {
					$conditions[] = "$field = ?"; 	
				}
				
				$conditions = implode(' AND ', $conditions);
				$table      = static::entity();
				
				// @TODO arguments is appended with classname, sometimes??; for now,
				// removing appended value
				$arguments = array_slice($arguments, 0, count($fields));
				
				try {			 
					Data::statement("
						DELETE FROM
							$table
						
						WHERE
								( $conditions )		
						
					", $arguments);
					
									
				} catch(\Exception $up) {
					throw $up;
				}
			}), $arguments);
			
			
			
	
			
		}		


		// @TODO find_link and find_one need to be refactored; there
		// ius too much code duplication here
		if (preg_match('/^find_like_(.+)$/', $name, $match)) {
			$fields  = explode('_and_', $match[2]);
			$findOne = !empty($match[1]); 
	
			// now lets define out dynamic finder function
			return call_user_func_array(static::defineMethod($name, function($__mixed) 
				use ($fields, $findOne, $name) {
				
				
				// build string representation of query coinditionals
				$conditions = array();
				
				foreach($fields as $field) {
					$conditions[] = "$field = ?";
				}
				
				$conditions = implode(' and ', $conditions); 
				$arguments  = func_get_args();
				
				// @TODO this is a temporary measure because ObjectSafe will pass in
				// class context as last parameter, which causes our result below
				// to break; for now, remove last argument if it matches $class
				if (($count = count($arguments)) > 1 && $arguments[$count-1] == $class) {
					unset($arguments[$count-1]);
				} 
				
				try {	
					$result = static::where(
						$conditions, $arguments
					)
					->build();

				} catch(\Exception $up) {
					throw $up;
				} 
				
				
				// if we have specified find_one_by then we return the first
				// instance - in most cases, this will be used when we know
				// there is only one corresponding record
				if ($findOne && $result instanceof Model\Set) {
					$result = $result[0];
				}
				
				return $result;
				
				
			}), $arguments);		

		}
		
		// @TODO needs refactoring with other find_xxx methods
		if (preg_match('/^find_(one_)?by_(.+)$/', $name, $match)) {
			$fields  =  explode('_and_', $match[2]);
			$findOne = !empty($match[1]); 
	
			// now lets define out dynamic finder function
			return call_user_func_array(static::defineMethod($name, function($__mixed) use 
				($fields, $findOne, $name) {
				
				
				// build string representation of query coinditionals
				$conditions = array();
				
				foreach($fields as $field) {
					$conditions[] = "$field = ?";
				}
				
				$conditions = implode(' and ', $conditions); 
				$arguments  = func_get_args();
				
				// @TODO this is a temporary measure because ObjectSafe will pass in
				// class context as last parameter, which causes our result below
				// to break; for now, remove last argument if it matches $class
				if (($count = count($arguments)) > 1 && $arguments[$count-1] == $class) {
					unset($arguments[$count-1]);
				} 
				
				try {	
					$result = static::where(
						$conditions, $arguments
					)
					->build();

				} catch(\Exception $up) {
					throw $up;
				} 
				
				
				// if we have specified find_one_by then we return the first
				// instance - in most cases, this will be used when we know
				// there is only one corresponding record
				if ($findOne && $result instanceof Model\Set) {
					$result = $result[0];
				}
				
				return $result;
				
				
			}), $arguments);
			
	
			
		}

		// dynamic range finders
		// @TODO needs refactoring with other find_xxx methods
		// @TODO deprecate this; this should performed at set
		// level and not evaluated until
		if (preg_match('/^find_(one_)?range_(.+)$/', $name, $match)) {
			$fields  =  explode('_and_', $match[2]);
			$findOne = !empty($match[1]);
			
			
			// now lets define out dynamic finder function
			call_user_func_array(static::defineMethod($name, function($__mixed) 
				use ($fields, $findOne, $name) {
				
				$validRanges = true;
				$ranges      = array();
				$arguments   = Utilities\Collection::flatten(
					func_get_args()
				);
				
				// test whether we are passing range values like '4..10'
				foreach($arguments as $range) {
					if (!Primitives\Range::valid($range)) {
						$validRanges = false;
						break;
					}		
				}
				

				if ($validRanges) {
					foreach ($arguments as $range) {
						$range  = new Primitives\Range($range);
						$ranges[] = array($range->min(), $range->max()); 
					}
				}

				// if not valid range, it is assumed that range is composed of parameter pairs, make
				// sure that the number of arguments matches number of fields * 2				
				else if (count($arguments) == (count($fields) * 2)) {
					for ($counter = 0; $counter < count($arguments); $counter += 2) {
						$ranges[] = array(
							$arguments[$counter], $arguments[$counter + 1]
						);
					}
				}
				
				else {
					throw new \Exception(
						"Failed executing dynamic finder '$name' because " .
						"argument list does present valid ranges: " . print_r(
							$arguments
					));
				}
				
				
				// build string representation of query coinditionals
				$conditions = array();
				
				foreach($fields as $field) {
					$conditions[] = "($field BETWEEN ? AND ?)";
				}
				
				$conditions = implode(' and ', $conditions); 
				
				
				$result = static::where(
					$conditions, \eGloo\Utilities\Collection::flatten($ranges)
				)
				->build();

				
				// if we have specified find_one_by then we return the first
				// instance - in most cases, this will be used when we know
				// there is only one corresponding record
				if ($findOne && $result instanceof Model\Set) {
					$result = $result[0];
				}
				
				return $result;
				
				
			}), $arguments);
			 
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
			
		// we first attempt to resolve set within parent, which
		// is responsible for evaluating meta patterns. If they
		// do not exist, and property does not exist, then an 
		// exception will be thrown, which in this case is ignored
		// because we DO want dynamic properties/attributes added
		// to our receiver
		$continue = false;
		
		
		try {
			$continue = parent::__set($key, $value);
		}
		
		catch(\Exception $ignore)  {
			$continue = true;
		}
		

		// if parent has thrown an exception, then meta tests have
		// failed and we intentionally wish to defined a dynamic 
		// property
		
		if ($continue) {

			
			// if an aliased property and meta container (aliasedProperties)
			// value is false, then this is a deferred alias, whose assignment
			// must be proceeded by a call to __get on the property
			// Deferred should never hit here!!
			if ($this->isAliasedProperty($key) && 
			    $this->_aliasedProperties[$key] === false) {
				
			
				// this will fire the defer method attached to alias
				// which will bind-by-reference the alias to the return
				// value of deferred method
				//$this->$key;
				
				// now set value
				//$this->$key = $value;
			}
		 
			// because we rely on certain instance fields being set
			// during class definition (or when class is self) we
			// also set field on public
			// @TODO remove and place into properties when we
			// have figured out succesful toArray implementation
			// on our classes
			
			// override simple get functionality with method
			// @TODO not yet implemented
			//if (\method_exists($this, $key)) {
				// pass	
			//}
			
			// flag whether value has been changed, this is important
			// for checking 
			// @TODO this doesn't work because i am stupid, set will 
			// be bypassed after initial property set..  
			//$changed = !isset($this->$key) || 
			//           (isset($this->$key) && $this->$key !== $value);
			
			
			// we check if attribute has been set as lambda, in which case we avoid
			// a direct set (or arbitrarily creating a public property) as that would
			// bypass future calls to __get and __set, and thus undo the point of 
			// ruby style attributes
			// @TODO this is really messy, as its forced conglomerate of two different
			// concepts; eventually all attributes will be moved over to ruby style attribute
			// accessor
			if (!isset($this[$key])) {
				$this->$key = $value;
			}
			
			if (!in_array($key, $this->attributes) && 
			    !$this->isAliasedProperty($key)    &&
					!$this->hasRelationship($key))     {
						
				$this->attributes[] = $key;
			}
			
			// we also set on properties to maintain backwards 
			// compatibility on anything that is explicitly 
			// setting/getting on properties
			//$this->properties[$key] = $value;
			
		
			// now record change
			//@TODO this will always be true in initial set
			//if ($changed) {
			if (!$this->hasRelationship($key)) { 
				$this->changes[$key][] = $value;
			//}
			}	
		}
		
		return $this;
	}

	/**
	 * Duplicates a model, but sets primary key to nil; this way, our on-save will invoke a create
	 * as opposed to update
	 */
	public function duplicate() {
		// creates a shallow copy of current instance	
		$dup = clone $this;
		
		// explicitly set primary to nil so record in essence "does-not_exist"; the
		// side-effect of this, is that calls to save will cause create action
		$dup->id = null;
		
		return $dup;
	}

	/**
	 * Returns a "by-convention" (ie, best guess) of what the primary
	 * key name is - this should not be relied upon unless we have an
	 * explicit understanding of underlying data structure; the methodology
	 * by which primary key is obtained will change in the future
	 * @TODO this method needs to be rethought
	 * @Deprecated
	 */
	public static function primaryKeyName() {
		return static::primarykey();
	}

	/**
	 * Uses convention to determine primary key name - this is not a 
	 * a gaurentee that is valid primary key name
	 */
	public static function primaryKey() {

		// attempt to retrieve primary key from data source
		if (($keys = Data::primaryKey(static::entity()))) {
			
			// if a composite, then return as array; if not, return
			// scalar value
			return count($keys) > 1 
				? $keys
				: $keys[0]; 	
		
		} else {
			throw new \Exception(
				"Failed to determine primary key name because receiver " . 
				"'" . static::$class  . "' does not have a primary key"
			);
		}
	}	

	/**
	 * Determines if model instance has changed since initialization
	 */
	public function changed() {
		$self = $this;
		
		return $this->cache(function() use ($self) {
			if ($self->initialized()) {
				$changes = &$self->reference('changes');
				
				// iterate through change list - if a change property has more than one 
				// value in its change list, then it has clearly changed, thus marking
				// the model as changed
				foreach ($changes as $key => $values) {
		
					if (!in_array($key, array_keys($self->reference('_aliasedProperties'))) &&
					    !in_array($key, array_keys($self->reference('relationships')))      &&
					    $self->$key != $values[0])                                          {
					  	
						return true;
					}
				
				}
			}
			
			return false;
		});
	}
	

	
	/**
	 * Explicitly lists changes 
	 */
	public function changes() {
		return $this->changes;
	}
	
	/**
	 * Locks any explicit changes on model
	 */
	public function lock() { }
	
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

		// @TODO determine if this even used
		$class = strtolower( 
			\eGlooString::toUnderscores(static::classname()) 
		);
	
		// check if $name matches defined association
		if (static::hasAssociation($name)) {
			// retrieve lambda which defines nature of
			// association and subseqently, bind that
			// association to the current instance context
			$lambda = static::association($name)['lambda'];
			$lambda->bindTo($this, $this);

			// now execute/call block and pass Model reference
			// that represents the association and pass value
			// to instance property
			// @TODO check whether name needs to be "initialized"
			// with null value.. i remember there being a reason
			// before..
			$this->$name = null;

			try { 
				$this->$name = $lambda(
					static::association($name)['model']
				);

			} catch(\Exception $exception) {
				throw $exception;
			}

			// if an exception hasnt been passed, the return
			// to calling context
			return $this->$name;
		}

		// check if $name matches defined static attribute - 
		// if so, we assign value to local attribute
		if (isset(static::domain('_sdefers')[$name])) {
			// we need to replace lambda with bound version
			$lambda = &static::domain('_sdefers')[$name];
			$lambda = $lambda->bindTo($this);

			// now we call as static method, which will take care
			// of running deffered method and then popping from
			// deferred stack
			$this->$name = static::{$name}();
		}

		// @TODO this should be replaced at some point
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
					$class = static::classNameFull();
					
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
		if (preg_match('/^(.+)_((change(s|d)?)|was)$/', $name, $match)) {
			$field  = $match[1];
			$action = $match[2]; 
			
			if (isset($this->$field)) {
				
				// 'changed' asks if field value has changed since originally
				// initialized value
				if ($action == 'changed') {
					$self = $this;
					
					return $this->cache($name, function() use ($self, $name) {
						return isset($changes[$name]) && count($changes[$name]) > 1;
					});
				}
				
				// otherwise we are asking to see a list of explicit changes
				// for this field
				else if ($action == 'changes') {
					return $this->changes[$field];
				}
				
				// lastly, we determine original initialized value of
				// changes
				else {
					return $this->changes[$field][0];
				}
			}
			
			else {
				throw new \Exception(
					"Failed to determine change history because field '$field' does not exist on receiver " . static::classNameFull()
				); 
			}
		}

		// @TOOD confirm that this works or is still required since we
		// do aliases after model initialization		
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

	/**
	 * The purpose of a scope is to encapsulate chain calling
	 * and provide a chain-calling mechanism of its own
	 */
	protected function scope($name, $lambda) {
		
		return $this;
	}
	

	
	public function cast($class) {
		
		// allow for passing class namespace as Model.SubType, or Model::SubType
		$class = preg_replace('/(\.|::)/', '\\', $class);
			
		if (class_exists($class)) {
			return new $class($this->attributes());
		}
		
		throw new \Exception(
			"Cannot cast to model class '$class' because it does not exist"
		);
	}
		
	public function cached() {
		return $this->cached === true;
	}
	
	
	
	static protected function factory($name) {
		/*
		$refle
		$class = static::namespace() . "\\Model\\$name";
	
		if (class_exists($class)) {
			return new $class;
		}
	
		throw new \Exception(
				"Failed to create model $class becfause it does not exist"
		);
		*/

		throw new \Exception('Model::factory is not implemented');
	}	


	protected $attributes     = array();
	protected $validates      = array();
	protected $callbacks      = array();
	private   $initialized    = false;
	protected $changes        = array();
	protected $relationships  = array();
	protected $associations   = null;
	protected $indicies       = array();
	protected $cached         = false;
	protected $association;

	protected static $sassociations = [ ];
	protected static $scallbacks    = [ ];
	protected static $svalidates    = [ ];
	protected static $sattributes   = [ ];
	
}