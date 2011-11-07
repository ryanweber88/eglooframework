<?php
namespace eGloo\DataProcessing\DDL\Entity;

use eGloo\DataProcessing\DDL\Utility\CallbackStack;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\EventManager;
use \Zend\EventManager\Event;


/**
 * 
 * Represents the structure of data and is responsible for:
 *  - providing the base interface for all ddl objects
 *  - providing the structure of an entity (what it is composed of)
 *  - communicates transparently with entity manager
 * @author Christian Calloway
 *
 */
abstract class Entity extends \eGloo\Dialect\Object implements EvaluationInterface { 
	
	// TRAITS -------------------------------------------------------------- //
	
	
	use \eGloo\Utilities\Collection\StaticStorageTrait;
	use \eGloo\Utilities\StatTrait { 
		init as initStatTrait;
	}
	
	// CONST --------------------------------------------------------------- //
	
	const STATE_NIL      = 0x00;  // Entity does not, or no longer exists
	const STATE_NEW      = 0x01;  // Entity is brand new, but not yet managed
	const STATE_MANAGED  = 0x02;  // Entity is managed in persistence context
	const STATE_REMOVED  = 0x03;  // Entity has persistence context, but is marked for removal from db
	const STATE_DETACHED = 0x04;  // Entity has been serialized to another tier, has not persistence context
	
	
	// INITIALIZTAION  ----------------------------------------------------- //
	
	
	function __construct() { 
		parent::__construct();
		
		// CALL INITILIZATION METHOD
		$this->init();
		$this->initStatTrait();

		
		// SET ENTITY STATE
		$this->state = MANAGER::ENTITY_STATE_NEW;
		
		// BUILD ENTITY DEFINITION
		// Defined in entities xml
		//$this->entityDefinition();
		
		try { 
			// definitions are mapped to static storage, since an entities
			// definition will not likely change from request to request,
			// but will need to be limited in stateful environment
			// @todo limit_static
			// @todo limit_cache
			$this->definition = static::retrieve((string)$this->_class, function() { 
				return Definition::create($this);	
			});
		}
		catch (\eGloo\Dialect\Exception $pass) { 
			throw $pass;
		}
		
							
		// ENTITY/STATEMENT INTERFACE
		// TODO abstract adding of interfaces 
		//$this->entityInterface();
				
		foreach(DDL\Statement\Bundle::create($this)->names as $name) {	
			$this->methods[$name] = function($arguments) use ($name) {
				$method = new Method($this, $name);
				return $method->call($arguments);
			};
		}
		
		// ENTITY CALLBACKS INITIALIZATION
		// $this->entityCallbackStack();
		$this->callbacks = new DDL\Utility\CallbackStack;
		
		foreach($this->initCallbacks() as $callback) { 
			$this->callbacks->push($callback);
		}
		
		
		// ENTITY EVENT LISTENERS
		//$this->entityEventListeners();
		$this->events = new EventManager;
		
		// Stat listener is responsible for tracking accessed/modified data
		$this->events->attachAggregate(new Listener\Stat);
		
		// TODO refactor into separate listener class
		$this->events->attachAggregate(new Listener\Generic([
			// listens for evaluate trigger
			'evaluate' => function(Event $event) { 
				// evaluates entity for substance (is this
				// a fake entity or what not eh)
				$this->evaluate();
				
				// false return indicates that listener will only respond once
				// and be unbound
				// return false;
			}, 
			
			// listens for call trigger
			'call'     => function(Event $event) {
				
				// just shortcutting to params and results handler
				$params  = $event->getParams();
				$handler = $params['results_handler'];
				
				
				$this->callbacks->push(new DDL\Utility\Callback(
					$params['name'], function(array $passThrough = [ ]) use ($params, $handler) {
												
						// invoke entity method and retrieve results	
						$results = $this->methods[$params['name']]($params['arguments']); 
						
						// if passed handler is callable, then pass results to handler
						// and set results as the return of our dynamic handler
						if (is_callable($handler)) { 
							$results = $handler($results);
						}
						
						return $results;
					}
				));
				
				// unless defer flag has been exp specified, trigger evaluation
				// immediately
				if (!isset($params['defer']) || $params['defer'] !== true) { 
					$this->events->trigger('evaluate');
				}
				
				
				// true return will short-curcuit any subsequent calls
			
				return true;
			}
		]));		
		

		// initialize attributes and relationships
		//echo $this->state; exit;
		
	}
	
