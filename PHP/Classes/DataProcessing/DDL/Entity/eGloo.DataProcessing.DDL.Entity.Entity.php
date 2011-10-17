<?php
namespace eGloo\DataProcessing\DDL\Entity;

use eGloo\DataProcessing\DDL\Entity\EntityInterface\EntityInterface;

use Zend\EventManager\Event;
use Zend\EventManager\EventCollection;
use Zend\EventManager\HandlerAggregate;    
/**
 * 
 * Represents the structure of data and is responsible for:
 *  - providing the base interface for all ddl objects
 *  - providing the structure of an entity (what it is composed of)
 *  - 
 * @author Christian Calloway
 *
 */
abstract class Entity extends \eGloo\Dialect\Object implements EntityInterface { 
	
	function __construct() { 
		// call initialization method
		$this->init();
		
		// initialize data container
		$this->data = new Data($this);
	}
	
	/**
	 * 
	 * Provides developer initialization for entity bean, 
	 * where-in construct should  
	 * 
	 */
	public function init() { }
	
	// CRUD METHODS -------------------------------------------------------- //
	// TODO determine if these should be class or instance variables
	
	public static function create() { }
	
	/**
	 * 
	 * Provides retrieve by primary key functionality
	 * @param mixed $key
	 */
	public static function find($key) { 
		// if key is array, then we are retrieving a queryset 
		if (is_array($key)) { 
			
		}
		
		// otherwise - retrieve singular data point
		else { 
			
		}
	}
	
	public function update() { }
	public function delete() { }
	
	// MAGIC --------------------------------------------------------------- //
	// This sections primary concern is communicating with underlying
	// data class
	
	public function __get($name) { }
	public function __set($name, $value) { }
	
	public function __call($name, $arguments) { 
		
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
	
	// PROPERTIES ---------------------------------------------------------- // 
	
	protected $data;
	 
}