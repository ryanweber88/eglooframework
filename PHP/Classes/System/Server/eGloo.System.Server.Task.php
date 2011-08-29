<?php
namespace eGloo\System\Server;

/**
 * 
 * A task is an asynchronous, background (daemon) task, running in its own child
 * process; this is similar to a server process, but unlike a server, a task
 * has a defined endpoint, as opposed to a continuous loop, polling for requests
 * @author Christian Calloway
 *
 */
class Task extends \photon\manager\Task { 
	
	public function info($message, $eol = PHP_EOL) { 
		return parent::info(Utilities::rebrand($message), $eol);
	}
}