	function __destruct() { 
		// provides destruction operations for entity instance	
	}
	
	/**
	 * 
	 * Provides developer initialization for entity bean, 
	 * where-in construct should  
	 * 
	 */
	protected function init() { }	
	
	
	protected function initCallbacks(array $callbacks = [ ]) {
		// Defines "initializing" callbacks - these will be run once
		// but are vital to entity evaluation
		return array_merge(
			
			// defines relationship initialization  
			[ new DDL\Utility\Callback(
				'relationships', function(array $pass = [ ]) { 
								
					// evaluating object existence - these need to be seperated somehow
					// evaluate entity relationships
					foreach($this->definition->relationships as $relationship) { 
									
						// create entity representation of relationship
						$entityRelation = DDL\Entity\Factory::factory(
							"{$this->_class->namespace}\\{$relationship->to}"
						);
						
						echo "$relationship\n";
						//echo $this->uid; exit;
						
						// if has-many relationship, then a queryset is instantiated with a single 
						// callback on stack (a call to find_xxx statement)
						if ($relationship->hasMany()) { 
							$this->relationships[(string)$relationship] = new QuerySet(
								$entityRelation, new DDL\Utility\CallbackStack([ new DDL\Utility\Callback('init', function() use ($relationship) {
									
									$pk = $this->definition->primary_key;
									 
									// @todo name conventions will be have to be centralized (find_) around configurable, or 
									// at least managed from some outside perspective - find_ could change at anytime. 
									$results = $this->methods['find_' . strtolower($relationship->to)](['fields' => [ 
										$pk => [ 'values' => $this->id, 'type' => $this->definition->primary_key ]
									]]);
									
									return $results;									 															
								})])
							);
						}
						
						else {
							$this->relationships[(string)$relationships] = $entityRelation;
						}
						
					}
					
			}) ], 
			
			// callbacks recieved up-the inheritance chain
			$callbacks
		);
	}
	
		
	/**
	 * 
	 * By default, will print entity information - should be overriden to
	 * provide acceptable stdout values (eg. Product.name) 
	 * @throws \eGloo\Dialect\Exception
	 */
	public function __toString() { 
		
	}
	
	/**
	 * Invokes evaluate method
	 * @return boolean
	 */
	public function valid() { 
		$this->events->trigger('evaluate');
		
		// Data shoud ALWAYS be either valid or absolute false
		return ($this->attributes !== false);
	}
		
	protected function evaluate() { 
		// @todo is this method needed anymore?
		
		// evaluate is responsible for running callback stack
		// and acting upon resulting data
				
		echo "calling eval\n";
				
		// evaluates entity if it has not yet been
		// "touched" by underlying data layer
		// callbacks->batch must always return mutlidim
		// array for singular entity evaluation
		
		// inspect data to determine evaluation performed
		
		$results =  $this->callbacks->batch();
		
		//var_export($results);
		

		
		return $results;
	
			
	}
	

	public function __clone() { 
		// TODO copies will have to take circular ref 
		// into account so as that data will not 
		
		// copy data, as we do not want to data values to 
		// overwritten from entity to entity
		$this->attributes    = false;
		$this->relationships = false;
		
	}

	// EXPERIMENTAL INTERFACE ---------------------------------------------- //

	/**
	 * 
	 * Specifies included relationships (default is all) for a specific query
	 * @param Entities[] $entities
	 */
	public static function includes(array $entities) { 
		
	}
	
