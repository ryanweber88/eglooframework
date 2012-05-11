<?php
namespace \eGloo\Domain\Model;

use \eGloo\Performance\Caching;

/**
 * Cache interface to Model cache
 * @author Christian Calloway callowaylc@yahoo.com
 */
class Cache extends Caching\Cache {
	
	function __construct() {
		// delegate to Memcache store
		// @TODO this should be DI instead of hardcoded to memcache
		parent::__construct(new Caching\Store\Memcache);
	}
	
}
