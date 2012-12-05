<?php
namespace eGloo\Performance\Caching\Store;

use \eGloo\Performance\Caching;
use \eGloo\Dialect\Object;

class Memcache extends Caching\Store {
	
	public function read($name, array $options = null) {
		return $this
			->cache()
			->getObject($name, $this->server($options));
			
		
	}
	
	public function write($name, $value, array $options = null) {
		return $this
			->cache()
			->storeObject($name, $value, $this->server($options));		
	}
	
	public function find($name, array $options = null, $lambda) {


		//echo "finding $name <br />\n";


		// check if cached item exists, in which case return
		// to caller as is
		if ($this->exists($name, $options)) {
			$result = $this->read($name, $options);
		}
	
		// otherwise, determine if block/lambda has been passed
		// - it is assumed that the value returned from block
		// is now our new cache data, which will be written
		// and returned (write-through)
		else if (is_callable($lambda)) {
			$success = $this->write(
				$name, $result = $lambda($name), $options 
			);

			
		}
		
		else {
			throw new \Exception(
				"Failed to find cache with key '$name' because it does not exist and " .
				"a callable lambda was not provided"
			);
		}		
		
		
		return $result;
	}
	
	public function delete($name, array $options = null) {
		$this
			->cache()
			->deleteObject($name, $this->server($options));
	}
	
	public function exists($name, array $options = null) {
		$value = $this
			->cache()
			->exists($name, $this->server($options));
			

		// @TODO determine what memcache returns 
		return $value !== false;	
	}
	
	private function cache() {
		return Caching\Gateway::getCacheGateway();
	}
	
	private function server(array $options = null) {
		return !is_null($options) && isset($options['server'])
			? $options['server']
			: null; 
	}
	

}