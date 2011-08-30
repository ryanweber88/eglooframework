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
		$manager = new \eGloo\System\Server\Manager($this->options());
		$manager->run();
		
		exit;
	}	
	
	protected function caseStop() {
		// sends a stop signal to production servers
		$commander = new \eGloo\System\Server\CommandServer($this->options());
		$commander->runStop();

		return false;
	}
	
	
	protected function caseNew() { 
		// adds an additional eas instance to stack
		$commander = new \eGloo\System\Server\CommandServer($this->options());
		$commander->runStart();

		exit(0);
	} 
	
	protected function caseLess() { 
		// you aint got no case! Remove eas instance from stack
		$commander = new \eGloo\System\Server\CommandServer($this->options());
		$commander->runLess();
		
		return false;
	}
	
	protected function caseList() { 
		// list running EAS instances
		$commander = new \eGloo\System\Server\CommandServer($this->options());
		$commander->runList();
		
		exit(0);
	}
	
	protected function caseChildstart() { 
		// process is (should be) already forked an daemonized; initiate
		// childserver which is a wrapper of production server; this is an internally
		// use case only
		$process = new \eGloo\System\Server\ChildServer($this->options());
        $process->run();

        exit(0);
	}

	
}