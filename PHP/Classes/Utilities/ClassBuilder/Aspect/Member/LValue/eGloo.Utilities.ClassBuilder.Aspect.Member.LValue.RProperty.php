<?php
namespace eGloo\Utilities\ClassBuilder\Aspect\Member\LValue;

class RProperty extends \eGloo\Utilities\ClassBuilder\Aspect\Member\LValue { 

	const N_MANAGED = '_managed_member';
	
	protected $visibility;
	protected $static      = false;
	protected $managed     = false;
}