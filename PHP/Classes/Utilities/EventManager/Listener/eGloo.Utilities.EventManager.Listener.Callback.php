<?php 
namespace eGloo\Utilities\EventManager\Listener;

/**
 * 
 * Provides callback interface for answering
 * 
 *   
 * @author Christian Calloway
 *
 */
class Callback extends Listener { 
	
	function __construct(array $callbacks = [ ]) { 
		parent::__construct();
		
		foreach($callbacks as $lambda) { 
			
		}
		
	}
}