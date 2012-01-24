<?php

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of eGloo
 *
 * @author gilbert
 */
class CacheBridge exend Bridge {
	
	function __construct($gateway) {
		$this->proxy = $gateway;
	}
	
	function __call($name, $arguments) {
		if (method_exists($name, $method_name)) {
		
			return call_user_func_array(function($arguments) { 	
				$this->proxy->$methodName($arguemnts) }, $arguments);
		});
		
		
		return 	call_user_func_array(function($arguments) { 
			$this->$methodName($arguemnts) }, $arguments
		);

	}
	
	public function getObject() { 
		// provide functionality for getObject for Brand
	}
	
	procted $proxy;
}