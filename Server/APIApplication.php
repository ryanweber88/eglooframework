<?php
// @TODO I'd like to find a more elegant more to autoinclude our autoloader 
// but for now this is fine
require_once 'autoload.php'

/**
 * Represents API application instance
 * @author Christian Calloway callowaylc@gmail.com christian@petflow.com
 */
class APIApplication extends \eGloo\Server\Application {


    public function __construct() {
  		parent::__construct();
			
			// remove __autoload from registered autoload stack
			spl_autoload_unregister($GLOBALS['__autoload']);
    }

    public function __invoke($context) {
			// run before invoke filters
			// @TODO move to actual callback/event oriented
			// system
  		$this->beforeInvoke($context);
			
			// define handler method which will load egloo
			// into application
			// @TODO move to master process
			$handler = function() use ($context) {
				ob_start();
				
				require 'handler.php';
				$content = ob_get_clean();
				
				return $content;
			};
			$handler->bindTo($this);
			$content = $handler();
			
			// build headers and return as response to
			// application invocation
      $headers = array(
          'Content-type', 'text/html; charset=utf-8',
          'Content-Length', strlen($content)
      );

      return array(200, $headers, $content);
    }



		/**
		 * Bootstraps egloo environment by faking the settings provided by 
		 * a tradional apache request route
		 * @TODO move to tradional bootstrap loader
		 */
		private function beforeInvoke($context) {
				
			// change directory to application instance; this is to allow for 
			// relative includes in DocRoot/handler.php
			// @TODO obviously this can't be hardcoded
			chdir('/var/www/api');
			
			// read in .htaccess into $_SERVER
			// match all SetEnv and place into $_SERVER global context
			// @TODO this should be done in middleware?
			preg_match_all (
				'/^SetEnv.+/im', $buf = file_get_contents('.htaccess'), $matches 
			);
					
			foreach ($matches[0] as $match) { 
				$parts = preg_split('/\s+/', $match);
				$_SERVER[$parts[1]] = @$parts[2];
			}
					
			
			// @TODO this should definitly be done in middleware
			$_SERVER = array_merge($_SERVER, $context['env']);			
			
			// fill in default values to play nicely with config load
			$_SERVER['SCRIPT_NAME'] = '/index.php';	
			 			
		}
		
		
		private function afterInvoke() { }

}