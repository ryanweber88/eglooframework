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
		
 	function __construct(Entity $entity, DDL\Utility\CallbackStack $stack = null) { 

 		parent::__construct();
 		
 		// set entity - each query set represents a collection of a singular
 		// type of entity, so entity represents the "type" of this queryset
 		$this->entity = $entity;
 		
 		
 		// instantiate event manager and attach listeners 		
		$this->events = new EventManager;		
		$this->events->attachAggregate(new Listener\Callback($this->entity));
		$this->events->attachAggregate(new Listener\Listener($this->entity, [
			// listens for evaluate trigger
			'evaluate' => function(Event $event) { 
				// evaluates entity for substance (is this
				// a fake entity or what not eh)

				if (is_null($event->getTarget())) {
					throw new DDL\Exception\Exception(
						'Must provide a target to evaluate event'
					);
				}
				
				$event->getTarget()->evaluate();				
				// false return indicates that listener will only respond once
				// or is removed after initial run
				return false;
			}
			
		]));
			
		
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
 		$this->events->trigger('evaluate', $this);
 			
 		return $this->count() === 0;
 	}
 	
 	protected function evaluate() { 
		$manager = Manager\Factory::factory();
		
 		// @todo we need to scrub ids from query if some are not needed
 		// since they already exist in persistence context
		
 		// check if callback data is valid - returned results will
 		// ALWAYS be 1+N records, or entity is invalid (empty)
 		if (($results = $this->callbacks->batch()) !== false) { 
 			// middleware has ran - do we need to do anything here
			// TODO write some measure of intelligence in the number
			// of entities built on an evaluation
			$this->entities = new \SplFixedArray(count($results));
			$counter = 0;
					 			
			// iterate through results - remember that results can be a
			// combination of records (as returned by the database) and
			// entities, from persistence 			
			foreach ($results as $index => $mixed) {
				
				// result is an entity, which was gleaned from persistence context by 
				// a middleware component			
				if (is_object($mixed) && $mixed instanceof Entity) { 
					$this->entities[$counter++] = $mixed;
				}
				
				// otherwise result is coming from database, and we do search of persistence
				// context for entity 
				else {
					
					$record = &$mixed;
					
	 				$this->entities[$counter++] = $manager->find(
	 					$this->entity, 
	 					$record[$this->entity->definition->primary_key], function() use ($record) { 
	 						// instantiate entity
	 						//$entity = clone $this->entity;
	 						//$entityClass = $this->entity->_class->class;
	 						//$entity = new $entityClass;
	 						$entity = $this->entity->_class->instantiate(); 
	 						//$entity->attributes = $record;
	 							 						
	 						
	 						// run entity evaluation, as it must be evaluated prior to
	 						// being placed into persistence
	 						// @todo need a way to moreso elegantly push a callback
	 						// entity and keep callback structure
	 						
	 						$entity->callbacks->push(new DDL\Utility\Callback('attributes', function(array $pass = [ ]) use ($record) { 
	 							// entity must be passed multidimensional array when using injection/passthrough method
	 							return [ $record ];
	 						}));

	 						// returning entity to manager to handle persistence - call
	 						// on valid will trigger evaluation of entity
	 						if ($entity->valid()) {
	 							return $entity;
	 						}
	 						
	 						// entity should be valid if it has reached this point - if not, 
	 						// throw an exception to that fact
	 						throw new DDL\Exception\Exception(
	 							'Entity is not valid in QuerySet evaluation'
	 						);
	 						
	 					}
	 				); 	

	 				// now do side associations
	 				// @todo abstract this into something nicer than associative
	 				// array 
	 				/*
	 				if (isset($results['look_for']) && is_array($results['look_for'])) { 
		 				foreach ($results['look_for'] as $fieldName => $composite) { 
		 					if (isset($record[$fieldName])) { 
		 						foreach ($composite['values'] as $value) {
	
		 							// if we find a match, map a new association, unset value
		 							// from looks for, and break loop
		 							if ($record[$fieldName] == $value) {
		 								$entities = $manager->map
		 										->with($this->entity->definition->primary_key)
		 										->with($record[$this->entity->definition->primary_key])
		 										->retrieves($this->entity);
		 										
		 								$manager->map->with($fieldName)->with($value)->refers($entities);
		 								
		 								// unset value as we should not look for again
		 								unset($results['looks_for'][$fieldName]);
		 								
		 								break;
		 							}
		 						}
		 					}
		 				}
	 				}
	 				*/
	 				
				}
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
	 
 	/**
 	 * (non-PHPdoc)
 	 * @see eGloo\DataProcessing\DDL\Entity\Retrieve.PaginationInterface::limit()
 	 */
	public function limit($amount) { 
		
		// @todo load from configuration
		$adapter = DDL\Statement\Adadpter\SQL::alias();
				
		$this->events->trigger('call', $this, [
			'name'       => __FUNCTION__,
		
			// defines the calling method, and parameter values
			'arguments'  => $amount,
		
			'defer'      => true
				
		]);
		
		return $this;
	}
	
	/**
	 * Specifies result offset - defers til evaluate
	 */
	public function offset($start) { 		
		
		// @todo load from configuration
		$adapter = DDL\Statement\Adadpter\SQL::alias();
				
		$this->events->trigger('call', $this, [
			'name'       => __FUNCTION__,
		
			// defines the calling method, and parameter values
			'arguments'  => $start, 

			
			'defer'      => true
		]);
		
		return $this;
	}
	
	/**
	 * Prepares query sort order; order_by is specialized 
	 * 
	 * @param mixed $fields
	 */
	public function orderBy($fields) {
		
		// @todo load from configuration
		$adapter = DDL\Statement\Adadpter\SQL::alias();
		
		// if fields are passed as 'field', 'field2'
		// convert to array
		if (!is_array($fields)) {
			$fields = func_get_args();
		}
		
		$fields = $adapter::processOrderBy($fields);
		
		// iterate through fields to determine
		// sort order of field using -+ syntax
		// @todo we need engine specific parser to specify
		// such ideas as ASC/DESC, syntax issues like 
		// backticks, etc
		foreach ($fields as $index => $field) {
			
			/*$order = '';
			
			// if order has been specified, then make note of order
			// and remove specifying character
			if (in_array($field[0], ['-', '+'])) {
				$order = $field[0] == '-'
					? self::ORDER_BY_DESCENDING
					: self::ORDER_BY_ASCENDING;
					
				$fields[$index] = substr($field, 1);
			}
			
			// @temp add backtick
			// @todo replace with engine syntax domain parser
			$fields[$index] = "{$fields[$index]} $order";
			*/
		}
		
		// finally, create new set, pass callbacks to and add
		// orderby to stack
		$this->events->trigger('call', $this, [
			'name'       => 'order_by',
		
			// defines the calling method, and parameter values
			'arguments'  => $fields , 
			
			'defer'      =>  true
		]);
		
		return $this;	
	}
	
	
	public function groupBy($fields) {

		// @todo load from configuration
		$adapter = DDL\Statement\Adadpter\SQL::alias();		
		
		// convert to array if passed as singular parameters
		if (!is_array($fields)) {
			$fields = func_get_args();
		}
				
		$this->events->trigger('call', $this, [
			'name'       => __FUNCTION__,
		
			// defines the calling method, and parameter values
			'arguments'  => [ 'fields' => $fields ], 
		
			'defer'      => true
		]);
		
		return $this;
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
		$this->events->trigger('evaluate', $this);
		
		return $this->entities->current();
	}
	
	public function key() { 
		$this->events->trigger('evaluate', $this);
		
		return $this->entities->key();
	}
	public function next() {
		$this->events->trigger('evaluate', $this);
		
		return $this->entities->next();
	}
	
	public function rewind() { 
		$this->events->trigger('evaluate', $this);
		
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
	protected $entity;
	
}