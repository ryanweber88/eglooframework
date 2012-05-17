<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain;

/**
 * Represents the idea of a view, so while View extends Model,
 * it purposefully limits Model functionality and overrides certain
 * established perspectives of model
 * @author Christian Calloway callowaylc@gmail.com
 */
class View extends Domain\Model {
	
	function __construct($__mixed) {
		parent::__construct($__mixed);
		
		// lock view, as its attributes SHOULD be immutable
		$this->lock();
	}
	
	/**
	 * Since a view holds no primary key, we redefine exists simply 
	 * to see if initialized
	 * @TODO this needs a composite key idea
	 */
	public function exists() {
		return $this->initialized();
	}
}