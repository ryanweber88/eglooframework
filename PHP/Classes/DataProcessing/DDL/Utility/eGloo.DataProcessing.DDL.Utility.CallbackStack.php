<?php
namespace eGloo\DataProcessing\DDL\Utility;

class CallbackStack extends \SplStack { 
	
	function __construct(array $callbacks = [ ]) { 
		parent::__construct();
		
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