<?php
namespace eGloo\DataProcessing\DDL\Entity;

  
/**
 * 
 * Represents a returned set of entitities (this may be redundant since entities are
 * stored in manager as set?)
 * @author Christian Calloway
 * @todo This may be redundant 
 *
 */
class QuerySet extends \eGloo\Dialect\Object implements
	Retieve\AggregationInterface, Retrieve\PaginationInterface, Retrieve\WindowingInterface, \Iterator, \ArrayAccess, \Countable  {

 	function __construct(array $entities = null) { 
 		parent::__construct();
 		
 		// instantiate event manager and attach listeners
		$this->events = new EventManager;
		
		//$this->events->attachAggregate(new Listener\Logger);
		$this->events->attachAggregate(new Listener\Evaluation);
		
		if (!is_null($entities)) { 
			// TODO 	
		}
 	}
 	
 	public function isEmpty() { 
 		$this->trigger('evaluate', $this, null);
 		
 		return $this->count() === 0;
 	}
 	
	
 	// ArrayAccess Interface ----------------------------------------------- //

	
	public function offsetExists($offset) { 
		return $this->entities->offsetExists($offset);
	}
	
	public function offsetGet($offset) { 
		return $this->entities->offsetGet($offset);
	}
	
	public function offsetSet($offset, $value) { 
		// if offset is not set, then a value has been added and we
		// trigger an increment
		$this->entities[$offset] = $value;
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
 	
 	// Retrieve Interfaces ------------------------------------------------- //
	
 
	public function limit($amount) { 
		
	}
	
	public function offset($amount) { 
		
	}
	
	public function groupBy(array $fields) {
		
	}
	
	// Properties ---------------------------------------------------------- //
	
	protected $entities = [ ];
	protected $events;
	protected $evaluated = false;
}