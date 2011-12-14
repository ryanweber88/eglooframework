<?php
namespace eGloo\System\Server\Context\Observer\Attribute;

/**
 * 
 * A 'Cache' observer - when notified, via update, checks if value
 * @author Christian Calloway
 *
 */
class Cache extends \eGloo\Dialect\Object implements \SplObserver { 
	
	function __construct($expires) {
		// set absolute expires timestamp 
		$this->expires = time()  + $expires;
	}
	
	public function update(\SplSubject $attribute) { 
		// check if subject has expired, in which case, unbind from context
		if ($this->expired()) { 
			$attribute->owner()->unbind($attribute->name());
		}
	}
	
	final private function expired() { 
		return ($this->expires - time()) <= 0;
	}
	
	protected $expires;
}