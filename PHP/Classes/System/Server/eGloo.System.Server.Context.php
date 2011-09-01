<?php
namespace eGloo\System\Server\Application;

/**
 * 
 * Represents 'context' within stateful application : Request, Application, Server, etc;
 * used to store attribute values to that context 
 * @author Christian Calloway
 *
 */
class Context extends \eGloo\Dialect\Object { 
	
	public function &getAttributes($key) { 
		return $this->attributes[$key];
	}
	
	public function setAttribute($key, $value) {
		$this->attributes[$key] = $value;
		
		return $this;
	}
	
	protected $attributes;
}