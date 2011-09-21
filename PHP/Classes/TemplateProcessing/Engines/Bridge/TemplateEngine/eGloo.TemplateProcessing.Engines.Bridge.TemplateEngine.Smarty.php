<?php
namespace eGloo\TemplateProcessing\Bridge\TemplateEngine;

/**
 * 
 * Provides a bridge to Smarty interface; within eGloo system,
 * the ancestors of \DefaultTemplateEngine
 * @author Christian Calloway
 *
 */
class Smarty extends \eGloo\TemplateProcessing\Bridge\TemplateEngine {
	
	/**
	 * 
	 * Override implementor method to check if natively compiled
	 * template is available, if not, fall back to implementor
	 * method
	 * @param  string $path
	 * @param  string $cacheId
	 * @return string
	 */
	public function fetch($path, $cacheId) { 
		
		// grab instance of application
		$application = &\eGloo\System\Server\Application::instance();
		
		// instantiate interface to native object and
		// cache into application context		
		$native = $application->find("$path/$cacheId", function() { 
			$native = new \eGloo\Utilities\HPHP\Target\HTTP\Smarty();
			$native->path = $path;
			$native->cacheId = $cacheId;
			$native->assign($this->implementor->getTemplateVars());
		});
		
		// callback here ??
		return $native->execute([
			// playing with this idea
			'failure' => function($something) { 
				return $this->implementor->fetch($path, $cacheId);
			}
		]);
		
		// if failed with native execution, then use underlying 
		// implementor method
		//$this->implementor->fetch($path, $cacheId);
	}
}