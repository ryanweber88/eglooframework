<?php
namespace eGloo\DataProcessing\DDL\Entity;


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
	
	
	function __construct($mixed) { 
		parent::__construct();
		
		// determine constructor argument - from the constructor
		// @TODO use a strack trace to determine if calling entity
		// construct from within an entity, in which case, we need
		// a short circuit on evaluation
		$evaluate = is_bool($mixed) && $mixed === true;
		
		
		
		//echo "entity::construct on " . get_class($this) . "\n";
		
		// CALL INITILIZATION METHOD
		$this->init();
		$this->initStatTrait();
		
		// @todo don't know if meta init should be here
		// or wether it should even be used
		$this->meta = new Meta($this);
		
		
		// SET ENTITY STATE
		$this->state = Manager::ENTITY_STATE_NEW;
		
		// BUILD ENTITY DEFINITION AND INSTANTIATE META 
		// Defined in entities xml
		//$this->entityDefinition();
		
		try { 
			// definitions are mapped to static storage, since an entities
			// definition will not likely change from request to request,
			// but will need to be limited in stateful environment
			// @todo limit_static
			// @todo limit_cache
			$this->definition = static::retrieve(DDL\Utility\Entity::key($this), function() { 
				return Definition::create($this);	
			});
		}
		catch (\eGloo\Dialect\Exception $pass) { 
			throw $pass;
		}
				
		
		
		// entity meta is used to track runtime information about an
		// instance
		//$this->meta = new Meta($this);
				
							
		// ENTITY/STATEMENT INTERFACE
		// TODO abstract adding of interfaces 
		//$this->entityInterface();
		
		// ENTITY CALLBACKS INITIALIZATION
		// $this->entityCallbackStack();
		$this->callbacks = new DDL\Utility\CallbackStack;
		
		foreach($this->initCallbacks() as $callback) { 
			$this->callbacks->push($callback);
		}
		
		// ENTITY EVENT LISTENERS
		//$this->entityEventListeners();
		$this->events = new EventManager;
			
		
		// Callback listener is responsible for evaluating all
		// triggers to call and evaluate 
		$this->events->attachAggregate(new Listener\Meta($this));
		$this->events->attachAggregate(new Listener\Callback($this));
		
		// @todo this is horribly ugly, but currently dealing with infinite
		// callbacks when creating entities within the context of entity evaluation
		// (construction, initCalblbacks, evaluation)
		if ($evaluate) { 
			$this->events->attachAggregate(new Listener\Generic($this, [
				// listens for evaluate trigger
				'evaluate' => function(Event $event) { 
					// evaluates entity for substance (is this
					// a fake entity or what not eh)
					//echo "calling evaluate\n";		
					if (is_null($event->getTarget())) {
						throw new DDL\Exception\Exception(
							"A target has not been provided to evaluate event on reciever " . get_class($this)
						);
					}		
					
					$event->getTarget()->evaluate();
					
					// false return indicates that listener will only respond once
					// or is removed after initial run
					//return false;
					//return true;
				}
				
			]));
		}			
		
		// STATIC 
				
		// add columns to meta object
		//echo get_class($this); exit('exit on entity.construct');
		

		// fire 'created' event
		$this->events->trigger('created', $this);
		
		// if passed argument is a hash or lambda/block
		// then constructor argument is meant to initialize
		// entity and create instance on database - our __set
		// magic method will ensure that improper fields (fields that do not
		// belong to entity), CANNOT be set
		
		if (!is_null($mixed = func_get_arg(0))) {
			try {  
				if (is_callable($block = $mixed)) {
					
					// presumambly, our block will provide initializers
					// for entity values
					$block($this);
				}
				
				else if (is_array($hash = $mixed)) {
					
					foreach($hash as $field => $value) {
						$this->$field = $value;
					}
					
				}
			}
			
			// here we catch and rethrow so we know exception
			// was caused during entity initialization
			catch(DDL\Exception\Exception $e) {
				throw $e;
			}
		}
		
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
		// !!An entity must be evaluated (either from database
		// or from persistence context) prior to initcallbacks!!
		//echo 'entity::initCallbacks on ' . get_class($this) . " with id ". $this->_singleton->id . "\n";
		
		return array_merge(
			
			 
			[ 
			  // defines meta columns
				  
			  new DDL\Utility\Callback(
				'meta_columns', function(array $pass = [ ]) {   
			  
			  		//echo 'entity::initCallbacks::meta_columns on ' . get_class($this) . " with id ". $this->_singleton->id . "\n";

					if (isset($pass[0])) { 
				 		foreach(static::columns() as $column) {
				 			
				 			// Gaurente pass interface, and retrieve column value - 
				 			// this is then used to pass to meta to create meta
				 			// columns
				 			$record = \eGloo\Utilities\ArrayAccess::create($pass[0]);
										 			
				 			$this->meta->addColumn(
				 				$column->name, $record[$column->name]
				 			);
				 		}
				  
				  		return $pass;
					}
					
					

					// throw an exception if the entity has not been identified in 
					// datastore or persistence context
					throw new DDL\Exception\Exception(
						'Entity has not yet been evaluated; this must be done prior to initCallbacks'
					);					
				}
			  ),
				
			  // defines relationship initialization 
			  new DDL\Utility\Callback(
				'relationships', function(array $pass = [ ]) { 
			  
			  		//echo 'entity::initCallbacks::relationships on ' . get_class($this) . " with id ". $this->_singleton->id . "\n";
			  
					
					//echo "running relationships callback\n";
					//var_export($pass);
					// @todo change this - need a way to determine if entity is valid without
					// explicit checks on attributes - current valid method is cyclical and
					// will perform an evaluate 
					if (isset($pass[0])) {


						// because passed in data can either be a "fully realized" entity
						// or a simple record, we provide an ArrayAccess interface to, and
						// then grab the primary key
				 		$record          = \eGloo\Utilities\ArrayAccess::create($pass[0]);
						$primaryKeyValue = $record[$this->definition->primary_key];
											
		
						// evaluating object existence - these need to be seperated somehow
						// evaluate entity relationships
						foreach($this->definition->relationships as $relationship) { 

							
							// create entity representation of relationship
							// @todo use factory once issue with callbacks is fixed
							$entityRelation = Factory::factory(
								"{$this->_class->namespace}\\{$relationship->to}", false
							);
							//$entityRelationship = new $class;
						
							//$class = new \eGloo\Dialect\_Class("{$this->_class->namespace}\\{$relationship->to}");
							//$entityRelation = $class->instantiate([true]);
							
							//echo "{$this->_class->namespace}\\{$relationship->to}"; exit;
							
							
							//echo "$relationship\n";
							//echo $this->uid; exit;
							
							// if has-many relationship, then a queryset is instantiated with a single 
							// callback on stack (a call to find_xxx statement)
							if ($relationship->hasMany()) {							
								 
								$set = new QuerySet($entityRelation);
								$set->events->trigger('call', $set, [
									'name'            => 'find_' . strtolower($relationship->to),
								
									'method'          => DDL\Entity\MethodGateway::method(
										$this, 'find_' . strtolower($relationship->to)
									),
								
									// defines the calling method, and parameter values
									'arguments'       => [ 'fields' => [ $this->definition->primary_key => [ 'values' => [ $primaryKeyValue ] ]]],
									
									// scrub arguments and determine if any data can be retrieve from
									// persistence context
									// here we define middleware, which acts layer between arguments to
									// db calls
									'middleware'      => [ 
										new Middleware\QuerySet\Find($set) 
									],
									
									// we defer an evaluation of entity (running callback stack
									// batch) to determine first, if the entity exists in the 
									// manager, and if it 
									'defer'           => true
								]);
								
								$this->relationships[(string)$relationship] = $set;
	
								/*
								$this->relationships[(string)$relationship] = new QuerySet(
									$entityRelation, new DDL\Utility\CallbackStack([ new DDL\Utility\Callback('init', function() use ($relationship) {
										
										$pk = $this->definition->primary_key;
										 
										// @todo name conventions will be have to be centralized (find_) around configurable, or 
										// at least managed from some outside perspective - find_ could change at anytime. 
										
										// we know that a method call on an entity is using a foreign key
										// @todo add exception handling
										return MethodGateway::method($this, 'find_' . strtolower($relationship->to))->call([
											'fields' => [ 
												$pk => [ 'values' => [ $this->id ] ]
											]
										]);  
										
									})])
									
								);
								*/
							}
							
							else {
								$this->relationships[(string)$relationship] = $entityRelation;
							}
							
						}
											
						return $pass;
					}
					
					// throw an exception if the entity has not been identified in 
					// datastore or persistence context
					throw new DDL\Exception\Exception(
						'Entity has not yet been evaluated; this must be done prior to initCallbacks'
					);
					
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
		$this->events->trigger('evaluate', $this);
		
		// Data shoud ALWAYS be either valid or absolute false
		return ($this->attributes !== false);
	}
		
	protected function evaluate() { 
		// @todo is this method needed anymore?
		
		// evaluate is responsible for running callback stack
		// and acting upon resulting data
				
		//echo "calling eval on entity\n";
				
		// evaluates entity if it has not yet been
		// "touched" by underlying data layer
		// callbacks->batch must always return mutlidim
		// array for singular entity evaluation
		
		// @todo inspect data to determine evaluation performed
		
		
		if (($results = $this->callbacks->batch()) !== false) {
			$this->attributes = $results[0];
			
			// mark initial values in meta object
			foreach($this->attributes as $name => $value) {
				$this->meta->addColumn($name, $value);
			}
		}
		
				
	}
	

	public function __clone() { 
		// @todo FUNDAMENTAL PROBLEMS WITH CLONE - WILL NEED TO
		// TAKE ANOTHER LOOK
		
		// TODO copies will have to take circular ref 
		// into account so as that data will not 
		
		// copy data, as we do not want to data values to 
		// overwritten from entity to entity
		//$this->attributes    = false;
		
		// relationships must be clone separately
		$relationships = [ ];
		
		foreach($this->relationships as $key => $relationship) {
			$relationships[$key] = clone $relationship;
		}
		
		$this->relationships = $relationships;
		$this->callbacks     = clone $this->callbacks;
		
	}

	// EXPERIMENTAL INTERFACE ---------------------------------------------- //
	
	/**
	 * Returns list of available columns, or domain of columns within which
	 * to work
	 * @return Column[]
	 * @tod    limit_static
	 */
	public static function columns() {
		
		//$class = get_called_class();
		
		$entity = new static(false);
		$key   =  DDL\Utility\Entity::key($entity) . "/" . __METHOD__;
				
		// @todo limit_static
		return static::retrieve($key, function() use ($entity) {
			// call all method, and iterate through returned entity
			// attributes to build columns
			// @todo columns shouldn't be based on 
			$columns = [ ];
			
			// @todo unfortunately set creation via all
			// method causes an infinite loop - this will have to
			// be done via methodgateway in the meantime
			//$set     = $class::all()->limit(1);
			$results = MethodGateway::method($entity, 'all')->call(
				[ 'limit' => 1 ]
			);
						
			
			//if (!$set->isEmpty()) { 
			if (isset($results[0])) {
				//$attributes = $set[0]->attributes;
				//$attributes = $results[0];
				 
				foreach(array_keys($results[0]) as $name) {
					$columns[] = new Column($name);	
				};
				
				// now check columns against insert statement, this will define
				// which columns are required
				// @todo use a statement specifically garnered to what is required
				$requiredStatement = DDL\Statement\Bundle::retrieve($entity)->statement(
					'insert'
				);
				
				// @todo regular expression is pretty stupid here - beef up once we
				// figure out best approach
				foreach($columns as $index => $column) {
					if (preg_match("/{$column->name}/is", $requiredStatement)) {
						$columns[$index]->required = true;
					}
				}
				
				return $columns;
			}
			
			throw new DDL\Exception\Exception(
				'Unfortunately this method relies on at least one record being '    .
				'available in order to determine columns - this behavior will have '.
				'to be changed!' 
			);
		});
		
	}
	
	/**
	 * Similar to columns, but returns hash with column
	 * name as key, and value as column object
	 * @return Column[]
	 * @tod    limit_static
	 */
	public static function columnsHash() {

		// we need a reference to class, as calling static method
		// within static::retrieve defaults to base entity class
		$class = get_called_class();
		$key   = "$class/" . __METHOD__;
				
		// @todo limit_static
		return static::retrieve($key, function() use ($class) {

			$columns = [ ];
			
			foreach($class::columns() as $column) {
				$columns[$column->name] = new Column($column->name);	
			};
			
			return $columns;
	
		});
	}

	/**
	 * Return a list of changed fields, or false if no changes
	 * @return string[] | boolean
	 */
	public function changed() {
		
		$changed = [ ];
		
		foreach($this->meta->columns as $column) {
			if ($column->changed()) {
				$changed[] = $column->name;
			}
		}
		
		return count($changed) > 0
			? $changed 
			: false;
	}
	
	/**
	 * Returns list of changed fields (including history) or false
	 * if no changes
	 * @return string[] | boolean
	 */
	public function changes() {
		
		$changes = [ ];
		
		foreach($this->meta->columns as $column) {
			if ($column->changed()) {
				$changes[$column->name] = $column->changes;
			}
		}
	}
	
	/**
	 * Simple boolean questions as to whether object is dirty
	 * @return boolean
	 */
	public function isChanged() {
		return count($this->changed()) > 0;
	}
	
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
	

	
	
	
	// CRUD METHODS -------------------------------------------------------- //
	// Provides standard crud methods - entity will only

	/**
	 * Retrieves all records associated to entity object - take note that
	 * entirety of table will be loaded into memory
	 */
	public static function all() {
		//echo "entity::all on " . get_called_class() . "\n";
		
		
		$manager = Manager\Factory::factory(); 
		$entity  = new static(false);
		$pk      = $entity->definition->primary_key;
		
		
		$set = new QuerySet($entity);
		$set->events->trigger('call', $set, [
			'name'            => __FUNCTION__,
		
			// defines the calling method, and parameter values
			// @todo shouldn't have to specify fields if empty - right
			// now it currently fits into middleware codebase
			'arguments'       => [ 'fields' => [ ] ], 
			
			// here we define middleware, which acts layer between arguments to
			// db calls
			'middleware'      => [ 
				new Middleware\QuerySet\Find($set) 
			],
			
			// we defer an evaluation of entity (running callback stack
			// batch) to determine first, if the entity exists in the 
			// manager, and if it 
			'defer'           => true
		]);	
			
		return $set;		
	}
	
	/**
	 * 
	 * Place entity into persistence context and flags record insertion
	 * on underlying data layer
	 */
	public static function create() {
		
		$entity  = new static(false);
		$manager = Manager\Factory::factory();
				
		$this->events->trigger('call', $this, [
			'name'                 => 'create',
		
			// defines the calling method, and parameter values
			'arguments'            => [ 'fields' => array_merge([ 
				$pk => [ 'values' => $key ]
			]),
			
		]);	
		
		// persist entity
		return $manager->persist($this);
	
	}
	
	protected function 
	
	/**
	 * Updates entity within manager context, and flags underlying data layer update;
	 * returns updated entity instance
	 * 
	 * @see eGloo\DataProcessing\DDL\Entity\EntityInterface.EntityInterface::update()
	 */
	protected function update() { 
		$manager = Manager\Factory::factory();
		$pk      = $this->definition->primary_key;
		
		
		$this->events->trigger('call', $this, [
			'name'              => 'update',
		
			// defines the calling method, and parameter values
			'arguments'         => [ 
				'fields' => [ 
					$pk => [ 'values' => $this->id ]
				]
			], 
			
			// here we define middleware, which acts layer between arguments to
			// db calls
			'middleware'      => [ 
				new Middleware\Entity\Save($this) 
			],
		
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

		$entity =  new static(false);
		$manager = Manager\Factory::factory(); 
		$pk      = $entity->definition->primary_key;
		
	
		// this will allow users to pass keys as 1,2,3
		if (count(func_get_args()) > 1) {
			$key = func_get_args();	
		}
		
		// if keys is array of primary keys, hand callback to 
		if (is_array($key)) { 
			
			
			// trigger call to add the call "action" (find) to callback stack
			// and specify results_handler to handle 
			// @todo alot of this work should fall on queryset side, but moreso convenient to
			// do here
			$set = new QuerySet($entity);
			$set->events->trigger('call', $set, [
				'name'            => __FUNCTION__,
			
				// defines the calling method, and parameter values
				'arguments'       => [ 'fields' => [ 
					$pk => [ 'values' => $key ]
				]], 
				
				// here we define middleware, which acts layer between arguments to
				// db calls
				'middleware'      => [ 
					new Middleware\QuerySet\Find($set) 
				],
				
				// we defer an evaluation of entity (running callback stack
				// batch) to determine first, if the entity exists in the 
				// manager, and if it 
				'defer'           => true
			]);	
				
			return $set;
		}
		
		// otherwise - retrieve singular/entity
		else {		

			$entity = new static;

			
			// retrieve entity from manager, or use callback to do explicit
			// find, which is then persisted by manager and returned here
			return $manager->find($entity, $key, function() use ($entity, $key) {	
				
				$pk = $entity->definition->primary_key;
				
				// trigger call to add the call "action" (find) to callback stack
				// and specify results_handler to handle - it does not matter
				// if finding a singular entity or returning a queryset, the
				// find action will be deferred until evaluation request is made
				$entity->events->trigger('call', $entity, [
					'name'              => 'find',
				
					// defines the calling method, and parameter values
					'arguments'         => [ 'fields' => [ 
						$pk => [ 'values' => [ $key ], 'type' => $pk ]
					]], 
					
					'middleware'        => [
						new Middleware\Entity\Find($entity)
					],
					
					// we defer an evaluation of entity (running callback stack
					// batch) to determine first, if the entity exists in the 
					// manager, and if it 
					'defer'           => true
				]);			
						
				return $entity->valid()
					? $entity 
					: false;
			});
			
		}
		
	}
	
	/**
	 * Retrieves a batched queryset of all records for the given entity, and
	 * pass batch size and lambda function
	 */
	public static function findEach($mixed, $lambda = null) {
		$manager = Manager\Factory::factory(); 
		$entity  = new static;
		$pk      = $entity->definition->primary_key;
		
		// determine if batch size has been specified
		if (is_callable($mixed)) {
			$lamba = &$mixed;
		}
		
		$set = new QuerySet($entity);
		$set->events->trigger('call', $set, [
			'name'            => __FUNCTION__,
		
			// defines the calling method, and parameter values
			// @todo shouldn't have to specify fields if empty - right
			// now it currently fits into middleware codebase
			'arguments'       => [ 'fields' => [ ] ], 
			
			// here we define middleware, which acts layer between arguments to
			// db calls
			'middleware'      => [ 
				new Middleware\QuerySet\Find($set) 
			],
			
			// we defer an evaluation of entity (running callback stack
			// batch) to determine first, if the entity exists in the 
			// manager, and if it 
			'defer'           => true
		]);	
			
		return $set;	
	}
			

	
	/**
	 * 
	 * Retrieves entity based on array of field|value pair - this
	 * is not meant to be explicitly called (which is impossible outside
	 * of scope), but rather, to be 
	 * invoked from __call method
	 * @param array $pairs
	 * @return Entity
	 */
	protected function _findBy ($methodName, array $arguments) { 
		$manager = Manager\Factory::factory();		
		$set     = new QuerySet($this);		
		
		$set->events->trigger('call', $set, [
			'name'            => $methodName,
		
			// defines the calling method, and parameter values
			'arguments'       => [ 'fields' => $arguments ], 
			
			// scrub arguments and determine if any data can be retrieve from
			// persistence context
			// here we define middleware, which acts layer between arguments to
			// db calls
			'middleware'      => [ 
				new Middleware\QuerySet\Find($set) 
			],
			
			// we defer an evaluation of entity (running callback stack
			// batch) to determine first, if the entity exists in the 
			// manager, and if it 
			'defer'           => true
		]);	

				
		return $set;
		
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
			? $this->update()
			: $this->create(); 
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
	public function id() { 
		$pk = $this->definition->primary_key;
		return $this->$pk;
	}
	
	/**
	 * Proxies to attributes, relationships, and then parent object - beware,
	 * that if any attribute or relation name exists, it will take prescedence
	 * over class protecteds
	 */
	public function __get($name) {
		
		// @todo define this behavior at object level 
		//$singletonMethodName = "get_$name";
				
		try {
			return parent::__get($name);
		} catch(\Exception $ignore) { 
			//echo "exception ignore is {$ignore->getMessage()}";
		}

			
		// check if referring explicitly to attributes or relationshipo
		foreach([$this->attributes, $this->relationships] as $hash) {
			if (is_array($hash) && isset($hash[$name])) {
				return $hash[$name];
			}
		}
		
		// check entity-specific magic method invocation
		
		// check for individual field update
		if (preg_match('/^(.+?)_(changed|change|was|changes)$/', $name, $match)) {
			$field  =  $match[1];
			$changes = $this->meta->changes;
			
			if (isset($changes[$field])) { 
				$column = $changes[$field];
				
				// switch between actions
				switch($match[2]) {
					
					// if changed 
					case 'changed' : case 'was' :
						return $column->{$match[2]}();
						break;
						
					case 'change'  : case 'changes' :
						return $column->changes;
						break;
				}
			}
		}	
				
		// if we have reached this point, throw an entity-specific
		// exception
		throw new DDL\Exception\Exception(
			"Cannot find property $name on reciever " . get_class($this)
		);
		
		
	}
	
	/**
	 * Sets attribute value, or entity property; in this case,
	 * entity attributes take prescedence over property value
	 * @todo limit_static
	 * @todo How to limit conflicts between attributes and
	 * entity properties, given dynamic read/write nature?
	 */
	public function __set($name, $value) { 		
				
		// throw exception if property exists in
		// both entity and attributes
		// @todo need a methodology to clear collisions
	
		if ($this->propertyExists($name) && in_array($name, array_keys(static::columnsHash()))) {
			throw new DDL\Exception\Exception(
				'There is a collision in entity and attributes property - this must be fixed!'
			);
		}
		
		// try parent set - ignore exception as we can continue to do
		// further processing
		try {
			return parent::__set($name, $value);
		} catch (\Exception $ignore) { }		
			
		// if $name is not a part of entity properties, then we are setting 
		// an attribute value
		if (in_array($name, array_keys(static::columnsHash()))) { 
			
			// fire change event and note change history
			$this->events->trigger('modified', $this, [
				'fields' => [ $name => $value ]
			]);
			
			// set attribute value and return self
			$this->attributes[$name] = $value;
			return $this;
		}
		
		
		// if we have reached this point, throw an entity-specific
		// exception
		throw new DDL\Exception\Exception(
			"Cannot set property $name on reciever " . get_class($this)
		);

	}
	
	/**
	 * Provides magic methods to attributes and relationships - 
	 * if those fail, then onto self
	 * @todo this is a fairly expensive routine - figure out a way
	 * to cutdown
	 */
	public function __call($name, $arguments) {
		
		// iterate through attributes, relationships and finally
		// self - it is important to note the order as that 
		// dictates precedence 
		//foreach([$this->attributes, $this->relationships] as $container) {
			
			//if (($mixed = $this->callMagicOn($name, $arguments, $container)) !== false) {
			//	return $mixed;
			//}
		//}
		
		// otherwise we bail out to object method
		return parent::__call($name, $arguments);
	}
	
	/**
	 * Serves as an interface to find_by_xxx methods
	 */
	public static function __callStatic($name, $dynamicArguments) {

		$entity     = new static;
		$methodName = $name;
		$name       = strtolower($name);
				
		// @todo this should be simpler if/when following convention 
		if (strpos($name, 'find') !== false && (strpos($name, 'by') !== false || strpos($name, 'like') !== false)) {
							
			// parse field name by stripping known entities
			
			$whatsLeft = $name;
			$delimiter = '.';
			$arguments = [ ];
			
			foreach(['find','by','and','or', '_', 'like'] as $lookFor) { 
				$whatsLeft = str_ireplace($lookFor, $delimiter, $whatsLeft);
			}
			
			
			// explode what remains, not counting empty
			$fields = preg_split('/\./', $whatsLeft, null, PREG_SPLIT_NO_EMPTY);
			
			// massage arguments into array, if passed as series of scalars
			if (!is_array(current($dynamicArguments))) {
				// if asking find_by_name_and_title (name, title) where name
				// title and passed via scalar
				if (count($fields) > 1) {
					$counter = 0;
					
					foreach($fields as $ignore) {
						$dynamicArguments[$counter++] = [ $dynamicArguments ];	
					}
				}
				
				else {
					$dynamicArguments = [ $dynamicArguments ];
				}
			}
			
			// check that argument count is correct
			if (count($fields) === 1 && !is_array(current($dynamicArguments))) {
				$dynamicArguments = [ $dynamicArguments ];
			}
			
			if (count($dynamicArguments) == count($fields)) {
				
				foreach ($fields as $name) {
					$arguments[$name] = [
						'values' =>  array_shift($dynamicArguments) 
					];
				}
								
				$reflection = new \ReflectionMethod($entity, '_findBy');
				$reflection->setAccessible(true);
				
				
								
				return $reflection->invokeArgs(
					$entity, [$methodName, $arguments]
				);
			}
			
			// make sure arguments are congruent with number of fields specified
			// in the case of more than one field, either an equal number of arguments
			// which may be of type array or scalar must be passed
							
			else {
				throw new DDL\Exception\Exception(
					"Illegal Argument Exception : passed illegal argument collection\n". var_export(
						$dynamicArguments, true
					)
				);
			}
			
		}
		
		throw new DDL\Exception\Exception(
			'Illegal Method Call : cannot find ' . $name
		);
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
	protected $meta;
	
	/** @todo remove this */
	protected $evaluated = false;	
	
	protected $columns       = [ ];
	protected $attributes    = [ ];
	protected $relationships = [ ];
	
	
	/** The persistent id */
	protected $pid = null;
	
	/** Abstraction of configurable definition */
	protected $definition;
	
}