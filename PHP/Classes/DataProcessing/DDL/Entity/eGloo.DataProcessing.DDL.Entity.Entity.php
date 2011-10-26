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
abstract class Entity extends \eGloo\Dialect\Object implements 
	EvaluationInterface, Retrieve\AggregationInterface, Retrieve\PaginationInterface, Retrieve\WindowingInterface, Retrieve\CommitInterface { 
	
	// TRAITS -------------------------------------------------------------- //
	
	//use \eGloo\Utilities\EventManager\StatTrait {
		//StatTrait::init as initStatTrait;
	//};
	
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

		
		// SET ENTITY STATE
		$this->state = self::STATE_NEW;
		
		// BUILD ENTITY DEFINITION
		// Defined in entities xml
		try { 
			$this->definition = Definition::create($this);
		}
		catch (\eGloo\Dialect\Exception $pass) { 
			throw $pass;
		}
		
		
		// ENTITY/STATEMENT INTERFACE
		// TODO abstract adding of interfaces 		
		foreach(DDL\Statement\Bundle::create($this)->names as $name) {	
			$this->methods[$name] = function($arguments) use ($name) {
				$method = new Method($this, $name);
				return $method->call($arguments);
			};
		}

		
		// ENTITY EVENT LISTENERS
		$this->callbacks = new DDL\Utility\CallbackStack;
		$this->events    = new EventManager;
		
		// TODO refactor
		$this->events->attachAggregate(new Listener\Generic([
			// listens for evaluate trigger
			'evaluate' => function(Event $event) { 
				// evaluates entity for substance (is this
				// a fake entity or what not eh)
				$this->evaluate();
				
				// false return indicates that listener will only respond once
				return false;
			}, 
			
			// listens for call trigger
			'call'     => function(Event $event) {
			
				// specifiy callback here?
				$params = $event->getParams();
				
				$this->callbacks->push(new DDL\Utility\Callback(
					$params['name'], function($passThrough) use ($params) { 
						return $this->methods[$params['name']]($params['arguments']); 
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
		

		
		
	}
	
	/**
	 * 
	 * Provides developer initialization for entity bean, 
	 * where-in construct should  
	 * 
	 */
	protected function init() { }	
	
		
	/**
	 * 
	 * By default, will print entity information - should be overriden to
	 * provide acceptable stdout values (eg. Product.name) 
	 * @throws \eGloo\Dialect\Exception
	 */
	public function __toString() { 
		
	}
	
	/**
	 * 
	 * 
	 */
	public function valid() { 
		$this->events->trigger('evaluate');
		
		return $this->data instanceof Data;
	}
		
	protected function evaluate() { 
		// evaluates entity if it has not yet been
		// "touched" by underlying data layer
		
		// run callback batch
		$this->callbacks->batch();
	}
	
	/**
	 * 
	 * Only a setter is provided for data
	 * @param Data $data
	 */
	public function data(Data $data) { 
		$this->data = $data;
	}

	
	// ENTITY CONTROLLER --------------------------------------------------- //
	// These methods act as a controller/router to entities crud methods - 
	// this is required as lazy-loading approach uses callbacks aggressively
	// which are triggered from events - returning data from an eventlistener
	// is a bad approach from design perspective


	
	
	// CRUD METHODS -------------------------------------------------------- //
	// Provides standard crud methods - entity will only

	/**
	 * 
	 * Place entity into persistence context 
	 * @throws \eGloo\Dialect\Exception
	 */
	public function create() { 
		try { 
			return DDL\Manager\ManagerFactory::factory()
				->persist($this);
		}
		catch(\eGloo\Dialect\Exception $pass) { 
			throw $pass;
		}
		
	
	}
		
	/**
	 * 
	 * Retrieves entity based on primary key
	 * @param  mixed $key
	 * @return Entity | QuerySet | boolean
	 */
	public static function find($key) { 
		
		$entity = new static;
		$entity->events->trigger('call', $entity, [
			'name'       => __FUNCTION__,
		
			// defines the calling method, and parameter values
			'arguments'  => [ 'key' => $key ], 
		
			'definition' => null
		]);

		if (is_array($key)) { 
			// TODO figure out how queryset will be initialized
			$set  = new QuerySet;

			return $set;
		}
		
		// otherwise - retrieve singular 
		else {			
			// retrieve entity from manager, or use callback to do explicit
			// find, which is then persisted by manager and returned here
			return $manager->find($entity, $key, function() use ($entity) { 
				$entity->valid()
					? $entity 
					: false;
			});
			
		}
		
	}
			

	
	/**
	 * 
	 * Retrieves entity based on field|value pair
	 * @param string | array  $field
	 * @param string |integer $value
	 * @return Entity | Set
	 */
	public static function findBy ($field, $value = null) { 
		//$this->events->trigger('called', $this, [ 'name' => __FUNCTION__ ]);
		
		$manager = &DDL\Manager\ManagerFactory::factory();
		
		// if passed as key/value pair, then insert into pairs
		// and treat as array
		$pairs = (is_array($field)) 
			? $field
			: [ $field => $value ];
			
		//creturn new QuerySet($manager->query($this, $pairs));
		
	}
	

	
	/**
	 * 
	 * Calls create or update, depending on entities current state
	 */
	public static function save() {
		$this->events->trigger('called', $this, [ 'name' => __FUNCTION__ ]);	
		$this->events->trigger('update', $this);
		
		return ($this->state == self::STATE_NEW)  
			? $this->create()
			: $this->update(); 
	}	
	
	/**
	 * Updates entity within manager context, and flags underlying data layer update;
	 * returns updated entity instance
	 * 
	 * @see eGloo\DataProcessing\DDL\Entity\EntityInterface.EntityInterface::update()
	 */
	public function update() { 
		$this->events->trigger('called', $this, [ 'name' => __FUNCTION__ ]);	
		$this->events->trigger('update', $this);
		
		$manager = &DDL\Manager\ManagerFactory::factory();
		return $manager->merge($this);
	}
	
	/**
	 * Removes entity from manager context and flags underlying data layer delete
	 * @see eGloo\DataProcessing\DDL\Entity\EntityInterface.EntityInterface::delete()
	 */
	public function delete() {
		$this->events->trigger('called', $this, [ 'name' => __FUNCTION__ ]);	
		$this->events->trigger('delete', $this); 
		
		$manager = &DDL\Manager\ManagerFactory::factory();
		return $manager->remove($this);
	}
	
	// Retrieve Interfaces --------------------------------------------------- //
	// Enforced by implementing the Retrieve interfaces, provides ability
	// to chain on results - an explicit commit call must be made after
	// specifying chain methods
	
	// TODO determine django-esque method to do lazy loading without
	// commit call
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\DataProcessing\DDL\Entity\Retrieve.PaginationInterface::limit()
	 */
	public function limit($amount) { 
		
	}
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\DataProcessing\DDL\Entity\Retrieve.PaginationInterface::offset()
	 */
	public function offset($start, $end = 0) { 
		
	}
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\DataProcessing\DDL\Entity\Retrieve.WindowingInterface::groupBy()
	 */
	public function groupBy(array $fields) {
		
	}
	

	
	
	
	
	// REFLECT ------------------------------------------------------------- //
	// This section is used to "reflect" upon current state of entity, and
	// its available interface and structure

	
	
	
	
	
	
	// MAGIC --------------------------------------------------------------- //
	// This sections primary concern is communicating with underlying
	// data class
	
	public function __get($name) { 
		// make sure this entity is evaluated prior to retrieval
		$this->events->trigger('evaluate');
	}
	
	public function __set($name, $value) { }
	

	
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
	



	
	// PROPERTIES ---------------------------------------------------------- // 
	
	protected $data;
	protected $state;
	protected $events;
	protected $callbacks;	
	
	
	/** The persistent id */
	protected $pid = -1;
	
	/** Abstraction of configurable definition */
	protected $definition;
	
	
	private $methods = [ ]; 
}