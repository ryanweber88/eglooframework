<?php
/**
 * Contains Module::PHPMessDetector class definition
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
 namespace eGloo\Script\Git\Hook\Module;
 use       \eGloo\Script\Git\Hook;
 use       \eGloo\Utilities\Git;


/**
 * Responsible for running mess detector on commited code
 */
class PHPMessDetector extends Hook\Module {

	const COMMAND_PMD    = 'phpmd';
	const DIRECTORY_DUMP = '/tmp/phpmd';

	public function cache() {}

	protected function invoke($hook) {

		// check for installation of pmd
		if (static::installed()) {

			// make temporary directory in which to place files
			// to be sniffed
			static::rmdir(self::DIRECTORY_DUMP);
			@mkdir(self::DIRECTORY_DUMP);

			// iterate through modified files and write to
			// dump directory; we still maintain file path
			// relative dump
			$files = Git::modified_files(
				$hook->revision_old, $hook->revision_new
			);

			if ( !empty($files) ) {
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
			}

			// finally we drop the godamn dump directory
			// static::rmdir(self::DIRECTORY_DUMP);

		}

		else {
			$this->log(
				"Failed to run {$this->class} because PHP Mess Detector is not installed"
			);

		}

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

	/**
	 * Issues command to begin code check
	 * @TODO refactor ModuleDependency class
	 */
	protected static function execute() {
		$command = self::COMMAND_PMD;
		$path    = self::DIRECTORY_DUMP;

		// $rules_path = \eGloo\Configuration::getFrameworkRootPath() . '/Build/phpmd.xml';
		$rules_path = '/data/code/eglooframework/Build/phpmd.xml';

		static::rmdir('/tmp/phpmd_log');
		@mkdir('/tmp/phpmd_log');

   // <!-- <arg value="codesize,unusedcode,naming,design" /> -->

		return `$command $path xml "$rules_path" "naming" --reportfile /tmp/phpmd_log/pmd.xml`;
	}
	/**
	 * Because this module is dependent
	 * @TODO refactor to ModuleDependency class
	 */
	protected static function installed() {
		return strlen(`which phpcs`) > 0;
	}

	private static function directory($path) {
		return dirname(self::DIRECTORY_DUMP . "/$path");
	}

	private static function file($file) {
		return self::DIRECTORY_DUMP . "/$file";
	}
}
