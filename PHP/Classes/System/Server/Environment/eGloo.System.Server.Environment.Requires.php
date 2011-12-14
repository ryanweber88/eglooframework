<?php
namespace eGloo\System\Server\Environment;

/**
 * 
 * Represents a basic php environment
 * @author Christian Calloway
 *
 */
class Requires extends Environment {
	
	function __construct($path) {
		// provide an include path to environment to load
		$this->path = $path;
	}
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\System\Server\Environment.Environment::load()
	 */
	public function load() { 
		return \eGloo\IO\IO::buffer(function() {
			require $this->path;
		});
	}
	
	protected $path;
}