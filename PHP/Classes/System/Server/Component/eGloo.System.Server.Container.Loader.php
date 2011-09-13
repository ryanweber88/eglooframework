<?php
namespace eGloo\System\Server\Component;

/**
 * 
 * Loads a "component" or instantiated class or system from a given context; borrows heavily
 * from symphony dependency injection concepts
 * @author Christian Calloway
 *
 */
class Container extends \eGloo\Dialect\Object {
	
	/**
	 * 
	 * Adds a component definition
	 * @param string $namespace
	 * @param Definition $definition
	 */
	public function &definition(Definition $definition) { 
		$this->definitions[$definition->class()] = $definition;
		
		return $this;
	}
	
	/**
	 * 
	 * Retrieve an already-instantiated component definition, or instantiate
	 * a new one
	 * @param unknown_type $namespace
	 * @param \eGloo\System\Server\Context $context
	 */
	public function get($class, \eGloo\System\Server\Context &$context) {
		if (!isset($this->instances[$class])) {
			
		}
		
		return $this->instances[$class];
	}
	
	private $definitions = array();
	private $instances = array();
}