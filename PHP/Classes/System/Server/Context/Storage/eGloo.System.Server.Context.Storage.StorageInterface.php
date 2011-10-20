<?php
namespace eGloo\System\Server\Context\Storage;

use \eGloo\System\Server\Context\Attribute;

/**
 * 
 * Provides interface for storage classes, by which Context instance
 * can arbitrarily employ or inject different storage mechanisms
 * @author Christian Calloway
 *
 */
interface StorageInterface { 
	
	/**
	 * 
	 * Writes attribute using underlying storage mechanism; returns
	 * instance of self for chaining
	 * @param  Attribute $attribute
	 * @return StorageInterface
	 */
	public function &write($key, Attribute &$value);
	
	/**
	 * 
	 * Reads attribute using underlying storage mechanism
	 * @param  string $key
	 * @return mixed
	 */
	public function read($key);
}