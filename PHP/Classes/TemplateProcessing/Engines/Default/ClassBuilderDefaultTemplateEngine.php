<?php
/**
 * 
 * Class builder specific template engine
 * @author christian@petflowdeveloper.com
 *
 */
class ClassBuilderDefaultTemplateEngine extends DefaultTemplateEngine { 
	
	const INTERFACE_BUNDLE = 'Default';
	const PATH_TEMPLATE = '/Templates/Core/ClassBuilder/';
	
	function __construct($interface_bundle = null, $locale = 'US', $language = 'en' ) { 
		parent::__construct(self::INTERFACE_BUNDLE);
		
		// turn off error reporting
		$this->error_reporting = error_reporting() & ~E_NOTICE; 
	}
	
	public function setTemplatePaths( $templatePaths = null ) {
		$this->template_dir = eGlooConfiguration::getFrameworkRootPath() . self::PATH_TEMPLATE;
	}
}