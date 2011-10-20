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
	Retieve\AggregationInterface, Retrieve\PaginationInterface, Retrieve\WindowingInterface, Retrieve\CommitInterface { 
	
	// TRAITS -------------------------------------------------------------- //
	
	use \eGloo\Utilities\StatTrait
	
	// CONST --------------------------------------------------------------- //
	
	//const STATE_NIL      = 0x00;  // Entity does not, or no longer exists
	const STATE_NEW      = 0x01;  // Entity is brand new, but not yet managed
	const STATE_MANAGED  = 0x02;  // Entity is managed in persistence context
	const STATE_REMOVED  = 0x03;  // Entity has persistence context, but is marked for removal from db
	const STATE_DETACHED = 0x04;  // Entity has been serialized to another tier, has not persistence context
	
	
	// INITIALIZTAION  ----------------------------------------------------- //
	
	
	function __construct() { 
		parent::__construct();
		
		// call initialization method
		$this->init();
		
		// initialize data container
		$this->data = new Data($this);
		
		// set state
		$this->state = self::STATE_NEW;
		
		// retrieve entity definition/caveats from entities
		// descriptor file
		try { 
			$definition = Definition::factory($this);
		}
		catch (\eGloo\Dialect\Exception $pass) { 
			throw $pass;
		}
		
		// set cardinality
		$this->cardinality = $definition->relationships;
				
		
		// TODO read/determine interface (explicit from directory structure)
		// use statement package
		// all we need is the interface - not anything else in regards to
		// statements, which should be handled by manager
		
		$this->methods = $this->parseMethods(DDl\Statement\Group::files($this));
		
		// instantiate event manager and attach listeners
		$this->events = new EventManager;
		//$this->events->attachAggregate(new Listener\Logger);
		$this->events->attachAggregate(new Listener\Called);
		//$this->events->attachAggregate(new Listener\Stat);
		
		// initialize stat trait
		$this->initStatTrait();
		
		
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
	 * 
	 * Provides developer initialization for entity bean, 
	 * where-in construct should  
	 * 
	 */
	protected function init() { }
	
	
	
	
	// CRUD METHODS -------------------------------------------------------- //
	// Provides standard crud methods - entity will onlyh 
	
	public  function create() { 
		$this->events->trigger('called', $this, [ 'name' = > __FUNCTION__ ]);	
		$manager = &DDL\Manager\ManagerFactory::factory();
		
		// TODO check that entity already exists and throw exception
		return $manager->persist($this);
		
	}
		
	/**
	 * 
	 * Retrieves entity based on primary key
	 * @param  mixed $key
	 * @return Entity | Set 
	 */
	public static function find($key) { 
		$this->events->trigger('called', $this, [ 'name' = > __FUNCTION__ ]);	
		$manager = &DDL\Manager\ManagerFactory::factory();
		
		// if key is array, then we are retrieving a queryset 
		if (is_array($key)) { 
			$entities = [ ];
			
			// don't worry, key is evaluated once, so loop 
			// proceeds normally
			foreach ($key as $key) { 
				$entities[] = $manager->retrieve($this, $key);
			}
			
			return $entities;
		}
		
		// otherwise - retrieve singular 
		else { 
			return $manager->retrieve($this, $key);
		}
	}
	
	/**
	 * 
	 * Retrieves entity based on field|value pair
	 * @param string         $field
	 * @param string|integer $key
	 * @return Entity | Set
	 */
	public static function find_by ($field, $value) { 
		$this->events->trigger('called', $this, [ 'name' = > __FUNCTION__ ]);	
		
		
	}
	

	
	/**
	 * 
	 * Calls create or update, depending on entities current state
	 */
	public static function save() {
		$this->events->trigger('called', $this, [ 'name' = > __FUNCTION__ ]);	
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
		$this->events->trigger('called', $this, [ 'name' = > __FUNCTION__ ]);	
		$this->events->trigger('update', $this);
		
		$manager = &DDL\Manager\ManagerFactory::factory();
		return $manager->merge($this);
	}
	
	/**
	 * Removes entity from manager context and flags underlying data layer delete
	 * @see eGloo\DataProcessing\DDL\Entity\EntityInterface.EntityInterface::delete()
	 */
	public function delete() {
		$this->events->trigger('called', $this, [ 'name' = > __FUNCTION__ ]);	
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
	
	public function limit($amount) { 
		
	}
	
	public function offset($amount) { 
		
	}
	
	public function groupBy(array $fields) {
		
	}
	
	public function commit() { 
		
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
		if (($method = $this->methodSignature($name))) { 
			
			// trigger that the method has been requested
			$this->events->trigger('called', $this, [ 'name' = > $name ]);	
			
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
	
	// PRIVATE ------------------------------------------------------------- //
	
	

	
	final private function parseMethods(array $files = [ ]) { 
		// parses statement files available to this entity
		// TODO parse actual files, including comments, parameters, etc
		$methods = [ ];
		
		foreach ($files as $file) { 
			$method = new MethodSignature($this);
			$method->name = \eGloo\IO\File::basename($file);
			
			$methods[] = $method;
		}
		
		return $methods;
	}
	
	final private function methodSignature($name) { 
		// determines if name is part of available
		// entity method signatures
		foreach($this->methods as $signature) { 
			if ($signature->name == strlower($name)) { 
				return $signature;
			}
		}
		
		return false;
	}
	
	// PROPERTIES ---------------------------------------------------------- // 
	
	protected $data;
	protected $state;
	protected $called = [ ];
	protected $events;
	
	/** The assumed primary key */
	protected $id;
	
	/** Defines callable methods */
	protected static $methods;
	
	/** Defines relationships */
	protected static $cardinality;
	 
}