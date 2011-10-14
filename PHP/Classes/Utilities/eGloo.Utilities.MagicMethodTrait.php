<?php
namespace eGloo\Utilities;

/**
 * Provides magic method or flexible api usage on a container (collection or object)
 * @author Christian Calloway
 */
trait MagicMethodTrait {
	
	protected function callMagicOn($name, $arguments, $container) {
		
		$functionContainer = 
			is_object($container) && $container instanceof \eGloo\Dialect\Object
			? static::$_methods
			: static::$magicMethodTraitFunctionContainer
			

		// check if specific magic call has been previously called - in
		// case, call 'compiled' version of function
		if (isset($functionContainer[$name])) {
			return $functionContainer[$name](
				$arguments[0], $arguments
			);
		}
		
		else { 
			$actions = &static::$actions;
					
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
			if (!$this->magicMethodTraitValueExists($property, $container)) {
				$property = \eGloo\Utilities\Inflections::pluralize(
					$property
				);
			}
			
			
			// do a final check on property - if it fails
			// processing will proceed to bottom where an
			// exception will be raised				
			if ($this->magicMethodTraitValueExists($property, $container)) { 
			
				// finally retrieve value at specified property
				// name and passed in argument (just as a 
				// convenience)
				// below should throw conven
				$value    = $this->magicMethodTraitGetValue($property, $container);
				$argument = &$arguments[0];
				
				// now we manage the action processing type - ie, 
				// the type of argument that has been passed. 
			
				// handle generic array functionality
				if (is_array($argument)) {
					
					if ($action == 'in') {
						$functionContainer[$name] = function($argument) use ($property) {
							return in_array($this->$property, $argument);
						};
						
						return $functionContainer[$name]($argument);
					}
					
					else if (is_array($value) && $action == 'includes') {
						
						$functionContainer[$name] = function($argument) use ($property) {
							$values = &$this->$property; 
							$found = true;
	
							foreach($values as $value) {
								if (!in_array($value, $argument)) {
									$found = false;
									break ;
								}
							}
							
							return $found;
						};
						
						return $functionContainer[$name]($argument);
						
					}
					
				}
				
				// handle generic string functions
				else if (is_string($argument)) {
					if ($action == 'like') {
						$functionContainer[$name] = function($argument) use ($property) { 
							return preg_match($argument, $this->$property);
						};
						
						return $functionContainer[$name]($argument);
					};
				}
				
				else if (is_numeric($argument)) {
					// inject takes an initial value, and passes it each iterative
					// result back to lambda
					if (is_array($value)) { 
						if (isset($arguments[1]) && is_callable($arguments[1]) && $action == 'inject') { 
							
							$functionContainer[$name] = function($argument, $arguments) use ($property) {
								$values         = &$this->$property; 
								$iterativeValue = &$argument;
								$lambda         = &$arguments[1];
								
								foreach($values as $value) {
									$iterativeValue = $lambda($iterativeValue);		
								}	
		
								return $iterativeValue;
							};
							
							return $functionContainer[$name]($argument, $arguments);
						}	
					}				
				}
				
				// handle generic lamda/block callbacks
				else if (is_callable($argument)) {
					
					$lambda = &$argument;
					
						
					// handle array-oriented callbacks
					if (is_array($value)) { 
																				
						// provide and each iterator on array properties
						if ($action == 'each') { 
	
							$functionContainer[$name] = function($lambda) use ($property) { 
								
								$values = &$this->$property;
								
								// use reflection to determine parameter count
							    $includeKey = (
							    	count((new ReflectionFunction($lambda))->getParameters()) > 1
							    );							
								
						    	foreach($values as $key => $value) {
									$includeKey 
										? $lambda($key, $value)
										: $lambda($value);
						    	}
						    	
						    	// each does not implicitly require return value
						    	// so boolean true is returned to indicate successful
						    	// exit from find
						    	return true;					    	
							};
					    	
							return $functionContainer[$name]($lambda);
						}
						
						// use lambda to iterate through array property
						// to look for value - break on find
						else if ($action == 'find') {
	
							$functionContainer[$name] = function($lambda) use ($property) { 
								$values = &$this->$property;
								
								foreach($values as $key => $value) {
									$found = $includeKey 
										? $lambda($key, $value)
										: $lambda($value);
				
									
									if ($found) { 
										break ;
									}
								}	
	
								return $found;
							};
							
							return $functionContainer[$name]($lambda);
						}
										
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
	
	protected static $magicMethodTraitFunctionContainer = [ ];
	private   static $actions = [ 'in', 'each', 'find', 'includes', 'like' ];
			
}