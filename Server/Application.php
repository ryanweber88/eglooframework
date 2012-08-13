<?php

// @TODO obviously
const PATH_APPLICATION = '/var/www/api/PHP/Classes';

// this is a special case where we need to autoload eGloo base library
// classes; it is not built to be performant, and will be dropped
// from the stack once Application initializes
spl_autoload_register($GLOBALS['__autoload'] = function($name) {
	$filename = preg_replace('/\\\\/', '.', $name) . '.php';
	
	//$namspace = 
	$iterator = new RecursiveIteratorIterator(
		new RecursiveDirectoryIterator(PATH_APPLICATION)
	);
	
	foreach($iterator as $file) {
		if ($file->isFile() && $file->getFilename() == $filename) {
			require_once $file;
			
			// make sure object is instanceof of global Object
			// - if the case, then we are assured that we have
			// a __statuc method, whether a stubb or
			// actualy definition - since we are checking
			// on a string, we need to call methodExists
			// over
			if ( method_exists($name, '__static') ) {
				// because method exists will return true for inherited methods that
				// are NOT explicitly defined in class - we need to determine that
				// __static is in fact defined in loaded classes, otherwise we will
				// constantly call the Object::__static for all of its descendants;
				// to do this, we use reflection and check the declaring class against
				// our passed name parameter
				$reflection = new \ReflectionMethod($name, '__static');
		
				// since our static constructors do share the same concept of inheritence
				// as do regular constructors, we use the 'Polymorphic' annotation to
				// describe any static constructor that should be called in the
				// children of
				if (strpos($reflection->getDocComment(), '@Polymorphic') !== false ||
		
						// check if __static is in declaring class, as opposed to simply available
						// through inheritence
						$reflection->getDeclaringClass()->getName() == $name) {
		
					$name::__static();
				}
			}			
		}
	}
	
	
	
});

/**
 * 
 */
class Application extends \eGloo\Dialect\Object {
    private $local_storage;
    private $tpl = null;

    public function __construct()
    {
    		// call super object constructor
    		parent::__construct();
				
				// remove __autoload from registered autoload stack
				spl_autoload_unregister($GLOBALS['__autoload']);
				
    		
        $this->tpl = file_get_contents(__DIR__.'/template.html'); // caching template in local-memory
        $this->local_storage = array(
            'counter' => 0,
            'prev_memory_peak' => 0,
            'memory_peak_counter' => 0
        );
    }

    public function __invoke($context) {
    	
    	
    		$this->_initEgloo($context);
				
				$handler = function() use ($context) {
					ob_start();
					
					$method = "_{$_SERVER['REQUEST_METHOD']}";
					
					//parse_str(file_get_contents('php://input'), $tmp); 
					//var_export($tmp);
					
					require 'handler.php';
					$content = ob_get_clean();
					
					
					
					return $content;
				};
				$handler->bindTo($this);
				$content = $handler();
				
				// unset globals
				// @TODO why isn't this implemented in middleware
				
				unset($GLOBALS['_GET']);
				
				
				
				/*
				if (!isset($context['_COOKIE']['Hello']))
            $context['_COOKIE']->setcookie('Hello', 'world!');

        // replacing {data} in the "template" by our dynamic string and sending it out
        $body = str_replace('{data}', $this->prepareData($context), $this->tpl);
				*/
				
				//$content = var_export($_SERVER, true);
        $headers = array(
            'Content-type', 'text/html; charset=utf-8',
            'Content-Length', strlen($content)
        );

        return array(200, $headers, $content);
    }

		/**
		 * @TODO this is being kept for the time being as an example of usage
		 */
		private function prepareData($context)
    {

        $c = ++$this->local_storage['counter'];
        $m = memory_get_usage();
        $p = memory_get_peak_usage();

        if ($p > $this->local_storage['prev_memory_peak']) {
            $this->local_storage['prev_memory_peak'] = $p;
            $this->local_storage['memory_peak_counter'] = $c;
        }

        $buffer = '<pre>';
        $buffer .= 'Hello world! #'.$c."\n";
        $buffer .= 'Memory usage: '.$m."\n";
        $buffer .= 'Peak Memory usage: '.$p."\n";
        $buffer .= 'Memory usage last growed at request#'.$this->local_storage['memory_peak_counter']."\n\n";
        $buffer .= "HEADERS:\n".var_export($context['env'], true)."\n";
        $buffer .= "COOKIES:\n".var_export($context['_COOKIE']->__toArray(), true)."\n";
        $buffer .= "GET:\n".var_export($context['_GET'], true)."\n";

        if ($context['env']['REQUEST_METHOD'] === 'POST') {
            $buffer .= "POST:\n".var_export($context['_POST'], true)."\n";
            $buffer .= "FILES:\n".var_export($context['_FILES'], true)."\n";
        } elseif (!in_array($context['env']['REQUEST_METHOD'], array('GET', 'HEAD'))) {
            $buffer .= "BODY:\n".var_export(stream_get_contents($context['stdin']), true)."\n";
        }

        $buffer .= '</pre>';

        return $buffer;

    }


		/**
		 * Bootstraps egloo environment by faking the settings provided by 
		 * a tradional apache request route
		 * @TODO move to tradional bootstrap loader
		 */
		protected function _initEgloo($context) {
				
			// change directory to application instance; this is to allow for 
			// relative includes in DocRoot/handler.php
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
			
			$GLOBALS['_GET']['limit']  = 10;		
			$GLOBALS['_GET']['offset'] = 0;
			
			// fake setting of requestClass and requestID
			// @TODO this needs to be automated from our .htaccess file
			$tokens  = array_slice(explode('/', $_SERVER['PATH_INFO']), 1);
			$service = $tokens[0]; 
			
			
			// check if id has been passed
			if (count($tokens) > 1) {
				$GLOBALS['_GET']['id'] = $tokens[1];
			}
			
			$GLOBALS['_GET']['id'] = 1;
			
			
			// check query string for offset and limit
			parse_str($_SERVER['QUERY_STRING'], $GLOBALS['_GET']);
			
			$GLOBALS['_GET']['eg_requestClass'] = $service;
			$GLOBALS['_GET']['eg_requestID']    = 'egDefault';
			
			 			
		}

}