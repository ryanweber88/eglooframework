<?php
namespace eGloo\DataProcessing\DDL\Manager;

use \eGloo\Dialect\Object;
use \eGloo\DataProcessing\DDL;
use \eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Represents the pool of entity instance; can be accessed as array
 * @author Christian Calloway
 *
 */
class Pool extends \eGloo\Dialect\Object implements 
	\eGloo\Utilities\StorageInterface,  \Iterator, \ArrayAccess, \Countable { 
	
	use \eGloo\Utilities\BridgeTrait;
	
	function __construct() { 
		
		// stores entities in linked list, so as to allow for efficient unsetting
		// of values 
		$this->entities = new \SplDoublyLinkedList();
		
		// attempt to bridge entities
		$this->bridge($this->entities);
		
		// TODO attach listeners to pool
	}
	
	// Concrete Interface -------------------------------------------------- //
	
	/**
	 * 
	 * Like the idea of "draining" a pool and
	 * a small shoutout to objective-c
	 */
	public function drain() { 
		// try to dealloc memory
		unset($this->entities);
		
		// re-insantiate structure
		$this->entities = new \SplDoublyLinkedList();
	}
	
	// Bridge Entities ----------------------------------------------------- //
	
	protected function bridge() { }
	
		
	// StorageInterface Interface ------------------------------------------ //
	
	public function attach(Object $object) { 
			
	}
	
	public function remove(Object $object) { }
	public function retrieve(Object $object) { }
	public function clear() { }
	public function count() { }
	
	// ArrayAccess Interface ----------------------------------------------- //
	// Unfortanetly, have to explicitely call every single method as opposed
	// to conveniently bridging to underlying collection - but whatever
	
	public function offsetExists($offset) { 
		
	}
	
	public function offsetGet($offset) { }
	public function offsetSet($offset, $value) { }
	public function offsetUnset($offset) { }	
	
	// IteratorAccess Interface -------------------------------------------- //
	
	public function current() { }
	public function key() { }
	public function next() { }
	public function rewind() { }
	public function valid() { }
	
	// Countable Interface ------------------------------------------------- //
	
	public function count() { }
	
	protected $entities;
	protected $map = [ ];
}