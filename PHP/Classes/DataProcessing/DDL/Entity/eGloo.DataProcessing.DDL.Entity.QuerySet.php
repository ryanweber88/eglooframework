<?php
namespace eGloo\DataProcessing\DDL\Entity;
use \eGloo\DataProcessing\DDL;
  
/**
 * 
 * Represents a returned set of entitities (this may be redundant since entities are
 * stored in manager as set?)
 * @author Christian Calloway
 * @todo This may be redundant 
 *
 */
class QuerySet extends \eGloo\Dialect\Object implements
	EvaluationInterface, Retieve\AggregationInterface, Retrieve\PaginationInterface, Retrieve\WindowingInterface, \Iterator, \ArrayAccess, \Countable  {

 	function __construct(DDL\Utility\CallbackStack $stack) { 
 		parent::__construct();
 		
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
		$this->callbacks = $stack;
 	}
 	
 	public function valid() { 
 		$this->events->trigger('evaluate');
 		
 		return ($this->count() > 0);
 	}
 	
 	/**
 	 * 
 	 * Provides a callback query interface for entities
 	 * already in 
 	 * @param  Closure  $lambda
 	 * @return QuerySet 
 	 */
 	public function query(\Closure $lambda) { 
 		
 		$set = new QuerySet;
 		
 		foreach ($this->entities as $entity) { 
 			if ($entity->valid() && $lambda($entity)) { 
 				$set[] = $entity;
 			}
 		}
 		
 		return $set;
 	}
 	
 	public function isEmpty() { 
 		$this->trigger('evaluate', $this, null);
 		
 		return $this->count() === 0;
 	}
 	
 	protected function evaluate() { 
 		
 		// run batch on callback stack
 		$this->callbacks->batch();
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
	
	public function offset($amount) { 
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
		$this->events->trigger('evaluate', $this, null);
		
		return $this->entities->count();
	} 	
 	

	
	// Properties ---------------------------------------------------------- //
	
	protected $callbacks;
	protected $entities = [ ];
	protected $events;
	
}