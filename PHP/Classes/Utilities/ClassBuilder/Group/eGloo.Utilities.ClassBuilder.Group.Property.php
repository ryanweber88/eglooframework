<?php
namespace eGloo\Utilities\ClassBuilder\Group;

class Property extends \eGloo\Utilities\ClassBuilder\Group { 
	
	public function __toString() { 
		$managed = array();
		$tokens  = array();

		
		// stringify unmanaged properties
		foreach($this->aspects as $index => $aspect) { 
			
			// record reference to managed aspects
			if ($aspect->managed()) { 
				$managed[] =& $this->aspects[$index];
			}
			
			// otherwise fetch string representation of unmanaged items
			else { 
				$tokens[] = (string) $aspect;
			}
		}
		
		
		// iterate through managed items, which internally will be represented
		// as a single property
		if (count($managed)) {

			$values = array();
			
			foreach ($managed as $aspect) { 
				$values[] = "'{$aspect->name()}' => " . ((is_null($aspect->value())) ? 'null' : "'" . addslashes($aspect->value()) ."'");		
			}
			
			
			// instantiate empty runtime property
			$rproperty = \eGloo\Utilities\ClassBuilder::create(
				\eGloo\Utilities\ClassBuilder::T_PROPERTY	
			)
			->name(\eGloo\Utilities\ClassBuilder\Aspect\Member\LValue\RProperty::N_MANAGED)
			->visibility(\eGloo\Utilities\ClassBuilder::V_PROTECTED)			
			->value(var_export($values, true));	
			
			$tokens[] = $rproperty->fetch();
		}
		
		return implode($this->delimiter, $tokens);
	
	}
}