	/**
	 * 
	 * Acts as a wrapper to find - will attept to retrieve entity, which
	 * if successful will throw into pool and return true, and if not, return false
	 * @param Mixed[] | Mixed $key
	 * @return boolean
	 */
	public static function exists($key) { 
		
	}
	

	
	/**
	 * 
	 * The purpose of this method is to an idea of underlying 
	 * data layer; will perform a find, persist if need be
	 * and return available fields
	 * @todo limit_static
	 */
	public static function inspect() { 
		// parses fields available
		$entity = new static;
		
		return static::retrieve($entity->_class->class, function() use ($entity) { 
			// pass
			return DDL\Statement\Parser::fields(DDL\Statement\Bundle::create($entity)->statement(
				'find'
			));
		});
	}	
	
	
	// CRUD METHODS -------------------------------------------------------- //
	// Provides standard crud methods - entity will only

	/**
	 * 
	 * Place entity into persistence context and flags record insertion
	 * on underlying data layer
	 */
	protected function _create() { 
		$manager = Manager\Factory::factory();
		$this->events->trigger('call', $this, [
			'name'                 => 'create',
		
			// defines the calling method, and parameter values
			'arguments'            => [ 'fields' => [ 
				$pk => [ 'values' => $key, 'type' => $this->definition->primary_key ]
			]], 
			
			// scrub arguments and determine if any data can be retrieve from
			// persistence context
			'arguments_handler'    => null,
		
			// callback handling will be defined/managed by queryset
			// instance
			'results_handler'      => null
		]);	
		
		// persist entity
		return $manager->persist($this);
	
	}
	
	/**
	 * Updates entity within manager context, and flags underlying data layer update;
	 * returns updated entity instance
	 * 
	 * @see eGloo\DataProcessing\DDL\Entity\EntityInterface.EntityInterface::update()
	 */
	protected function _update() { 
		$manager = Manager\Factory::factory();
		$entity->events->trigger('call', $this, [
			'name'              => 'update',
		
			// defines the calling method, and parameter values
			'arguments'         => [ 'fields' => [ 
				$pk => [ 'values' => $key, 'type' => $entity->definition->primary_key ]
			]], 		
			
			// 
			'arguments_handler' => null, 
			
			// we do not need a handler for results for deletion
			'results_handler'   => null,
		
		]);
		
		// merges entity into persistence context; please be
		// aware that it must already be managed
		return $manager->merge($this);
	}	
		
