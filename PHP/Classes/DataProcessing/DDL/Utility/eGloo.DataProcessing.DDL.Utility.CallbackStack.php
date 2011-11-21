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

			//$callback = $this->pop();
			//echo $callback->getEvent(); exit;
			// @todo chain passthrough data
			$results = $this->pop()->call($results);
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