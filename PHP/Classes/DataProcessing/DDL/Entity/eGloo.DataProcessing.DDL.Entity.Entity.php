<?php
namespace eGloo\DataProcessing\DDL\Entity;

use eGloo\DataProcessing\DDL;
use \Zend\EventManager\EventManager;
   

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
	Retrieve\AggregationInterface, Retrieve\PaginationInterface, Retrieve\WindowingInterface, Retrieve\CommitInterface { 
	
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
		
		// call initialization method
		$this->init();

		
		// set state
		$this->state = self::STATE_NEW;
		
		// retrieve entity definition/caveats from entities
		// descriptor file
		try { 
			$this->definition = Definition::factory($this);
		}
		catch (\eGloo\Dialect\Exception $pass) { 
			throw $pass;
		}
		
		
		// TODO read/determine interface (explicit from directory structure)
		// use statement package
		// all we need is the interface - not anything else in regards to
		// statements, which should be handled by manager
		
		$this->definition->methods = $this->parseMethods(DDl\Statement\Group::statements(
			$this
		));
		
		// instantiate event manager and attach listeners
		$this->events = new EventManager;
		
		//$this->events->attachAggregate(new Listener\Logger);
		$this->events->attachAggregate(new Listener\Call);
		$this->events->attachAggregate(new Listener\Evaluation);
		//$this->events->attachAggregate(new Listener\Stat);
		
		// initialize stat trait
		//$this->initStatTrait();
		
		// initialize data container
		// TODO initialization of data container could be pushed till 
		// data is actually needed - right now it is dependant upon
		// above initialization which i don't like
		// $this->data = new Data($this);
		
		
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
	
	
	
	
	// CRUD METHODS -------------------------------------------------------- //
	// Provides standard crud methods - entity will onlyh 
	
	public  function create() { 
		$manager = &DDL\Manager\ManagerFactory::factory();
		$this->events->trigger('called', $this, [ 'name' => __FUNCTION__ ]);	
		
		// TODO check that entity already exists and throw exception
		return $manager->persist($this);
		
	}
		
	/**
	 * 
	 * Retrieves entity based on primary key
	 * @param  mixed $key
	 * @return Entity | QuerySet 
	 */
	public static function find($key) { 
		
		$manager = &DDL\Manager\ManagerFactory::factory();
		$entity  = new static;
		$entity->events->trigger('called', $entity, [ 'name' => __FUNCTION__ ]);
		
		
		// if key is array, then we are retrieving a queryset 
		if (isset($entity->methods[__FUNCTION__])) { 
			if (is_array($key)) { 
				$set  = new QuerySet;
				$keys = $key;
				
				foreach ($keys as $key) { 
					if (($entity = $manager->find($this, $key)) !== false) { 
						$set[] = $entity;
					}
				}
				
				return $set;
			}
			
			// otherwise - retrieve singular 
			else { 
				// perform method call if entity is not found
				$entity = $manager->find($entity, $key, function() { 
					return DDL\Statement\Builder::build($entity, $entity->methods[__FUNCTION__]->call([
						new DDL\Statement\Argument('key', $key) 
					]));
				});
			}
		}
		
		throw \eGloo\Dialect\Excetion(
			__FUNCTION__ . ' statement is not defined'
		);
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
	
	public function __get($name) { }
	public function __set($name, $value) { }
	
	public function &__call($name, $arguments) { 
		// check that unnamed method falls in the entities method signature
		// pool, as defined by its statement group
		if (!is_null(($method = $this->methods[$name]))) { 
			
			// trigger that the method has been requested
			$this->events->trigger('called', $this, [ 'name' => $name ]);	
			
			// map method signature to correct entity method call
			// TODO are there any more use cases outside of find*
		}
		
		
		
		// call class object magic method
		parent::__call($name, $arguments);
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
	
	
	public function evaluated() { 
		// used to determine if entity has been evaluated yet
		return (is_null($this->data));	
	}
	
	// PRIVATE ------------------------------------------------------------- //
	
	

	
	final private function parseMethods(array $files = [ ]) { 
		// parses statement files available to this entity
		// TODO parse actual files, including comments, parameters, etc
		$methods = [ ];
		
		foreach ($files as $file) { 
			$method = new Method($this);
			$method->name = \eGloo\IO\File::basename($file);
			
			$methods[$method->name] = $method;
		}
		
		return $methods;
	}

	
	// PROPERTIES ---------------------------------------------------------- // 
	
	protected $data;
	protected $state;
	protected $called = [ ];
	protected $events;
	protected $evaluated = false;
	
	
	/** Represents the method/operation with which to build entity */
	protected $operation;
	
	/** The persistent id */
	protected $pid = -1;
	
	/** Abstraction of configurable definition */
	protected $definition;
	 
}