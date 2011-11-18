<?php
namespace eGloo\Utilities;

/**
 * Provides magic method or flexible api usage on a container (collection or object)
 * @author Christian Calloway
 */
trait MagicMethodTrait {
	
	protected function callMagicOnContainer($name, $argument, $container) {
		
		$actions = [ 'in', 'each', 'find', 'includes', 'like' ];
				
		// find property name and action
		preg_match('/^(.+?)_(.+?)$/', $name, $match);

		// action is specified after '_' character
		$indicies = (in_array($match[1], $actions)) 
			? [ 1, 2 ]
			: [ 2, 1 ];
			
		$action   = $match[array_shift($indicies)];
		$property = $match[array_shift($indicies)];
		
		// check property existence - pluralize if
		// it does not exist
		if (!$this->magicMethodTraitValueExists($name, $container)) {
			$property = \eGloo\Utilities\Inflections::pluralize(
				$property
			);
		}

		
		// do a final check on property - if it fails
		// processing will proceed to bottom where an
		// exception will be raised				
		if ($this->magicMethodTraitValueExists($name, $container)) { 
		
			// finally retrieve value at specified property
			// name and passed in argument (just as a 
			// convenience)
			// below should throw conven
			$value    = $this->magicMethodTraitGetValue(
				$name, $container
			);
			$argument = &$arguments[0]; 
			
			
			// now we manage the action processing type - ie, 
			// the type of argument that has been passed. 
		
			// handle generic array functionality
			if (is_array($argument)) {
				
				if (strpos($name, '_in') !== false) {
					return in_array($value, $argument);
				}
				
				else if (is_array($value) && strpos($name, '_includes') !== false) {
					if (is_array($value)) {
						$found = true;

						foreach($value as $single) {
							if (!in_array($single, $argument)) {
								$found = false;
								break ;
							}
						}
					}

					
					return $found;
				}
				
			}
			
			// handle generic string functions
			else if (is_string($argument)) {
				if (strpos($name, '_like') !== false) {
					return preg_match($argument, $value);
				}
			}
			
			else if (is_numeric($argument)) {
					// inject takes an initial value, and passes it each iterative
					// result back to lambda
					if (is_array($value)) { 
						if (isset($arguments[1]) && is_callable($arguments[1]) && strpos($name, 'inject_') === 0) { 
							
							$iterativeValue = &$argument;
							$lambda         = &$arguments[1];
							
							foreach($values as $value) {
								$iterativeValue = $lambda($iterativeValue);		
							}	
	
							return $iterativeValue;
						}	
					}				
			}
			
			// handle generic lamda/block callbacks
			else if (is_callable($argument)) {
				
				$lambda = &$argument;
				
					
				// handle array-oriented callbacks
				if (is_array($value)) { 
				    
					// for namesake, pluralize value using
					// reference to property value
					$values = &$value;
														
					// use reflection to determine parameter count
				    $includeKey = (
				    	count((new ReflectionFunction($arguments[0]))->getParameters()) > 1
				    );
					
					// provide and each iterator on array properties
					if (strpos($name, 'each_') === 0) { 

				    	foreach($values as $key => $value) {
							$includeKey 
								? $lambda($key, $value)
								: $lambda($value);
				    	}
				    	
				    	// each does not implicitly require return value
				    	// so boolean true is returned to indicate successful
				    	// exit from find
				    	return true;
					}
					
					// use lambda to iterate through array property
					// to look for value - break on find
					else if (strpos($name, 'find_') === 0) { 
						foreach($values as $key => $value) {
							$found = $includeKey 
								? $lambda($key, $value)
								: $lambda($value);
		
							
							if ($found) { 
								break ;
							}
						}	

						return $found;
					}
									
				}	
			}	
		}
		
		return false;
					
	}		
	
	private function magicMethodTraitValueExists($name, $container) {
		// determines if value exists, by first determining container
		// type (array or object) and performing correct retrieval
		// syntax
		
		return is_object($container)
			? isset($container->$name)
			: isset($container[$name]);
			
	}
	
	private function magicMethodTraitGetValue($name, $container) {
		// retrieves value, by first determining container type -
		// either array or object, and then performing correct
		// syntax in relation to type; "ValueExists" method should
		// be called before this method,  as it is assumed value
		// does exist and will not perform checking prior to
		// retrieval
		
		return is_object($container)
			? $container->$name 
			: $container[$name];
		
	}
			
}