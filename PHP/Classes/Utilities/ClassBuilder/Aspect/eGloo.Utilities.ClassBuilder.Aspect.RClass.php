<?php
namespace eGloo\Utilities\ClassBuilder\Aspect;

/**
 * Runtime class definition
 * @author christian@petflow.com
 *
 */
class RClass extends \eGloo\Utilities\ClassBuilder\Aspect {
	
	protected function configureGroups() { 
		parent::configureGroups();
		
		$this->properties = new \eGloo\Utilities\ClassBuilder\Group\Property();
		$this->implements = new \eGloo\Utilities\ClassBuilder\Group\CSV\Implement();	
	}
		
	protected $methods      = array();
	protected $properties   = array(); 
	protected $constants    = array();
	protected $extends;
	protected $namespace;
	protected $implements   = array();

}