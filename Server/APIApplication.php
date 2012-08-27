<?php
// @TODO I'd like to find a more elegant more to autoinclude our autoloader 
// but for now this is fine
require_once 'autoload.php';

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
			
			$this->afterInvoke();

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
			
			if (isset($_GET['resource'])) {
				$_SERVER['PATH_INFO']   = $_GET['resource'];
			}
				
			// retrieve resource and resource tokens
			if (isset($_GET['resource'])) {
				$_GET['resource_tokens'] = array_slice(
					explode('/', $_GET['resource']), 1
				);
				$_GET['service'] = $_GET['resource_tokens'][0];
			}
			
			// examine id if present and determine if multi-get id
			if (isset($_GET['id']) && 
			   (strlen($id = $_GET['id']) && !is_numeric($id))) {

				// @TODO we need to check against correct delimiting token
				$_GET['ids'] = explode(';', $id);
				unset($_GET['id']);
			}
				 
			// fill in defaults for offset and limit, should they
			// not exist
			// @TODO find a way to abstract this, because this very
			// much application specific
			isset($_GET['offset']) || $_GET['offset'] = 0;
			isset($_GET['limit'])  || $_GET['limit']  = 10;
			
			// manage json payload;
			// @TODO change to thrift and decouple from current layer 
			foreach(array('POST', 'PUT') as $method) {
				if (isset($GLOBALS[$m = "_$method"])) {
					$GLOBALS[$m] = json_decode(
						$GLOBALS[$m];
					);
					
				}
			}
			 			
		}
		
		
		private function afterInvoke() {
			

		}

}