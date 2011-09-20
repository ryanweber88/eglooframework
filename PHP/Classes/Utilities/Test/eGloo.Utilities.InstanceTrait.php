<?php
namespace \eGloo\Utilities\Test;

/**
 * Provides trait features for testing class intances
 * @author Christian Calloway
 */
trait InstanceTrait { 
	
    public function setUp() { 
    	$this->instance = new static();
    	parent::setUp();
    }
 
    
    public function tearDown() {
        parent::tearDown();
        $this->instance = null;
    }		

	protected $instance;
}