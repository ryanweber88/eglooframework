<?php
namespace eGloo\Utilities;

/**
 * Provides ruby attribute_accessor functionality for member properties;
 * this is needed for all instances that do not explicitely descend
 * from object super class
 * @author Christian Calloway
 */
trait AttributeTrait { 

	/**
	 * 
	 * Provides attr_reader quality to php objects - calls __call 
	 * to cement retrieval. Like __call methods, this can be 
	 * overriden with a method of the same name as property
	 * @param  string $name
	 * @throws \eGloo\Dialect\Exception
	 * @return  mixed
	 */
	public function __get($name) {
		try { 
			return $this->$name();
		}
		catch (Exception $pass) { 
			throw $pass;
		}
	}
	
	/**
	 * 
	 * Provides attr_writer quality to php objects - $obj->property = value
	 * will actually call $obj->property($value); to implementors, it will
	 * appears as if setting public properties
	 * @param  string $name
	 * @param  mixed  $value
	 * @throws \eGloo\Dialect\Exception
	 * @return void
	 */
	public function __set($name, $value) { 
		try { 
			$this->$name($value);
		}
		catch (Exception $pass) { 
			throw $pass;
		}
	}
	
	/**
	 * 
	 * Taking a step away from the java world, and into ruby, (protected) properties 
	 * will be accessed by dynamic method call "$object->propertyName($value = null)";
	 * like Ruby, this functionality can be overriden by defining a like named method 
	 * if one wishes to encapsulate business logic within an accessor/mutatator. As
	 * an added benefit, dynamic methods return a reference to self, so as to allow
	 * for chaining
	 * @param string $name
	 * @param mixed* $arguments
	 */
	public function &__call($name, $arguments) { 
		
		// determine if setter/getter - since we are setting single
		// property values, $arguments should have an value a single
		// value at the fist index
		if (count($arguments) && !is_null($arguments[0])) { 
			
			// set property, but only if it exists! since php allows you
			// to arbitrarily create public members, we are specifically
			// disallowing that behavior here - an exception is thrown if
			// an attempt to access a property that does not exist is made
			if ($this->propertyExists($name)) {
				$this->$name = $arguments[0];
			}
			
			else { 
				throw new \eGloo\Dialect\Exception(
					'ATTEMPTED TO ACCESS INVALID PROPERTY : ' . $name
				);
			}
			
			// now return a reference to the current instance so as to allow for
			// chaining: $this->name('christian')->doesWhat('sucks');	
			return $this;		
		}
		
		// otherwise we are attempting an accessor; try and return property
		// fail gracefully ? (or throw exception) if property does not exist
		else { 
			return $this->$name;
		}
	}
	
	protected function setOrGet($propertyName, $value = null, \Closure $lambda = null) { 
		// convenience method when overriding property() methods, so that we don't
		// have to check for whether a get or set has been request - in the case
		// of set, a callback is supplied to set value
		
		// value is null, a 'get' has been requested
		if (is_null($value)) { 
			return $this->$propertyName;
		}
		
		// call lambda and return reference to self
		if (!is_null($value = $lambda($value))) {
			$this->$propertyName = $value;
		};
				
		return $this;
	}
	
	protected function sget($propertyName, $value = null, \Closure $lambda = null) { 
		return $this->setOrGet($propertyName, $value, $lambda);
	}
		
}