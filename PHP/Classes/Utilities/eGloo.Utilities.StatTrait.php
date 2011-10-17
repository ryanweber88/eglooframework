<?php
namespace eGloo\Utilities;

/**
 * Provides stat information, such as last accessed, last changed, if changed, etc. 
 */
use eGloo\System\Server\Context\Listener\Time;

trait StatTrait { 
	
	protected function initStatTrait() { 
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