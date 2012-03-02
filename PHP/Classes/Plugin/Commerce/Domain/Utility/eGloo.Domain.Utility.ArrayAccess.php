<?php
namespace eGloo\Domain\Utility;

use \eGloo\Dialect\Nil,
    \eGloo\Domain;


/**
 * ArrayAccess allows Domain\Model to be accessed as array
 * @TODO namespace is fine, but location needs to changed as it isn't reflective
 * at all
 */
class ArrayAccess extends \eGloo\Utilities\ArrayAccess {
	
	// this is here only for idiomatic reasons
	const EMPTY_STRING = "";
	
	/**
	 * Override parent constructor to provide backward referencing in the
	 * event that we need ask questions in regards to a previous (in
	 * the recursion chain) ArrayAccess. 
	 */
	function __construct($object, ArrayAccess $reference = null) {
		parent::__construct($object);
		
		// capture reference - beware the cyclical implications
		if (!is_null($reference)) { 
			$this->reference = $reference;
		}
	}
	
	/**
	 * Overrides utility arrayaccess to return empty string - this
	 * is done because the primary use of this class is to be used 
	 * in smarty templates - the absence of value will simply return
	 * an empty string as opposed to throwing exception if value
	 * does not exist
	 */
	public function offsetGet($offset) {
		// manage exceptions to delegation - there should be very few
		// of they could potentially produce unexpected results that
		// are very difficult to track
		//$exceptions = array();
		
		// in the case of evaluate, we want to to look at our reference, 
		// should it exist and determine if what its value should be
		if ($offset == 'evaluate' && !is_null($this->reference)) {
			return $this->reference->evaluate();
		}
		

		try {
			$result = parent::offsetGet($offset);
		}
		
		// the only point of catching exception is to ensure that
		// result is absolute false
		catch(\Exception $ignore) {
			//echo $ignore->getMessage();exit;
			$result = null;
		}
		
		if ( !is_null($result) ) {
			
		
			// check if result delegate is instanceof of set; in which case
			// we directly return the set, because we want to work directly
			// on it in most cases
			if ( is_object($result) &&  
					 $result->delegated instanceof Domain\Model\Set ) {
				
				// since this will be used in the context of template, we iterate
				// through set, and wrap each model with arrayaccess, so it can
				// be used with array notation (in smarty)
				$set = array();
				
				foreach( $result->delegated as $key => $value ) {
					$set[] = new static($result->delegated[$key]);
				}
				
				return $set;
			}
			
			// set a backward reference for any needed 'backward' evaluations
			if ( $result instanceof static ) {
				$result->reference = $this;
			}
		
		
			return $result;
		}
		
		// if our result is null, we return an ArrayAccess instance, which
		// delegates to a Nil class instance - we do this because there
		// are many instances where simply returning null will cause
		// an exception to be thrown - in this case, we are returning
		// an object that will produce an empty result when stringified
				
		return new static(new Nil, $this);

			
	}
	

	
	/**
	 * This is our catch/exit to the idea of recursion through continuously
	 * rewrapping in ArrayAccess
	 */
	public function __toString() {
		if (method_exists($this->delegated, '__toString')) {
			try {
				return $this->delegated->__toString();
			}
			catch(\Exception $ignore) {
				echo get_class($this->delegated); exit;
			}
		}
		
		return false;
		
		// unfortunately we have to do a return of the exception, because a raised
		// exception in __toString does not return the 
		return 'Failed to stringify ArrayAccess representation of model ' . get_class($this->delegated);
		
		throw new \Exception(
			'Failed to stringify ArrayAccess representation of model ' . get_class($this->delegated)		
		);
	}
	
	public function offsetExists($offset) {
		return true;
	}
	
	/**
	 * Responsible for evaluating the value of current delegated object;
	 * wherein using instance of type Nil is fine for areas of template
	 * where automatic string cast is done, it is done for evaluation
	 * sections like if statements; this is meant to provide a bridge
	 * to exactly that problem
	 */
	protected function evaluate() {
		
		// if delegated is of type Nil, it means that ArrayAccess is purposefully wrapping
		// a null value, in which case, our evaluation is null
		if ($this->delegated instanceof Nil) {
			return null;
		}
		
		if ( $this->delegated instanceof \ArrayAccess && count($this->delegated) === 0 ) {
			return null;
		}
		
		return true;
	}	
	
	private $reference;
}