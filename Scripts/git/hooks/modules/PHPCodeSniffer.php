<?php
/**
 * Contains Module::PHPCodeSniffer class definition
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
 namespace eGloo\Script\Git\Hook\Module;
 use       \eGloo\Script\Git\Hook;
 use       \eGloo\Utilities\Git;


/**
 * Responsible for checking to ensure phpunit files exist
 * @TODO refactor all of below to parent module class that is 
 * responsible for executing a command upon which it is dependent
 */
class PHPCodeSniffer extends Hook\Module {
	
	const COMMAND        = 'phpcs';
	const DIRECTORY      = '/tmp/phpcs';
	
	
	protected function invoke($hook) {
				
		// check for installation of phpcs
		if (static::installed()) {
			
			// make temporary directory in which to place files
			// to be sniffed
			@mkdir(self::DIRECTORY);
			
			// iterate through modified files and write to
			// dump directory; we still maintain file path
			// relative dump
			$files = Git::modified_files(
				$hook->revision_old, $hook->revision_new
			);
			
			foreach($files as $file) {
				// create directory for file, relative to
				// dump path
				@mkdir(static::directory($file), 0755, true);
				
				// write file content
				$resource = fopen(static::file($file), 'w'); 	
				fwrite($resource, Git::content($file, $hook->revision_new));
				fclose($resource);
				
			}
			
			// issue command on dump directory and retrieve results
			$results = static::execute();
			
			// parse results to determine errors
			preg_match_all('/FILE:\s+?(.+)/', $results, $file_matches,  PREG_SET_ORDER);
			preg_match_all('/FOUND:.+/', $results, $error_matches, PREG_SET_ORDER);
			
			// now log all summarized results
			if (count($file_matches)) {
				$counter = 0;
				
				foreach($file_matches as $file_match) {
					$error_match = $error_matches[$counter++];
							
					$this->log(
						"File '{$file_match[1]}' had the following errors:\n" . 
						"{$error_match[0]}" 					
					);
				}
			}
			
			// finally we drop the godamn dump directory
			//static::rmdir(self::DIRECTORY);
			
		}
		
		else {
			$this->log(
				"Failed to run {$this->class} because PHP Code Sniffer is not installed"
			);
			
		}
		
	}
	
	/**
	 * Issues command to begin code check
	 * @TODO refactor ModuleDependency class
	 */
	protected static function execute() {
		$command = self::COMMAND;
		$path    = self::DIRECTORY;
		
		return `$command $path`;
	}
	/**
	 * Because this module is dependent 
	 * @TODO refactor to ModuleDependency class
	 */
	protected static function installed() {
		return strlen(`which phpcs`) > 0;
	}
	
	private static function directory($path) {
		return dirname(self::DIRECTORY . "/$path");
	}
	
	private static function file($file) {
		return self::DIRECTORY . "/$file";
	}
	
	protected static function rmdir($directory) {
		
    $files = glob( $directory . '*', GLOB_MARK ); 
		
    foreach( $files as $file ){ 
        if( substr( $file, -1 ) == '/' ) 
            static::rmdir( $file ); 
        else 
            unlink( $file ); 
    } 
    
    if (is_dir($directory)) {
    	rmdir( $directory );
		}  		
	}	
}