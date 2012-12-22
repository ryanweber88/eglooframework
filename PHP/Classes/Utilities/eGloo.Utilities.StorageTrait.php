<?php
namespace eGloo\Utilities;

use \eGloo\Dialect\Object;

/**
 * Provides base functionality for classes implementing
 * StorageInterface - items in collection must extend
 * object class
 * @author
 * @todo Too many dependencies based on an interface - this
 * is a bad idea
 */
// trait StorageTrait {

// 	/**
// 	 *
// 	 * A collection data structure can be passed as
// 	 * storage mechanism or
// 	 * @param mixed $storage
// 	 */
// 	public function initStorageTrait($storage = null) {
// 		if (is_object($storage)) {
// 			$this->storage = $storage;
// 		}
// 	}

// 	public function attach(Object $object) {

// 	}

// 	protected $storage = [ ];
// }
