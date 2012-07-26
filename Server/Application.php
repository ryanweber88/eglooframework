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
    		
    		$this->_initEgloo($context);
				
				
				$handler = function() {
					ob_start();
					require 'handler.php';
					$content = ob_get_clean();
					
					return $content;
				};
				$handler->bindTo($this);
				$content = $handler();
				
				
				
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
		}

}
