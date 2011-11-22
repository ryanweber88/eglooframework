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

			// @todo chain passthrough data
			// results must be wrapped when passing through, as containing
			// array is stripped when call_user_func_array is called
			$results = $this->pop()->call([ $results ]);	
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