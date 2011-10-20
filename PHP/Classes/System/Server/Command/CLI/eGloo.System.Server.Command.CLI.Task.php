<?php
namespace eGloo\System\Server\Command\CLI;

class Task extends eGloo\System\Server\Command\CLI { 
	
	public function caseStart() { 
		$task = new \eGloo\System\Server\Task($this->legacy());
		$task->run();
		
		exit(0);
	}
}