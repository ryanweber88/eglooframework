<?php
namespace eGloo\System\Server\Context\Observer;

/**
 * 
 * Responsible for monitoring changes within context (newly bound/expired/changed attributes, context
 * destruction (sessions, cookies), etc; on-change events will trigger a specified handler
 * @author Christian Calloway
 *
 */
class Change extends \eGloo\Dialect\Object implements\SplObserver { 
	
	function __construct(\Closure $handler) {
		// TODO determine if lambda/closure is best approach
		$this->handler = &$handler;
	}
	
	public function update(\SplSubject $attribute) { 
		// call handler with instance of context; should trigger an action that will 
		// rectify change amongst server instances
		// TODO perhaps outside handler isn't best approach?
		$this->handler($attribute);
	}
	
	protected $handler;
}