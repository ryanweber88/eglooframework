<?php
//namespace eGloo\Test\Utilities\HPHP\Target\HTTP;
/**
 * 
 *
 * Contains the class definition for the \eGloo\Utilities\HPHP\Target
 * 
 * @author Christian Calloway
*/
class SmartyTest extends eGloo\Test\Utilities\HPHP\Target\HTTPTest {

	// this will break 5.3 installs
	//use \eGloo\Utilities\Test\InstanceTrait;
	
    protected function setUp() {
        //$this->instance = new \eGloo\Utilities\HPHP\Target\Smarty();
        parent::setUp();
    }
    
}