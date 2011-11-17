<?php
namespace eGloo\DataProcessing\DDL\Entity;

use eGloo\DataProcessing\DDL;

/**
 * 
 * Provides an abstraction layer from entities/querysets (any method calling abstractions)
 * to method interface
 * 
 * Follows pattern described @ http://www.cs.sjsu.edu/~pearce/modules/patterns/enterprise/persistence/gateway.htm
 * @author Christian Calloway
 *
 */
class MethodGateway extends \eGloo\Dialect\Object {
	
	use \eGloo\Utilities\Collection\StaticStorageTrait;
	
	function __construct(Entity $entity) {
		$this->entity = $entity;
	}
	
	/**
	 * 
	 * Calls method, pointed to by name
	 * @param  string $name
	 * @throws DDL\Exception\Exception
	 */	
	public static function method($entity, $name) {
		$gateway = new MethodGateway($entity);
		
		try {
			return $gateway->retrieveMethod($name);
		}
		catch(\Exception $pass) {
			throw $pass;
		}
	}
	
	/**
	 * 
	 * Calls method, pointed to by name
	 * @param  string $name
	 * @throws DDL\Exception\Exception
	 */
	public function retrieveMethod($name) {
		
		$entity = &$this->entity;
		
		// retrieve method from static store or use fallback
		// lambda to create new method instance		
		$method = static::retrieve([DDL\Utility\Entity::key($entity), $name], function() use ($entity, $name) {
			if (DDL\Statement\Bundle::create($entity)->valid($name)) {
				return new Method($entity, $name);	
			}
						
			return false;
			
		});
		
		// if method is not absolute false, it gaurenteed to be valid
		if ($method) {
			return $method;	
		}

		
		// if we have reached this point, then method is invalid
		throw new DDL\Exception\Exception (
			'Invalid Entity Method Invocation : ' . $this->entity->_class->class
		);	
		
	}
	

	
	protected $entity;
}