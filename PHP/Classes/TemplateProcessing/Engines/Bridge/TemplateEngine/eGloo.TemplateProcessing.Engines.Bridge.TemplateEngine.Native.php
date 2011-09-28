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
				
		//echo $path; exit;
								
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
		//$smartyNative->disabled = true;
		
		// provide callback if native execution fails
		return $smartyNative->execute(array(false => function($content, $smartyNative) use ($path, $cacheId) { 
			
			// TODO log execution failure
			//return 'in failed callback';
			
			// set implementor merge compiled templates flag; this is needed
			// for native smarty, as it can't do dynamic requires or evals
			$this->implementor->merge_compiled_includes = true;
			
			// get content from implementors fetch method
			$content = $this->implementor->fetch($path, $cacheId);
						
			// move compiled php to Native Smarty compiled directory
			// and trigger recompilication
			$smartyNative->registerCompiled($compiledFilepath = $this->implementor->getCompiledFilepath(
				$path 
			));
			
			
			
			// log template addition
			$logger = static::contextApplication()->retrieve('logger.smarty.template');
			$logger->log (
				"TEMPLATE addition >>> $path = $compiledFilepath"
			);
			
			// TODO reset implementor merge option?
			
			return $content;			
			
		}));
		
		//echo $content; exit ('here we go');
		exit;
		echo 'in failed content';
	}
	

	
	/**
	 * 
	 * Overrides implementors assign method to check for attempt
	 * to assign object value; in which case, 
	 * @param string|array $mixed
	 * @param mixed        $value
	 * @param boolean      $nocache
	 */
	public function assign($mixed, $value = null, $nocache = false) { 

		if (!is_null($value) && $value instanceof \eGloo\Utilities\Templates\ObjectComplianceInterface) { 
			$value = $value->toTemplateCompliant();
		}
		
		return parent::assign($mixed, $value, $nocache);
		
	}
	
	
}