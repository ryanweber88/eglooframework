<?php
namespace eGloo\Performance\Caching\Store;

use \eGloo\Performance\Caching;
use \eGloo\Dialect\ObjectSafe as Object;

class Memcache extends Caching\Store {
	
	public function read($name, array $options = null) {
		return $this
			->cache()
			->getObject($name, $this->server($options));
			
		
	}
	
	public function write($name, $value, array $options = null) {
		$this
			->cache()
			->storeObject($name, $value, $this->server($options));		
	}
	
	public function find($name, $__mixed = null) {
		$arguments = \eGloo\Utilities\Collection::flatten(array_slice(
			func_get_args(), 1
		));
		
		// check if cached item exists, in which case return
		// to caller as is
		if ($this->exists($name, $this->server($arguments))) {
			return $this->read($name, $arguments);
		}
		
		// otherwise, determine if block/lambda has been passed
		// 
		else if ($lambda = is_callable($arguments[count($arguments) - 1])) {
			$this
				->cache()
				->write($name, $value = $lambda($key, $arguments), $arguments);
				
			return $value;
		}		
	}
	
	public function delete($key, array $options = null) {
		$this->cache()
		     ->delete($key, $this->server($options));
	}
	
	public function exists($key, array $options = null) {
		$value = $this
			->cache()
			->read($name, $this->server($options));
			
	
		// @TODO determine what memcache returns 
		return !is_null($value) && $value !== false;	
	}
	
	private function cache() {
		return Caching\Gateway::instance();
	}
	

}