<?php
namespace eGloo\Utilities\ClassBuilder\Aspect;

abstract class Member extends \eGloo\Utilities\ClassBuilder\Aspect { 
	
	/**
	 * 
	 * Returns owning reference to class or method
	 * @return &eGloo\Utilities\ClassBuilder\Aspect
	 */
	//public function &owner() { }
	
	protected $owner;
}