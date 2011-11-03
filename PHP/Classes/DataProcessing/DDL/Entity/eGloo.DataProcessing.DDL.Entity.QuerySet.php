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

 	function __construct(Entity $entity, DDL\Utility\CallbackStack $stack = null) { 
 		parent::__construct();
 		
 		// set entity - each query set represents a collection of a singular
 		// type of entity, so entity represents the "type" of this queryset
 		$this->entity = $entity;
 	
 		
 		// instantiate event manager and attach listeners
		$this->events = new EventManager;		
		$this->events->attachAggregate(new Listener\Generic([
			// listens for evaluate trigger
			'evaluate' => function(Event $event) { 
				// evaluates entity for substance (is this
				// a fake entity or what not eh)
				$this->evaluate();
				
				// false return indicates that listener will only respond once
				// or is removed after initial run
				return false;
			}, 
			
			// listens for call trigger
			'call'     => function(Event $event) {
				
				$this->callbacks->push(new DDL\Utility\Callback(
					$event->getParams()['name'], $event->getParams()['definition'], $event->getParams()['arguments']
				));
				
				// short-circuit listens on this aggregate
				return true;
			}
		]));
		
		
		// instantiate callback stack
		if (is_null($stack)) { 
			$stack = new DDL\Utility\CallbackStack;
		}
		
		$this->callbacks = $stack;
 	}
 	

 	
 	/**
 	 * 
 	 * Provides a callback query interface for entities
 	 * already in 
 	 * @param  Closure  $lambda
 	 * @return QuerySet 
 	 */
 	public function query(\Closure $lambda) { 
 		$this->events->trigger('evaluate', $this, null);
 		
 		if (!$this->isEmpty()) { 
	 		$set = new QuerySet;
	 		
	 		foreach ($this->entities as $entity) { 
	 			if ($entity->valid() && $lambda($entity)) { 
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
 		

 		// check if callback data is valid - returned results will
 		// ALWAYS be 1+N records, or entity is invalid (empty)
 		if (($data = $this->callbacks->batch()) !== false) { 
			$manager = &DDL\Manager\ManagerFactory::factory();
 			
 			// TODO write some measure of intelligence in the number
 			// of entities built on an evaluation
 			$this->entities = new \SplFixedArray(count($data));
 			
 			foreach ($data as $record) {
 				
 				$this->entities[] = $manager->find(
 					$this->entity->_class, 
 					$record[$this->entity->definition->primaryKeyName], function() use ($record) { 
 						$entity = clone $this->entity;
 						$entity->data = new Data(
 							$this->entity, $record
 						);
 						
 						return $entity;
 					}
 				); 				
 			}
		}
		
		else { 
			// initialize entities to empty fixed array
			// so that it can honor iterator, arrayaccess
			// countable implementations without having
			// to ask if entities exists for each method
			$this->entities = new \SplFixedArray(0);
		}
		
		
 	}
 	


	// Retrieve Interfaces ------------------------------------------------- //
	// Methods can be chained 
 
	public function limit($amount) { 
		$set = new QuerySet($this->callbacks);
		$set->events->trigger('call', $entity, [
			'name'       => __FUNCTION__,
		
			// defines the calling method, and parameter values
			'arguments'  => [ 'amount' => $amount ], 
		
			'definition' => function($arguments) {
		
				return [ 'limit' => $arguments['amount'] ];
			}
		]);
		
		return $set;
	}
	
	public function offset($start, $end = 0) { 
		$set = new QuerySet($this->callbacks);
		$set->events->trigger('call', $entity, [
			'name'       => __FUNCTION__,
		
			// defines the calling method, and parameter values
			'arguments'  => [ 'amount' => $amount ], 
		
			'definition' => function($arguments) {
				return [ 'offset' => $arguments['amount'] ];
			}
		]);
		
		return $set;
	}
	
	public function orderBy(array $fields) { 
		$set = new QuerySet($this->callbacks);
		$set->events->trigger('call', $entity, [
			'name'       => __FUNCTION__,
		
			// defines the calling method, and parameter values
			'arguments'  => [ 'fields' => $fields ], 
		
			'definition' => function($arguments) {
				return [ 'order_by' => $arguments['fields'] ];
			}
		]);
		
		return $set;	
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
		$this->events->trigger('evaluate', $this, null);
				
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
		$this->events->trigger('evaluate', $this, null);
		
		return $this->entities->count();
	} 	
 	

	
	// Properties ---------------------------------------------------------- //
	
	protected $callbacks;
	protected $entities;
	protected $events;
	private   $entity;
	
}