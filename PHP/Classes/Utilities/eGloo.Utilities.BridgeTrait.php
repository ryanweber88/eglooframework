<?php
namespace eGloo\Utilities;

/**
 * Provides bridge-pattern by inspecting implementor interface methods
 * @author Christian Calloway
 */
trait BridgeTrait { 	

	public function __call($name, $arguments) { 
		// use reflection on implementors interfaces to
		// dynamically call interface methods
		$reflectionClass = new ReflectionClass($this->implementor);
		
		// search for method whose signature matches $name, $arguments
		foreach ($reflectionClass->getInterfaces() as $interface) { 
			foreach ($interface->getMethods() as $method) { 
				if ($method->getName() == $name) { 
					return $method->invokeArgs($method, $arguments);
				}
			}
		}			  
		
		throw new \eGloo\Dialect\Exception(
			"FAILED finding implementor method >> $name"
		);
	}
	
	protected function bridge($implementor) { 
		$this->implementor = $implementor;
	}
	

	
	protected $implementor;
}