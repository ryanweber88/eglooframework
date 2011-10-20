<?php
namespace eGloo\Utilities\ClassBuilder\Aspect\Member;

/**
 * 
 * Represents any class statement (within method or not)
 * @author christian@petflow.com
 *
 */
class RStatement extends \eGloo\Utilities\ClassBuilder\Aspect\Member { 
	
	/**
	 * Overrides setting of name value, so that value property is also set; skews
	 * inheritance a bit since statement does not have a name, persay
	 * @see eGloo\Utilities\ClassBuilder\Aspect.Statement::name($name)
	 */
	public function name($name = null) { 
		if (is_null($name)) { 
			return $this->name;
		}	
		
		else { 
			$this->name = $name;
			$this->value = $name;
		}
	}
	
	protected $value;
}