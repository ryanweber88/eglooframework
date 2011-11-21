<?php
namespace eGloo\DataProcessing\DDL\Entity;

use \eGloo\DataProcessing\DDL;
use \Zend\EventManager\EventManager;
use \Zend\EventManager\Event;
  
/**
 * 
 * Represents a returned set of entitities (this may be redundant since entities are
 * stored in manager as set?)
 * @author Christian Calloway
 * @todo This may be redundant 
 *
 */
class QuerySet extends \eGloo\Dialect\Object implements
	Retrieve\AggregationInterface, Retrieve\PaginationInterface, Retrieve\WindowingInterface, \Iterator, \ArrayAccess, \Countable  {
		
	const ORDER_BY_ASCENDING  = 'ASC';
	const ORDER_BY_DESCENDING = 'DESC';
		
 	function __construct(Entity $entity, DDL\Utility\CallbackCollection $stack = null) { 

 		parent::__construct();
 		
 		// set entity - each query set represents a collection of a singular
 		// type of entity, so entity represents the "type" of this queryset
 		$this->entity = $entity;
 		
 		// instantiate event manager and attach listeners 		
		$this->events = new EventManager;		
		$this->events->attachAggregate(new Listener\Callback($this->entity));
		
		
		// instantiate callback stack
		if (is_null($stack)) { 
			$stack = new DDL\Utility\CallbackStack;
		}
		
		$this->callbacks = $stack;
 	}
 	
 	/**
 	 * Provides bulk update for delete on querysets
 	 * @return boolean
 	 */
 	public function delete() { 
 		
 	}
 	
 	/**
 	 * 
 	 * Provides bulk updates for querysets
 	 * @param  string[] $fields
 	 * @return boolean
 	 */
 	public function update(array $fields = [ ]) { 
 		
 	}
 	

 	/**
 	 * 
 	 * Provides a callback query interface for entities
 	 * already in 
 	 * @param  Closure  $lambda
 	 * @return QuerySet 
 	 */
 	public function query(\Closure $lambda) { 
 		$this->events->trigger('evaluate', $this);
 		
 		if (!$this->isEmpty()) { 
	 		$set = new QuerySet;
	 		
	 		foreach ($this->entities as $entity) { 
	 			if ($lambda($entity)) { 
	 				$set[] = $entity;
	 			}
	 		}
	 		
	 		return $set;
 		}
 		
 		return false;
 	}
 	
 	public function isEmpty() { 
 		$this->events->trigger('evaluate');
 			
 		return $this->count() === 0;
 	}
 	
 	protected function evaluate() { 
 		// @todo we need to scrub ids from query if some are not needed
 		// since they already exist in persistence context
	
 		// check if callback data is valid - returned results will
 		// ALWAYS be 1+N records, or entity is invalid (empty)
 		if (($results = $this->callbacks->batch()) !== false) { 
			// middleware has ran - do we need to do anything here
 			
 		}
		
		else { 
			// initialize entities to empty fixed array
			// so that it can honor iterator, arrayaccess
			// countable implementations without having
			// to ask if entities exists for each method
			$this->entities = [ ];
		}
		
		
 	}
 	

 	


	// Retrieve Interfaces ------------------------------------------------- //
	// Methods can be chained 
 
	public function limit($amount) { 
		$this->events->trigger('call', $entity, [
			'name'       => __FUNCTION__,
		
			// defines the calling method, and parameter values
			'arguments'  => [ 'amount' => $amount ], 
				
			'definition' => function($arguments) {
				return [ 'limit' => $amount ];
			}
		]);
		
		return $set;
	}
	
	/**
	 * Specifies result offset - defers til evaluate
	 */
	public function offset($start, $end = 0) { 
		$this->events->trigger('call', $entity, [
			'name'       => __FUNCTION__,
		
			// defines the calling method, and parameter values
			'arguments'  => [ 'amount' => $amount ], 
		
			'definition' => function($arguments) {
				return [ 'start' => $start, 'end' => $end ];
			},
			
			'defer'      => true;
		]);
		
		return $this;
	}
	
	/**
	 * Prepares query sort order; order_by is specialized 
	 * 
	 * @param mixed $fields
	 */
	public function orderBy($fields) {
		
		// sanitize fields - first check if passing as multi|single parameter
		if (func_num_args() > 1) {
			$fields = func_get_args();
		}
		
		else if (!is_array($fields)) {
			$fields = [ $fields ]
		};
		
		// iterate through fields to determine
		// sort order
		foreach ($fields as $index => $field) {
			if ($field[0] == '-') {
				$fields[$index] = substr($fields, 1) . ' ' . self::ORDER_BY_DESCENDING;
			}
		}
		
		// finally, create new set, pass callbacks to and add
		// orderby to stack
		$this->events->trigger('call', $this->entity, [
			'name'       => 'order_by',
		
			// defines the calling method, and parameter values
			'arguments'  => [ 'fields' => $fields ], 
		
			'middleware' => [ new Middleware\QuerySet\OrderBy($this) ],
			
			'defer'      =>  true
		]);
		
		return $this;	
	}
	
	
	public function groupBy(array $fields) {
		$set = new QuerySet($this->callbacks);
		$set->events->trigger('call', $entity, [
			'name'       => __FUNCTION__,
		
			// defines the calling method, and parameter values
			'arguments'  => [ 'fields' => $fields ], 
		
			'definition' => function($arguments) {	
				return [ 'group_by' => $arguments['fields'] ];
			}
		]);
		
		return $set;
	}
		
 	// ArrayAccess Interface ----------------------------------------------- //

	
	public function offsetExists($offset) { 
		$this->events->trigger('evaluate', $this, null);
				
		return $this->entities->offsetExists($offset);
	}
	
	public function offsetGet($offset) { 
		$this->events->trigger('evaluate', $this);
				
		return $this->entities->offsetGet($offset);
	}
	
	public function offsetSet($offset, $value) { 
		$this->events->trigger('evaluate', $this, null);
				
		// if offset is not set, then a value has been added and we
		// trigger an increment
		$this->entities[$offset] = $value;
	}
	
	public function offsetUnset($offset) { 
		$this->events->trigger('evaluate',  $this, null);		
		$this->events->trigger('decrement', $this, null);
		
		return $this->entities->offsetUnset($offset);
	}	
	
	// Iterator Interface -------------------------------------------- //
	
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
		$this->events->trigger('evaluate', $this);
		
		return $this->entities->count();
	} 	
 	

	
	// Properties ---------------------------------------------------------- //
	
	protected $callbacks;
	protected $entities;
	protected $events;
	protected $evaluated = false;
	private   $entity;
	
}