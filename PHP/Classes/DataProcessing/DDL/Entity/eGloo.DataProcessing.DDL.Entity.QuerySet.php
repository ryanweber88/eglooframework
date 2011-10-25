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
	Retieve\AggregationInterface, Retrieve\PaginationInterface, Retrieve\WindowingInterface, \Iterator, \ArrayAccess, \Countable  {

 	function __construct(array $entities = null) { 
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
		$this->callbacks = new DDL\Utility\CallbackStack;
 	}
 	
 	public function isEmpty() { 
 		$this->trigger('evaluate', $this, null);
 		
 		return $this->count() === 0;
 	}
 	
 	protected function evaluate() { 
 		// responsible for evaluating queryset 
 	}

	// Retrieve Interfaces ------------------------------------------------- //
	// Methods can be chained 
 
	public function limit($amount) { 
		$this->events->trigger('call', $this, [
			'arguments'  => [ 'name' => __FUNCTION__, 'amount' => $amount ],
			'definition' => function($amount) { 
				// TODO supply what this method actually does
			}
		]);
		
	}
	
	public function offset($amount) { 
		$this->events->trigger('call', $this, [
			'arguments'  => [ 'name' => __FUNCTION__, 'amount' => $amount ],
			'definition' => function($amount) { 
				// TODO supply what this method actually does
			}
		]);
	}
	
	public function orderBy(array $fields) { 
		$this->events->trigger('call', $this, [
			'arguments'  => [ 'name' => __FUNCTION__, 'fields' => $fields ],
			'definition' => function($amount) { 
				// TODO supply what this method actually does
			}
		]);	
	}
	
	public function groupBy(array $fields) {
		$this->events->trigger('call', $this, [
			'arguments'  => [ 'name' => __FUNCTION__, 'fields' => $fields ],
			'definition' => function($amount) { 
				// TODO supply what this method actually does
			}
		]);
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