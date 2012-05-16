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
	
	public function find($name, array $options = null, $lambda) {

		// check if cached item exists, in which case return
		// to caller as is
		if ($this->exists($name, $options)) {
			echo "$name exists<br />";
			return $this->read($name, $options);
		}
		
		// otherwise, determine if block/lambda has been passed
		// 
		else if (is_callable($lambda)) {
			echo "writing $name with lambda<br />";
			
			$this->write(
				$name, $value = $lambda($name), $options 
			);

			if (strpos($name, 'Organization') !== false) {
				//var_export($this->read($name, $options)); exit;
				//var_export($this->cache()->keys('Relation'));
				//exit('asdf');
				//var_export($this->cache()->keys('Relation'));
				//exit;
			}	
			return $value;
		}
		
		else {
			throw new \Exception(
				"Failed to find cache with key '$name' because it does not exist and " .
				"a callable lambda was not provided"
			);
		}		
	}
	
	public function delete($name, array $options = null) {
		$this
			->cache()
			->deleteObject($name, $this->server($options));
	}
	
	public function exists($name, array $options = null) {
		$value = $this
			->cache()
			->getObject($name, $this->server($options));
			
	
		// @TODO determine what memcache returns 
		return !is_null($value) && $value !== false;	
	}
	
	private function cache() {
		return Caching\Gateway::instance();
	}
	
	private function server(array $options = null) {
		return !is_null($options) && isset($options['server'])
			? $options['server']
			: null; 
	}
	

}