<?php
namespace eGloo\Utilities\ClassBuilder\Aspect\Member;

/**
 * 
 * Runtime method
 * @author christian@petflow.com
 *
 */
class RMethod extends \eGloo\Utilities\ClassBuilder\Aspect\Member {
	
	public function configureGroups() { 
		parent::configureGroups();
		
		$this->arguments = new \eGloo\Utilities\ClassBuilder\Group\CSV\Argument();
	}

	protected $statements = array();
	protected $arguments  = array();
	protected $static     = false;
	protected $visibility;
}