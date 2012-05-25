<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain;

/**
 * Acts as primary interface to model instance, or as lightweight 
 * "representative" of that instance
 */
class Proxy implements Domain\ModelInterface {
	
	function __construct($mixed = null) {
		if (!is_null($mixed)) {
			$this->store = $mixed;	
		}
	}
	
	protected function evaluate($lambda) {
		$self  = $this;	
		$model = Domain\Model::instance();
		
		
		$model->instanceEval(function($model) use ($self) {
			
		});
	}
	
	public function __call($name, $arguments) {
		return $this->evaluate(__FUNCTION__, );
	}	
	
	public function __callstatic($name, $arguments) {
		
	}	
	
	public function __get($name) {
		
	}
	
	public function __set($name, $value) {
		
	}
	
	protected $store;
}
