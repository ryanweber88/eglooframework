<?php
namespace eGloo\DataProcessing\Persistence\DataTransferObjects\Security\RequestInfoBean;

class Stateful extends \RequestInfoBean { 
	
	static public function &instance($reload = false) { 
		$requestInfoBean = parent::getInstance();

		if ($reload) { 
			$requestInfoBean->init();
		}
		
		return $requestInfoBean;
	}
}