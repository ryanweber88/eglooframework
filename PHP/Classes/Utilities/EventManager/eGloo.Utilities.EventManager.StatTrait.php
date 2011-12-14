<?php
namespace eGloo\Utilities\EventManager;

/**
 * Provides stat information, such as last accessed, last changed, if changed, etc. 
 */
trait StatTrait { 
	
	protected function init() { 
		$this->accessed = time();
		$this->modified = time();
	}
	
	protected function updateAccessed() { 
		$this->accessed = time();
	}
	
	protected function updateModified() { 
		$this->modified = time();
	}
	
	protected $accessed;
	protected $modified;

}