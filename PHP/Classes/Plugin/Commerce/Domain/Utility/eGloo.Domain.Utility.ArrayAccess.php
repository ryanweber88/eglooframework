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
	 * Invoke provides a somewhat more idiomatic means of
	 * calling evaluate on an ArrayAccess instance within
	 * template context
	 */
	public function __invoke() {
		return $this->evaluate();
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
		//echo "offset is $offset\n";

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
					 $result->delegated instanceof Domain\Model\Set) {
					 //!$result->delegated->isEmpty()) {


				// since this will be used in the context of template, we iterate
				// through set, and wrap each model with arrayaccess, so it can
				// be used with array notation (in smarty)
				$set = array();
								
				// check if model has a natural key defined; in these cases
				// the model->key value will servce as our index for the
				// returned set
				
				// we do two distinct loops as means of saving 
				if (($key = $result->delegated[0]->constGet('NATURAL_KEY'))) {
					foreach($result->delegated as $ignore => $model) {
						if ($model->exists()) { 
							$set[$index = $model->$key] = new static($model);			
						}		
					}
				}
				
				else {
					foreach ($result->delegated as $key => $model) {
						if ($model->exists()) {
							$set[] = new static($result->delegated[$key]);
						}
					}
				}
								
												
				$result = $set;
			}
			
			// set a backward reference for any needed 'backward' evaluations
			else if ( $result instanceof static ) {
				//$result->reference = $this;
			}
						
		}

		

		// here we provide evaluation methods on a !is_null result; make sure
		// not to overwrite the values provided by methods already available
		// to delegated class
		if (!\method_exists($this->delegated, $offset) && 
		    in_array($offset, array('evaluate', 'to_i', 'to_s', 'to_b', 'exists', 'true', 'false'))) {
			
			$value = $this->evaluate($result);
			
			// now switch on offset type
			switch ($offset) {
				
				case 'evaluate' :
					return $value;
					break;
					
				// this is manage exists on objects that do 	
				case 'exists'   :
					$result = $value && is_object($result);
					break;
					
				// determines if result is a boolean value since we have a wide range
				// of return values that can be determined as boolean, we need to
				// check against each and determine of is true
				case 'true'    :
					if (!is_null($result) && !is_object($result)) {
						$result =  in_array($result, array(
							true,
							'true',
							't',
							1,
							'1'
						));
						
					}
					
					$result = false;
						
				default:
					
					break;
			
			}
		
		}

		
		// if our result is null, we return an ArrayAccess instance, which
		// delegates to a Nil class instance - we do this because there
		// are many instances where simply returning null will cause
		// an exception to be thrown - in this case, we are returning
		// an object that will produce an empty result when stringified
				
		return is_null($result) 
			? new static(new Nil)
			
			: $result;
			
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
		
		return '';
		
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
	protected function evaluate($result) {
		
		
		// if delegated is of type Nil, it means that ArrayAccess is purposefully wrapping
		// a null value, in which case, our evaluation is null
		if ($this->delegated instanceof Nil || $this->delegated instanceof \ArrayAccess) {
			$result = null;
		}
		
		if ($this->delegated instanceof Domain\Model\Set) {
			$result = $this->delegated;
		}
		
		
		// check against result
		// @TODO I don't if this belongs here - maybe to
		// general of behavior and will cause hard to track bugs
		if ( !is_null($result) ) {
			
			if ( is_string($result) && strlower($result) == 'f' ) {
				$result = false;
			}
				
		}
		
		
		return $result;
	}	
	
	private $reference;
}