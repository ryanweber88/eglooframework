<?php
namespace eGloo\System\Server\Command\CLI;

/**
 * 
 * Provides execution business logic for server command; exits within in case methods
 * are for parent process exit (child process runs as daemon in infinite loop)
 * @author petflowdeveloper
 *
 */
class Server extends \eGloo\System\Server\Command\CLI { 


	protected function caseStart() { 
		// forks process and initates production server instances
		// within daemon child processes
		$manager = new \eGloo\System\Server\Manager($this->legacy());
		$manager->run();
		
		exit;
	}	
	
	protected function caseStop() {
		// sends a stop signal to production servers
		$commander = new \eGloo\System\Server\CommandServer($this->legacy());
		$commander->runStop();

		return false;
	}
	
	
	protected function caseNew() { 
		
	} 
	
	protected function caseLess() { 
		// you aint got no case!
		
	}
	
	protected function caseList() { 
		// list running EAS instances
		$commander = new \eGloo\System\Server\CommandServer($this->legacy());
		$commander->runList();
		
		exit;
	}
	
	protected function caseChildstart() { 
		// process is (should be) already forked an daemonized; initiate
		// childserver which is a wrapper of production server 
		$process = new \eGloo\System\Server\ChildServer($this->legacy());
        $process->run();

        exit;
	}
	
	protected function caseTaskstart() { 
		
	}
	
	protected function caseSecretkey() { 
		
	}
	
	protected function casePackage() { 
		
	}

}