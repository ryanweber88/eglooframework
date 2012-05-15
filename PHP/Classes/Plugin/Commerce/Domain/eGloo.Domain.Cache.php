<?php
namespace eGloo\Domain;

use \eGloo\Performance\Caching,
    \eGloo\Performance\Caching\Store;

/**
 * Provides "override" methods
 * @author Christian Calloway callowaylc@gmail.com
 */
class Cache extends Caching\Cache {
	
	function __construct($delegated = null) {
		
		// @TODO this should be injected using dic
		if (is_null($delegated)) {
			$delegated = new Store\Memcache;
		}
		
		// pass delegated instance to parent constructor
		parent::__construct($delegated);
		
	}
	
	public function read(Caching\CacheKeyInterface $obj) {
		return $this->delegated->read($obj->cacheKey(), $this->options());
	}
	
	
	public function write(Caching\CacheKeyInterface $obj) {
		return $this->delegated->write($obj->cacheKey(), $obj, $options);		
	}	
	
	public function find(Caching\CacheKeyInterface $obj, $lambda) {
		return $this->delegated->find(
			$obj->cacheKey(), $this->options(), $lambda
		);
	}
	
	public function delete(Caching\CacheKeyInterface $obj) {
		return $this->delegated->delete(
			$obj->cacheKey(), $this->options()
		);
	}
	
	public function exists(Caching\CacheKeyInterface $obj) {
		return $this->delegated->exists(
			$obj->cacheKey(), $this->options()
		);
	}
		
	protected function options() {
		return array(
			'server' => $this->server()
		);
	}
	
	abstract protected function server();
	
}


