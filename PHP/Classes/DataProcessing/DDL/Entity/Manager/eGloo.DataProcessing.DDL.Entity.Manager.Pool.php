<?php
namespace eGloo\DataProcessing\DDL\Manager;

use \eGloo\Dialect\Object;
use \eGloo\DataProcessing\DDL;
use \eGloo\DataProcessing\DDL\Entity\Entity;
use \Zend\EventManager\EventManager;


/**
 * 
 * Represents the pool of entity instance; can be accessed as array
 * @author Christian Calloway
 *
 */
class Pool extends \eGloo\Dialect\Object implements 
	 \Iterator, \ArrayAccess, \Countable { 
	
	// TODO limit should be configurable
	const LIMIT = 10;
	
	function __construct(DDL\Entity\Manager $manager) { 
		
		// point pool to its associated manager
		$this->manager = $manager;
		
		// stores entities in linked list, so as to allow for efficient unsetting
		// of values 
		$this->entities = new \SplDoublyLinkedList();
		
		// TODO pool limit should be configurable
		$this->events = new EventMananger();
		$this->events->attachAggregate(new Listener\Pool\Limit(
			self::LIMIT
		));
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
	// Can't do this?
			
		
	// StorageInterface Interface ------------------------------------------ //
	

	
	// ArrayAccess Interface ----------------------------------------------- //
	// Unfortanetly, have to explicitely call every single method as opposed
	// to conveniently bridging to underlying collection - but whatever
	
	public function offsetExists($offset) { 
		return $this->entities->offsetExists($offset);
	}
	
	public function offsetGet($offset) { 
		return $this->entities->offsetGet($offset);
	}
	
	public function offsetSet($offset, $value) { 
		// if offset is not set, then a value has been added and we
		// trigger an increment
		if (!isset($this->entities[$offset])) { 
			$this->events->trigger('increment', $this, null);
		}
				
		return $this->entities->offsetSet($offset, $value);
	}
	
	public function offsetUnset($offset) { 
		$this->events->trigger('decrement', $this, null);
		
		return $this->entities->offsetUnset($offset);
	}	
	
	// IteratorAccess Interface -------------------------------------------- //
	
	public function current() { 
		return $this->entities->current();
	}
	
	public function key() { 
		return $this->entities->key();
	}
	public function next() { 
		return $this->entities->next();
	}
	
	public function rewind() { 
		return $this->entities->rewind();
	}
	
	public function valid() { 
		return $this->entities->valid();
	}
	
	// Countable Interface ------------------------------------------------- //
	
	public function count() { 
		return $this->entities->count();
	}
	
	// Properties ---------------------------------------------------------- //
	
	protected $entities;
	protected $map = [ ];
	protected $events;
	protected $manager;
}