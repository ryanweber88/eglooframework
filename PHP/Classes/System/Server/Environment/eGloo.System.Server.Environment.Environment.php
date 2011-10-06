<?php
namespace eGloo\System\Server\Environment;

use \eGloo\System\Server;
/**
 * 
 * Represents the underlying environment which
 * the server application will load between
 * middleware requestss 
 * @author Christian Calloway
 *
 */
abstract class Environment extends \eGloo\Dialect\Object implements EnvironmentInterface {
	
	/**
	 * 
	 * Setup environment
	 */
	public function setup() { }
	
	/**
	 * 
	 * Teardown environment
	 */
	public function teardown() { 
		// unset static variables
		$this->resetClassVariables();
		
	}
	
	/**
	 * 
	 * Loads environment
	 */
	abstract public function load();
	
	/**
	 * 
	 * Register class into environment "namespace"s
	 * @param string $name
	 * @todo  limit_static
	 */
	public function registerClass($name) {
		// checks if class has already been registered
		if (!isset(static::$classes[$name])) {
			
			$reflection = new ReflectionClass($name);
			$default = $reflection->getDefaultProperties();
	
			if (!$reflection->hasMethod('__reset')) { 
				// initialize structure to record 
				// class state information
				// @todo currently only supports static - do not know if 
				// there is need beyond statics			
				static::$classes[$name] = [
					'properties' => new \SplFixedArray(count($default))
				];
				
				foreach($reflection->getStaticProperties() as $property) {
					static::$classes[$name]['properties'][] = [
						'name'  => $property->getName(),
						'value' => $default[$property->getName()]
					];
				}
				
				return true;
			}
		}
		
		return false;
	}
	
	private function resetClassVariables() {
		// resets class variables (statics)
		foreach(static::$classes as $name => $meta) {
			if (count($meta['properties'])) { 
				$reflection = new \ReflectionClass($name);
				
				foreach ($meta['properties'] as $property) {
					$property = $reflection->getProperty(
						$property['name']
					);

					$property->setAccessible(true);
				}
			}
		}
	}
	
	protected static $classes = [ ];
}