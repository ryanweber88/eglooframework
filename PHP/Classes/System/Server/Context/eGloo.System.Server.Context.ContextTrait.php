<?php
namespace eGloo\System\Server\Context;

use \eGloo\System\Server;

/**
 * Provides factory method to simplify access to different contexts;
 * Provides context characteristics to context-oriented objects
 * @todo   Move original targets of this trait to ContextAccess trait
 * @author Christian Calloway
 */
trait ContextTrait { 
	
	protected function initializeContext($instance) { 
		$this->context(new Server\Context($instance));
	}
	
	public function &context(Server\Context $context = null) { 
		if (is_null($context)) { 
			return $this->context;		
		}
	
		$this->context = $context;
		return $this;
	}
	

	protected $context;
}