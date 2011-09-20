<?php
//namespace eGloo\Test\Utilities\HPHP
/**
 * FormTest Class File
 *
 * Contains the class definition for the \eGloo\Utilities\HPHP\Target
 * 
 * @author Christian Calloway
*/
class TargetTest extends PHPUnit_Framework_TestCase {

	// this will break 5.3 installs
	//use \eGloo\Utilities\Test\InstanceTrait;
	
    protected function setUp() {
        //$this->instance = new \eGloo\Utilities\HPHP\Target;
        parent::setUp();
    }
    
    protected function tearDown() { 
    	//parent::tearDown();
    	unset($this->instance);
    }
    
    	
	public function testConstructor() {
		//$this->assertTrue( is_object($this->instance) && $this->instance instanceof \eGloo\Utilities\HPHP\Target );
	}
	
	public function testPreExecute() { }
	
	
	public function testPostExecute() { 
		$this->assertNotNull($this->instance->execute(function() {
			return false; 
		}));
	}

	protected $instance;
}