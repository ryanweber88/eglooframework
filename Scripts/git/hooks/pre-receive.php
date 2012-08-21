#!/usr/bin/php
<?php
/**
 * Git server pre-receive hook: fires on push, and is responsible for enforcing
 * process and coding standards; rules can be added via lambda in pre-recieve/rules
 * directory
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
 namespace eGloo\Script\Git\Hook;
 
// CONSTANTS //////////////////////////////////////////////////////////////////


// REQUIRES ///////////////////////////////////////////////////////////////////

// @TODO move this to autoloader?
require_once 'Hook.php';
require_once 'Module.php';

// CLASS //////////////////////////////////////////////////////////////////////

class PreReceive extends Hook {
	
	const HASH_NEW_BRANCH = '0000000000000000000000000000000000000000';
	
	
	/**
	 * Examines files that were created/updated on HEAD push
	 * @TODO this may removed on refactor for reuse on other commit hooks
	 */
	protected function modified_files() {
		$files = array();
		$out   = array();
		
		$resource = fopen('php://stdin', 'r');
		list($old, $new, $ignore) = explode(
			' ', fgets($resource)
		);
				
				
		// check if the first commit on a new branch, in which
		// case our git diff command changes
		if ($old == self::HASH_NEW_BRANCH) {
			$command = "git diff-tree --root $new";
			$reg     = '/\:\w+ \w+ \w+ (\w+) \w (.+)/';
		}
		
		else {
			$command = "git diff --raw $old $new";
			$reg     = '/\:\d+ \d+ \w+... (\w+)... \w\t(.+)/';
		}
		
		
		// execute command and retrieve changed file output
		// @TODO do we need to check return value here
		exec ($command, $out);
		
		// iterate across output lines from git diff
		// command and parse changed file names; finally
		// return parsed files to caller
		foreach($out as $line) {
			preg_match($reg, $line, $match); 
			
			// record blob (so we can see it later) and
			// filename
			$files[] = array(
				'blob' => $match[1],
				'file' => $match[2]	
			);
		}
				
		return $files;
	}
}





// MAIN ///////////////////////////////////////////////////////////////////////


PreReceive::fire();


// finally exit successfully
exit(EXIT_FAIL);