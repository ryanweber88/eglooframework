<?php

class Application
{
    private $local_storage;
    private $tpl = null;

    public function __construct()
    {
        $this->tpl = file_get_contents(__DIR__.'/template.html'); // caching template in local-memory
        $this->local_storage = array(
            'counter' => 0,
            'prev_memory_peak' => 0,
            'memory_peak_counter' => 0
        );
    }

    public function __invoke($context)
    {
    		//$content = var_export($context, true);
    		$this->_initEgloo();
				
				ob_start();
				require 'handler.php';
				$content = ob_get_clean();
				
				if (!isset($context['_COOKIE']['Hello']))
            $context['_COOKIE']->setcookie('Hello', 'world!');

        // replacing {data} in the "template" by our dynamic string and sending it out
        $body = str_replace('{data}', $this->prepareData($context), $this->tpl);

        $headers = array(
            'Content-type', 'text/html; charset=utf-8',
            'Content-Length', strlen($content)
        );

        return array(200, $headers, $content);
    }

		private function prepareData($context)
    {

    		$this->__initEgloo();
				

    }

		/**
		 * Bootstraps egloo environment by faking the settings provided by 
		 * a tradional apache request route
		 * @TODO move to tradional bootstrap loader
		 */
		protected function _initEgloo() {
				
			// change directory to application instance; this is to allow for 
			// relative includes in DocRoot/handler.php
			chdir('/var/www/api');
			
			// read in .htaccess into $_SERVER
			// match all SetEnv and place into $_SERVER global context
			preg_match_all (
				'/^SetEnv.+/im', $buf = file_get_contents('.htaccess'), $matches 
			);
					
			foreach ($matches[0] as $match) { 
				$parts = preg_split('/\s+/', $match);
				$_SERVER[$parts[1]] = @$parts[2];
			}
			
			
			// fill in default values to play nicely with config load
			$_SERVER['SCRIPT_NAME'] = '/index.php';			
			
		}

}