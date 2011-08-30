<?php
namespace eGloo\Utilities\Bootstrap;

abstract class BootstrapAbstract extends \eGloo\Dialect\Object implements Bootstrappable { 
	
	const RESOURCE_PREFIX = '_init';
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\Utilities\Bootstrap.Bootstrappable::bootstrap()
	 */
	public function &bootstrap($resource = null) { 
		if (is_null($resource)) { 
			$this->run();
		}
		
		else { 
			// check if resource is valid, and if so, call resource mthod
			if ($this->isResource($resource)) { 
				$this->callResource($resource);
			}
			
			// throw an exception if resource is invalid
			else { 
				throw new \eGloo\Dialect\Exception(
					'INVALID RESOURCE > ' . $resource
				);
			}
		}
		
		// return can instance of self so that bootstrap calls
		// may be chainables
		return $this;
	}
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\Utilities\Bootstrap.Bootstrappable::run()
	 */
	public function run() { 
		foreach ($this->resources as $resource) { 
			$this->callResource($resource);
		}
	}
	
	protected function isResource($resource) { 
		// checks to determine if resource is valid method
		return $this->methodExists($this->resourceMethod($resource));
	}
	
	protected function callResource($resource) { 
		// calls resource method
		$this->{$this->resourceMethod($resource)}();
	}
	
	private function resourceMethod($resource) { 
		// properly formats resource method using convention '_init' + Resourcename
		return self::RESOURCE_PREFIX . ucfirst($resource);
	}
	
	final private function resources() { 
		// use reflection to retrieve current object context methods
		$reflection = new \ReflectionClass($this);
		$methods = array();
		
		foreach ($reflection->getMethods(\ReflectionMethod::IS_PROTECTED) as $method) {
			if(preg_match('/^' . self::RESOURCE_PREFIX . '/', $method->getName())) {
				$methods[] = $method->getName();
			}
		}
		
		return $methods;
	}
	
	
}