	/**
	 * 
	 * Retrieves entity based on primary key
	 * @param  mixed $key
	 * @return Entity | QuerySet | boolean
	 */
	public static function find($key) { 
		
		$manager = Manager\Factory::factory(); 
		$entity  = new static;
		$pk      = $entity->definition->primary_key;

		// this will allow users to pass keys as 1,2,3
		if (count(func_get_args()) > 1) {
			$key = func_get_args();	
		}
		
	
		
		// if keys is array of primary keys, hand callback to 
		if (is_array($key)) { 
			
			// trigger call to add the call "action" (find) to callback stack
			// and specify results_handler to handle 
			$entity->events->trigger('call', $entity, [
				'name'            => __FUNCTION__,
			
				// defines the calling method, and parameter values
				'arguments'       => [ 'fields' => [ 
					$pk => [ 'values' => $key, 'type' => $entity->definition->primary_key ]
				]], 
				
				// scrub arguments and determine if any data can be retrieve from
				// persistence context
				'arguments_handler'    => function($arguments) { 
					// pass - don't know how this will work yet
				},
			
				// callback handling will be defined/managed by queryset
				// instance
				'results_handler' => null,
				
				// we defer an evaluation of entity (running callback stack
				// batch) to determine first, if the entity exists in the 
				// manager, and if it 
				'defer'           => true
			]);	
			
			return new QuerySet($entity, $entity->callbacks);
		}
		
		// otherwise - retrieve singular/entity
		else {		
				
			// trigger call to add the call "action" (find) to callback stack
			// and specify results_handler to handle - it does not matter
			// if finding a singular entity or returning a queryset, the
			// find action will be deferred until evaluation request is made
			$entity->events->trigger('call', $entity, [
				'name'            => __FUNCTION__,
			
				// defines the calling method, and parameter values
				'arguments'       => [ 'fields' => [ 
					$pk => [ 'values' => $key, 'type' => $entity->definition->primary_key ]
				]], 
				
				// callback handler for results for a singular entity
				'results_handler' => function($results) use ($entity) { 
					// echo "calling results handler\n";
					
					if ($results !== false) { 
						// set attribute values 
						$entity->attributes = $results[0];
	
						return true;
					}
					
					return false;
				},
				
				// we defer an evaluation of entity (running callback stack
				// batch) to determine first, if the entity exists in the 
				// manager, and if it 
				'defer'           => true
			]);	
					
			// retrieve entity from manager, or use callback to do explicit
			// find, which is then persisted by manager and returned here
			return $manager->find($entity, $key, function() use ($entity) {				
				return $entity->valid()
					? $entity 
					: false;
			});
			
		}
		
	}
			

	
	/**
	 * 
	 * Retrieves entity based on array of field|value pair - this
	 * is not meant to be explicitly called, but rather, to be 
	 * invoked from __call method
	 * @param array $pairs
	 * @return Entity
	 */
	protected static function _findBy (array $pairs = [ ]) { 		
		$manager = Manager\Factory::factory();
		/*
		// if passed as key/value pair, then insert into pairs
		// and treat as array
		$pairs = (is_array($field)) 
			? $field
			: [ $field => $value ];
			
					$entity->events->trigger('call', $entity, [
				'name'            => __FUNCTION__,
			
				// defines the calling method, and parameter values
				'arguments'       => [ 'fields' => [ 
					$pk => [ 'values' => $key, 'type' => $entity->definition->primary_key ]
				]], 
				
				// scrub arguments and determine if any data can be retrieve from
				// persistence context
				'arguments_handler'    => function($arguments) { 
					// pass - don't know how this will work yet
				}
			
				// callback handling will be defined/managed by queryset
				// instance
				'results_handler' => null,
				
				// we defer an evaluation of entity (running callback stack
				// batch) to determine first, if the entity exists in the 
				// manager, and if it 
				'defer'           => true
			]);		
			
		//creturn new QuerySet($manager->query($this, $pairs));
		 * 
		 */
		
	}
	
	/**
     * Deletes entities from store and triggers deletion from database 
     * @param mixed | mixed[] $key
     * @return boolean
	 */
	public static function delete($key) {
		
		$entity  = new static;
		$manager = Manager\Factory::factory();
		
		// this will allow users to pass keys as 1,2,3
		if (count(func_get_args()) > 1) {
			$key = func_get_args();	
		}		

		// trigger call action, w/o deferal, which should
		// perform action immediately
		$entity->events->trigger('call', $entity, [
			'name'              => __FUNCTION__,
		
			// defines the calling method, and parameter values
			'arguments'         => [ 'fields' => [ 
				$pk => [ 'values' => $key, 'type' => $entity->definition->primary_key ]
			]], 		
			
			// 
			'arguments_handler' => null, 
			
			// we do not need a handler for results for deletion
			'results_handler'   => null,
		
		]);
		
		// signal manager to remove entity from persistence 
		// context
		// @todo need implement transactional layer
		//$manager->transaction(function($manager) use ($key) { 
		if (!is_array($key)) { 
			$key = [ $key ];	
		}
		
		foreach ($key as $key) { 
			if (($entityFound = $manager->find($entity, $key)) !== false) { 
				$manager->remove($entityFound);	
			}
		};
		
	}
	
	/**
     * Destroys entity and deletes associations as specified in relationships
	 */
	public function destroy() { 
		$manager = Manager\Factory::factory();
		
		if ($this->state_in ([ Manager::ENTITY_STATE_MANAGED, Manager::ENTITY_STATE_DETACHED ])) {
			return $manager->remove($this);
		}
		
		throw new DDL\Exception\Exception(
			'Attempting to destroy non-managed entity'
		);
	}
	

	
	/**
	 * 
	 * Calls create or update, depending on entities current state
	 */
	public function save() {
		return ($this->state == MANAGER::ENTITY_STATE_MANAGED)  
			? $this->create()
			: $this->update(); 
	}	
	

	
	
	
	
	
	// REFLECT ------------------------------------------------------------- //
	// This section is used to "reflect" upon current state of entity, and
	// its available interface and structure

	
	
	
	
	
	
