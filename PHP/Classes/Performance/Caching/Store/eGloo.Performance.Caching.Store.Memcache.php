<?php
namespace eGloo\Performance\Caching\Store;

use \eGloo\Performance\Caching;
use \eGloo\Dialect\ObjectSafe as Object;

class Memcache extends Object 
	implements Caching\StoreInterface {
	
	public function read($name, array $options = array()) {
		$cache = Caching\Gateway::instance();
		$cache->getObject($name, );
	}
	
	public function write($key, $value, array $options = array());
	public function fetch($key, $lamda);
	public function delete($key, array $options = array());
	public function exists($key, array $options = array());	
}