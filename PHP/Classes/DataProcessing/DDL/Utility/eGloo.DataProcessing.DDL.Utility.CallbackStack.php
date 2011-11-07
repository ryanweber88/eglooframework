<?php
namespace eGloo\DataProcessing\DDL\Utility;

class CallbackStack extends \SplStack { 
	
	function __construct(array $callbacks = [ ]) { 
		
		// push callbacks onto stack
		foreach($callbacks as $callback) {
			$this->push($callback);
		}
	}
	/**
	 * 
	 * Executes all callbacks currently sitting on stack
	 */
	public function batch() { 

		$results = ($this->isEmpty()) 
			? false 
			: [  ];
		
		while (!$this->isEmpty()) {
						
			// call, retrieve results to pass to the next callback
			// TODO results push through is not working
			//if (!is_array(($results = $this->pop()->call($results)))) { // = function($results) { method->call($arguments, $results) }
			//	$results = [ 'previous' => $results ];				
			//}
			
			// @todo chain passthrough data
			$results = $this->pop()->call([]);			
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