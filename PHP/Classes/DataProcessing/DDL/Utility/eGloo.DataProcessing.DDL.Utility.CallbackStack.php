<?php
namespace eGloo\DataProcessing\DDL\Utility;

class CallbackStack extends \SplStack { 
	
	/**
	 * 
	 * Executes all callbacks currently sitting on stack
	 */
	public function batch() { 
		while (($callback = $this->pop() !== false)) { 
			$callback->call(); 
		}
	}
	
	public function offsetGet($name) { 
		foreach($this as $callback) { 
			if ($callback->name() == $name) { 
				return $callback;
			}
		}
	}
}