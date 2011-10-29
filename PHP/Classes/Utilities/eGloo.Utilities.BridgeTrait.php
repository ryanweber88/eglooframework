<?php
namespace eGloo\Utilities;

/**
 * Provides bridge-pattern by inspecting implementor interface methods
 * @author Christian Calloway
 */
trait BridgeTrait {


	public function &__call($name, $arguments) { 
		// use reflection on implementors interfaces to
		// dynamically call interface methods
		$reflectionClass = new \ReflectionClass($this->implementor);
		
		//echo get_class($this->implementor) . "\n";
		//echo $this->implementor->assign('key', 'value');
		//exit ('check');
		
		
		
		// search for method whose signature matches $name, $arguments
		// that ONLY exists in TemplateEngineInterface
		foreach ($reflectionClass->getInterfaces() as $interface) { 
			foreach ($interface->getMethods() as $method) { 
				if ($method->getName() == $name) { 
					
					$method = new \ReflectionMethod($this->implementor, $name);
					$result = $method->invokeArgs($this->implementor, $arguments);
					//return $method->invokeArgs($this->implementor, $arguments);
					
					return $result;
				}
			}
		}
		
		// TODO replace this! calls object __call method, but this shouldn't be here
		// parent::__call($name, $arguments);
		
		throw new \eGloo\Dialect\Exception(
			"FAILED finding implementor method >> $name"
		);
	}
	
	protected function bridge($implementor) { 
		$this->implementor = &$implementor;
	}
	

	
	protected $implementor;
}