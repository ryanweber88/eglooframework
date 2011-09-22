<?php
namespace eGloo\TemplateProcessing\Engines\Bridge\TemplateEngine;

/**
 * 
 * Provides a bridge to Smarty implementor interface; within eGloo system,
 * the ancestors of \DefaultTemplateEngine
 * @author Christian Calloway
 *
 */
class Native extends \eGloo\TemplateProcessing\Engines\Bridge\TemplateEngine {
		
	/**
	 * 
	 * Override implementor method to check if natively compiled
	 * template is available, if not, fall back to implementor
	 * method
	 * @param  string $path
	 * @param  string $cacheId
	 * @return string
	 */
	public function fetch($path, $cacheId = null) { 
		
		// grab instance of application
		$application = &\eGloo\System\Server\Application::instance();
		
						
		// keep native interface alive throughout application run - associate/index
		// to hash of path + cacheId
		$smartyNative = $application->context()->retrieve("$path/$cacheId", function() use ($path, $cacheId) { 
			$smartyNative = new \eGloo\Utilities\HPHP\Target\HTTP\Smarty();
			
			// this is fucked right now
			//$native->path($path);
			//$native->cacheId($cacheId);
			// end fucked
			
			$smartyNative->assign('path', $path);
			$smartyNative->assign('cache_id', $cacheId);
			$smartyNative->assign($this->implementor->getTemplateVars());
			
			return $smartyNative;
		});
				
		
		// provide callback if native execution fails
		return $smartyNative->execute(array(false => function($content) use ($path, $cacheId) { 
			
			// get content from implementors fetch method
			$content = $this->implementor->fetch($path, $cacheId);
			
			//echo "failure $path"; exit;
			
			// move compiled php to Native Smarty compiled directory
			// and trigger recompilication
			\eGloo\Utilities\HPHP\Target\HTTP\Smarty::registerCompiled($this->implementor->getCompiledFilepath(
				$path 
			));
			

			return $content;			
			
		}));
		
		
	
	}
	
	
}