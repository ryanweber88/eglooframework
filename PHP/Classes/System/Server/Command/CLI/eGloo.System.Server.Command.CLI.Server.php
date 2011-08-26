<?php
namespace eGloo\System\Server\Command\CLI;

/**
 * 
 * Provides execution business logic for server command
 * @author petflowdeveloper
 *
 */
class Server extends \eGloo\System\Server\Command\CLI { 


	protected function caseStart() { 
		
		// forks process and initates production server instances
		// within daemon child processes
		$manager = new \eGloo\System\Server\Manager($this->legacy());
		exit($manager->run()); 
		
	}	
	
	protected function caseStop() {
		echo 'stop the server';
		return false;
	}
	
	
	protected function caseNew() { 
		
	} 
	
	protected function caseLess() { 
		// you aint got no case!
	}
	
	protected function caseList() { 
		
	}
	
	protected function caseChildstart() { 
		
	}
	
	protected function caseTaskstart() { 
		
	}
	
	protected function caseSecretkey() { 
		
	}
	
	protected function casePackage() { 
		
	}

}