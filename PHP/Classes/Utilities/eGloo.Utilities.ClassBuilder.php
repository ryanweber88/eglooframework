<?php
namespace eGloo\Utilities;

/**
 * 
 * Runtime class builder; serves as "simple" facade to build an RClass and associated properties 
 * @author christian@petflow.com
 *
 */
class ClassBuilder { 
	
	const T_CLASS = 'class';
	const T_METHOD = 'method';
	const T_PROPERTY = 'property';
	const T_CONST = 'constant';
	const T_ARGUMENT = 'argument';
	const T_STATEMENT = 'statement';
	
	const V_PUBLIC = 'public';
	const V_PROTECTED = 'protected';
	const V_PRIVATE = 'private';
	
	const TPL_FILE = 'RFile.tpl';
	
	function __construct(ClassBuilder\Aspect $aspect) {
		$this->aspect = $aspect;
	}
	
	/**
	 * 
	 * Writes data aspect to specified path
	 * @param string $path
	 */
	public function write($path) { 
		$template = $this->templateEngine();
		$template->assign ('class', $this->fetch());
		
		$resource = fopen($path, "w");
		fwrite($resource, \eGloo\Utilities\ClassBuilder\Formatter::format($template->fetch(self::TPL_FILE)));
		fclose($resource);
	}
	
	public function fetch() {
		return (string) $this->aspect;
	}
	
	
	/**
	 * 
	 * Magic method facade interface to build class, methods, properties, constants
	 * @param string $name
	 * @param mixed* $arguments
	 */
	public function &__call($name, $arguments) { 
				
		// if builder type is class, check that method/property/const
		// were called, in which case a builder is wrapped around
		// type and returned
		if ($this->wrapsClass() || $this->wrapsMethod()) { 
			$builder = null;
					
			
			if (!is_null($builder = static::create($name, $arguments[0]))) { 
				
				// call creation method and double-link
				$this->aspect->$name(&$builder->aspect);
				
				// uncomment later - cannot var export as it creates infinite references
				//$builder->aspect->owner(&$this->aspect);
				
				return $builder;
			}
		}
		
		// form double-linked attachments
		//if (!$this->wrapsClass()) { 
		//	$this->aspect->owner(&$this->aspect);
		//}
		
		// call method on aspect; if it doesn't exist, it will fallback to
		// dynamic method which will explicitly set properties
		$this->aspect->$name($arguments[0]);
		
		// return reference to self to allow for chaining
		// of methods
		return $this;
	}
	
	/**
	 * Factory method for creating runtime class definitions
	 */
	public static function create($type = self::T_CLASS, $name = null) { 
	
		switch ($type) { 
			case self::T_CLASS    : 
				$builder = new ClassBuilder(new ClassBuilder\Aspect\RClass(self::templateEngine()));
				break;
				
			case self::T_METHOD   : 
				$builder = new ClassBuilder(new ClassBuilder\Aspect\Member\RMethod(self::templateEngine()));
				break;
			case self::T_PROPERTY :
				$builder = new ClassBuilder(new ClassBuilder\Aspect\Member\LValue\RProperty(self::templateEngine()));
				break;
				
			case self::T_CONST    :
				$builder = new ClassBuilder(new ClassBuilder\Aspect\Member\LValue\RConstant(self::templateEngine()));
				break;
				
			case self::T_ARGUMENT :
				$builder = new ClassBuilder(new ClassBuilder\Aspect\Member\LValue\RArgument(self::templateEngine()));
				break;
				
			case self::T_STATEMENT :
				$builder = new ClassBuilder(new ClassBuilder\Aspect\Member\RStatement(self::templateEngine()));
				break;				
				
			default               :
				return null;
		}
		
		if (!is_null($name)) {
			$builder->name($name);
		}
		
		return $builder;
	}
	
	protected function wrapsClass() { 
		return $this->aspect instanceof ClassBuilder\Aspect\RClass;
	}
	
	protected function wrapsMethod() { 
		return $this->aspect instanceof ClassBuilder\Aspect\Member\RMethod;
	}
	
	protected function wrapsConstant() { 
		return $this->aspect instanceof ClassBuilder\Aspect\Member\LValue\RConstant;
	}
	
	protected function wrapsProperty() { 
		return $this->aspect instanceof ClassBuilder\Aspect\Member\LValue\RProperty;	
	}
	
	protected function wrapsArgument() { 
		return $this->aspect instanceof ClassBuilder\Aspect\Member\LValue\RProperty;	
	}	
	
	private static function templateEngine() { 
		return new \ClassBuilderDefaultTemplateEngine(null);
		
	}
	
	
	private $aspect;
}