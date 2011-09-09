<?php
namespace eGloo\System\Server\Context\Observer;

class Cache extends \eGloo\Dialect\Object implements \SplObserver { 
	
	function __construct($expires) {
		// set absolute expires timestamp 
		$this->expires = $expires;
	}
	
	public function update(\SplSubject $subject) { 
		
	}
	
	protected $expires;
}