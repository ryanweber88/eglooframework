<?php
/**
 * Contains Git class definition
 * author Christian Calloway callowaylc@gmail christian@petflow
 */
 namespace eGloo\Script\Git;
 
/**
 * Utility class - provides set of static public function to execute git commands
 */ 
class Git {
	
	const HASH_NEW_BRANCH = '0000000000000000000000000000000000000000';
	
	/**
	 * Returns file contents for a given revision (defaults to head)
	 * @TODO 'file' is a bit of a misnomer since we can use this
	 * to show more than just file content
	 */
	public static function content($path, $revision = 'HEAD') {
		return `git show $revision:$path`;
	}
	
	/**
	 * Determines if given object exists in revision (defaults to head)
	 */
	public static function exists($object, $revision = 'HEAD') {
		return stripos(`git ls-tree -r $revision`, $object) !== false;	
		
	}
	
	public static function modified_files($old = 'HEAD^1', $new = 'HEAD') {
		
		$files = array();
		$out   = array();
				
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
			$files[] = $match[2];	
		}
		

				
		return $files;
	}
	

	
}