<?php
namespace eGloo\DataProcessing\DDL\Entity;

use eGloo\DataProcessing\DDL;
use Zend\EventManager\Event;
use Zend\EventManager\EventCollection;
use Zend\EventManager\HandlerAggregate;    

/**
 * 
 * Represents the structure of data and is responsible for:
 *  - providing the base interface for all ddl objects
 *  - providing the structure of an entity (what it is composed of)
 *  - communicates transparently with entity manager
 * @author Christian Calloway
 *
 */
abstract class Entity extends \eGloo\Dialect\Object implements EntityInterface { 
	
	// TRAITS -------------------------------------------------------------- //
	
	use \eGloo\Utilities\StatTrait;
	
	// CONST --------------------------------------------------------------- //
	
	const STATE_NIL      = 0x00;  // Entity does not, or no longer exists
	const STATE_NEW      = 0x01;  // Entity is brand new, but not yet managed
	const STATE_MANAGED  = 0x02;  // Entity is managed in persistence context
	const STATE_REMOVED  = 0x03;  // Entity has been removed from database
	const STATE_DETACHED = 0x04;  // Entity has been serialized to another tier
	
	
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
			$this->definition = Definition::factory($this);
		}
		catch (\eGloo\Dialect\Exception $pass) { 
			throw $pass;
		}
		
		var_export($this->definition); exit;
		
		
		
		// TODO read/determine interface (explicit from directory structure)
		// use statement package
		$this->interface = DDl\Statement\Group::interfaces($this);
		
		
		// initialize stat trait
		$this->initStatTrait();
		
		
	}
	
	public function __toString() { 
		return get_class($this);
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
		$manager = &DDL\Manager\ManagerFactory::factory();
		
		// TODO check that entity already exists and throw exception
		return $manager->persist($this);
		
	}
		
	/**
	 * 
	 * Provides retrieve by primary key functionality within
	 * manager context
	 * @param mixed $key
	 */
	public static function find($key) { 
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
	 * Calls create or update, depending on entities current state
	 */
	public static function save() {
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
		$manager = &DDL\Manager\ManagerFactory::factory();
		return $manager->merge($this);
	}
	
	/**
	 * Removes entity from manager context and flags underlying data layer delete
	 * @see eGloo\DataProcessing\DDL\Entity\EntityInterface.EntityInterface::delete()
	 */
	public function delete() { 
		$manager = &DDL\Manager\ManagerFactory::factory();
		return $manager->remove($this);
	}
	
	
	
	// REFLECT ------------------------------------------------------------- //
	// This section is used to "reflect" upon current state of entity, and
	// its available interface and structure
	
	/**
	 * 
	 * Used to determine structure of underlying data/table 
	 */
	public function members() { 
		
	}
	
	/**
	 * 
	 * Used to determine callable methods or interface provided
	 * to this class
	 */
	public static function methods() {
		
	}
	
	/**
	 * 
	 * Used to determine relationships their associated types to
	 * current data object
	 */
	public static function relationships() { 
		// tracks xml definition of object to determine relationships
	}
	
	
	
	
	
	
	// MAGIC --------------------------------------------------------------- //
	// This sections primary concern is communicating with underlying
	// data class
	
	public function __get($name) { }
	public function __set($name, $value) { }
	
	public function &__call($name, $arguments) { 
		// essentially servces at the gateway by which crud
		// methods are called
		
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
	
	// FINAL --------------------------------------------------------------- // 
	

	
	// PROPERTIES ---------------------------------------------------------- // 
	
	protected $data;
	protected $state;
	
	
	protected $id;
	
	/** The persistence id */
	protected $pid;
	
	/** Defines callable methods */
	protected static $interface     = [ ];
	
	
	protected static $relationships = [ ];
	 
}