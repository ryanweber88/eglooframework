<?php
namespace eGloo\Utilities\ClassBuilder;

/**
 * 
 * Provides baseline functionality to RXXX classes
 * @author christian@petflow.com
 *
 */
abstract class Aspect implements \eGloo\Utilities\Drawable, \eGloo\Utilities\Stringable { 
	
	function __construct($templateEngine) {
		// use injected template engine; will probably remove this from constructor
		$this->templateEngine = $templateEngine;

		// configure array/group properties for instantiated class; overriden
		// in child classes on case-by-base basis
		$this->configureGroups();
	}
	
	
	/**
	 * 
	 * Stringify's runtime aspects for convenient representation 
	 */
	public function __toString() { 
		// draw template to stdout buffer and assign to $buf local variable
		ob_start();
		$this->draw();
		return ob_get_clean();	

	}
	
	public function draw() { 
		// retrieve instance specific values to assign to template
		$tpl = array();
		$reflection = new \ReflectionClass($this);	
				
		foreach($reflection->getProperties() as $property) { 
			// can't use ReflectionProperty::getValue with child class protected properties (bug in compiler)
			$value = $this->{$property->getName()};
			$tpl[$property->getName()] = null;
						
			//if (is_array($value) && count($value)) { 
			//	foreach($value as $mixed) { 
			//		$tpl[$property->getName()] .= "$mixed\n";
			//	}
			//}
			
			$tpl[$property->getName()] = (string) $value;
			
		}	
		
		$this->templateEngine->assign($tpl); 
		
		// echo processed template to stdout; tpl names follow convention of aspect instances
		// class name + .tpl
		$tmp = explode('\\', get_class($this));
		$className = $tmp[count($tmp)-1];
		
		echo $this->templateEngine->fetch("$className.tpl");
	}
	
	/**
	 * 
	 * Set/push onto properties depending upon property type
	 * @param string   $name
	 * @param mixed*   $arguments
	 */
	public function __call($name, $arguments) { 
		
		// if no arguments, simply return aspect property; this behavior
		// can be overriden by providing public functions with the same
		// name as property
		if (!count($arguments)) { 
			return $this->$name;
		}
		
		// otherwise a property is being set - determine correct property name; 
		// a convetion of singular + s has been set, except for a few exceptions
		try { 
			$name = $this->classPropertyName($name);
		}
		catch (Exception $pass) { 
			throw $pass;
		}
		
		// if property is an array, then push onto queue
		if (is_array($this->$name) || $this->$name instanceof \eGloo\Utilities\ClassBuilder\Group) { 
			$this->{$name}[] = $arguments[0];
		}
		
		// else, simply set value
		else { 
			// bug in compiler - unable to set protected value with reflectionproperty instance
			// $property->setValue($arguments[0]);			
			$this->$name = $arguments[0];
		}
		
	}
	
	protected function configureGroups() { 
		$reflection = new \ReflectionClass($this);	
				
		foreach($reflection->getProperties() as $property) { 
			// can't use ReflectionProperty::getValue with child class protected properties (bug in compiler)
			$value = $this->{$property->getName()};
			
			if (is_array($value)) { 
				$this->{$property->getName()} = new \eGloo\Utilities\ClassBuilder\Group();
			}
		}
	}

	
	private function classPropertyName($name) { 


		// check if property exists first - if so, return to caller
		if ($this->propertyIsset($name)) {	
			return $name;	
		}
			
		// if property does not exist (as passed), then check if
		// property fits into convention (name + s) or is an exception
		// based upon pluralizing rules
		else {
			$exceptions = array(
				'extends' => 'extends',
				'property' => 'properties'
			);

			
			$name = isset($exceptions[$name]) ? $exceptions[$name] : $name . 's';
			

			// check property name again; if it exists, return to caller
			if ($this->propertyIsset($name)) {			
				return $name;			
			}
			
			// class property has not been found - throw exception to the case
			throw new \Exception("Property does not exist : $name", $code, $previous);	
			
		}
		
		// instantiate reflection object, check to ensure property actually exists
		// this does not work due to bug in 5.3 compiler; can't even instantiate
		/*
		try { 
			$reflection = new \ReflectionProperty($this, $name);
		}

		// if property does not exist, pass exception back to caller
		catch (Exception $pass) { 
			throw $pass;
		}
		
		return $reflection;
		*/
	}

	private function propertyIsset($property) { 
		return array_key_exists($property, get_class_vars(get_class($this)));
	}
	
	protected $name;
	private $templateEngine;

}