	// MAGIC --------------------------------------------------------------- //
	// This sections primary concern is communicating with underlying
	// data layer
	
	/**
	 * A "magic" getter/setter - used retrieve primary_key value, but always
	 * under the pseudoname id
	 */
	public function getId() { 
		$pk = $this->definition->primary_key;
		return $this->$pk;
	}
	
	/**
	 * Proxies to attributes, relationships, and then parent object - beware,
	 * that if any attribute or relation name exists, it will take prescedence
	 * over class protecteds
	 */
	public function __get($name) { 
		
		// use reflection and static storage to retrieve list of entity properties
		try {
			return parent::__get($name);
		} catch(\Exception $ignore) { }
		
		// otherwise first check entity attributes
		if ($this->attributes && isset($this->attributes[$name])) { 
			return $this->attributes[$name];
		}
		
		// and then relationshipos
		if ($this->relationships && isset($this->relationships[$name])) { 
			return $this->relationships[$name];
		}
		
		
		// otherwise throw big fat exception
		throw new DDL\Exception\Exception(
			'INVALID get for entity property : ' . $name
		);
	}
	
	/**
	 * Sets attribute value, or entity property; in this case,
	 * entity property take prescedence over attribute value
	 * @todo limit_static
	 */
	public function __set($name, $value) { 
		// use reflection and static storage to retrieve list of entity properties
		$properties = static::retrieve('properties', function() { 
			$reflection = new \ReflectionClass($this);
			$properties = [ ];
			
			foreach($reflection->getProperties(\ReflectionProperty::IS_PROTECTED) as $property) { 
				$properties[] = $property->getName();	
			}
			
			return $properties;
		});
		
		// if $name is not a part of entity properties, then we are setting 
		// an attribute value
		if (!in_array($name, $properties)) { 
			$this->attributes[$name] = $value;
			return $this;
		}
		
		// otherwise class object implementation will handle
		// set
		return parent::__set($name, $value);
	}
	

	
	// CALLBACK ------------------------------------------------------------ // 
	// This section defines implicit callback handlers - they can be 
	// specified via inheritance/polymorphism, or via lambda on a 
	// case-by-case basis
	
	/**
	 * 
	 * Called when entity is placed into persistence context
	 * @param \Closure $lambda
	 */
	public function onPersist(\Closure $lambda = null) {
		if (!is_null($lambda)) { 
			return $lambda($this);
		}
	}
	
	/**
	 * 
	 * Call when entity is remove from persistence context
	 * @param \Closure $lambda
	 */
	public function onRemove(\Closure $lambda = null) {
		if (!is_null($lambda)) { 
			return $lambda($this);
		}
	}
	
	
	/**
	 * 
	 * Called when entity is updated within persistence context
	 * @param \Closure $lambda
	 */
	public function onRefresh(\Closure $lambda = null) {
		if (!is_null($lambda)) { 
			return $lambda($this);
		}		
	}
	
	// INTERFACES ---------------------------------------------------------- //
	
	
	
	// PRIVATE ------------------------------------------------------------- //
	
	final private function entityDefintion() { 
		
	}
	
	final private function entityInterface() {
		
	}
	
	final private function entityCallbackStack() { 

	}
	
	final private function entityEventListener() { 
		
	}

	
	// PROPERTIES ---------------------------------------------------------- // 
	
	protected $state;
	protected $events;
	protected $callbacks;
	protected $evaluated = false;	
	
	protected $attributes    = [ ];
	protected $relationships = [ ];
	
	
	/** The persistent id */
	protected $pid = null;
	
	/** Abstraction of configurable definition */
	protected $definition;
	
	/** Represents callable interface */
	private $methods = [ ]; 
}