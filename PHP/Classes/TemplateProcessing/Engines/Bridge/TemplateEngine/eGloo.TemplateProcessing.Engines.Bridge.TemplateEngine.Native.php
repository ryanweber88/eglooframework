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

	use \eGloo\System\Server\Context\ContextTrait;
	
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
				
		
						
		// keep native interface alive throughout application run - associate/index
		// to hash of path + cacheId
		$smartyNative = static::contextApplication()->retrieve("$path/$cacheId", function() use ($path, $cacheId) { 
			$smartyNative = new \eGloo\Utilities\HPHP\Target\HTTP\Smarty();
			
			// this is fucked right now
			//$native->path($path);
			//$native->cacheId($cacheId);
			// end fucked
			
			$smartyNative->assign('path', $path);
			$smartyNative->assign('cache_id', $cacheId);
			
			
			return $smartyNative;
		});
				
		// assign smarty template variables to native bridge
		$smartyNative->assign($this->implementor->getTemplateVars());
		
		
		// provide callback if native execution fails
		return $smartyNative->execute(array(false => function($content) use ($path, $cacheId) { 
			
			// TODO log execution failure
			exit ('fuckadoo');
			
			// get content from implementors fetch method
			$content = $this->implementor->fetch($path, $cacheId);
			echo $content; exit;
						
			// move compiled php to Native Smarty compiled directory
			// and trigger recompilication
			$this->registerCompiled($compiledFilepath = $this->implementor->getCompiledFilepath(
				$path 
			));
			
			// log template addition
			$logger = &$this->contextApplication()->retrieve('logger.smarty.template');
			$logger->log (
				"TEMPLATE addition >>> $path = $compiledFilepath"
			);
			

			return $content;			
			
		}));
		
		
	
	}
	
	
}