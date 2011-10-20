<?php
namespace eGloo\Utilities;

use \eGloo\Dialect\Object;

/**
 * 
 * Standard storage interface to be used by any collection
 * representing an underlying storage mechanism
 * @author Christian Calloway
 *
 */
interface StorageInterface extends \Countable {
	
	public function attach(Object $object);
	public function remove(Object $object);
	public function retrieve(Object $object);
	public function clear();
}