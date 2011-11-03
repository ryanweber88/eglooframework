<?php
namespace eGloo\DataProcessing\DDL\Utility;

class CallbackStack extends \SplStack { 
	
	/**
	 * 
	 * Executes all callbacks currently sitting on stack
	 */
	public function batch() { 

		$results = [ 'suck' => 'it' ];
		
		while (!$this->isEmpty()) {
			
			// call, retrieve results to pass to the next callback
			// TODO results push through is not working
			$results = $this->pop()->call($results); // = function($results) { method->call($arguments, $results) }
		}
		
		return $results;
	}
	
	public function offsetGet($name) { 
		foreach($this as $callback) { 
			if ($callback->name() == $name) { 
				return $callback;
			}
		}
	}
}