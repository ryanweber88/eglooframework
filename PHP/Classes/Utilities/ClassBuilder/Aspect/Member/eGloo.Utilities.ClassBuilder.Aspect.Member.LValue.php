<?php
namespace eGloo\Utilities\ClassBuilder\Aspect\Member;

abstract class LValue extends \eGloo\Utilities\ClassBuilder\Aspect\Member {
	
	/**
	 * 
	 * Overrides setting of property with specific business rules
	 * @param string $value
	 */
	public function value($value = null) { 
		// getter
		if (is_null($value)) { 
			return $this->value;
		}
		
		// setter
		else {
			$nullValues = array(
				'null'
			);
			
			if (!in_array($value, $nullValues)) { 
				$this->value = $value;
			}
		
		}
	}
	

	protected $value;
}