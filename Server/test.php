<?php
//namespace eGloo\TemplateProcessing\Engines\Bridge\TemplateEngine;

use eGloo\TemplateProcessing\Engines\Bridge\TemplateEngine\Blitz;
class Test { 
	
	const EXTENSION = 'blitz';
	const TEST_TPL = '/tmp/tpl1/sub1/tpl1.tpl';
	
	function __construct() { 

		// build mock implementor instance
		$this->implementor = new stdClass;
		$this->implementor->right_delimiter = '<!--{';
		$this->implementor->left_delimiter  = '}-->';
		$this->implementor->template_dir = [
			'/tmp/tpl1',
			'/tmp/tpl2',
			'/tmp/tpl3',
			'/tmp/tpl1/sub1'
		];
		
		// instantiate blitz if extension is available
		if ($this->isBlitzAvailable()) {
			$this->blitz = new \Blitz;
			$this->variables = [ ];
		}
		
		// create mock template values
		foreach([1, 2, 3, 4] as $value) { 
			$this->assign("$variable$value", $value);
		}
	}
	
	public function fetch($path, $cacheId) { 
		if ($this->isBlitzAvailable()) { 
			$this->blitz->set($this->variables);			
		}
		
		else { 
			return $this->implementor->fetch($path, $cacheId);
		}
	}

	/**
	 * 
	 * "Overrides" implementor method if blitz is indeed available;
	 * ass
	 */
	public function assign($key, $value = null, $nocache = false) { 
		if ($this->isBlitzAvailable()) { 
			$this->variables[$key] = $value;
		}
		
		else { 
			$this->implementor->assign($key, $value);
		}
	}
	
	public function run() {
		$buf = $this->translate(file_get_contents(
			self::TEST_TPL
		));
		
		echo $buf;
	}
	
	
	protected function translate($content) { 
		// translates smarty templates (as well as its includes - recursively)
		// to blitz compatible template 
		$rightDelimiter = preg_quote(
			$this->implementor->left_delimiter
		);

		$leftDelimiter = preg_quote(
			$this->implementor->right_delimiter
		);
		
		// match include statements
		// TODO determine the wisdom of using eval statement here - 
		// would be far easier for includes
		preg_match_all(
			"/{$leftDelimiter}include.+?file=('|\")(.+?)('|\").*?{$rightDelimiter}/", 	
			$content,	
			$matches,	
			PREG_SET_ORDER|PREG_OFFSET_CAPTURE
		);
		
		
		// iterate through matches in reverse order - more efficient, more
		// ugly than array_reverse
		for ($counter = count($matches) - 1; $counter >= 0; $counter--) { 
			$match = &$matches[$counter]; 
			$replace = $this->translate(file_get_contents($this->path(
				$match[2][0]
			)));
						
			$content = $this->splice (
				$content, $match[0][1], strlen($match[0][0]), $replace
			);
		}
		
		// do variable interpolation -----------------------------------------/
		
		
		$content = preg_replace(
			"/{$leftDelimiter}(\\$.+?){$rightDelimiter}/", 	
			'{{ $1 }}',	
			$content		
		); 
		
				
		// do conditionals ---------------------------------------------------/
		
		
		
		// do looping
		
		return $content;
		
	}
	
	
	private function path($fileName) { 
		// find the correct path to template
		
		// iterate through template_dirs till we find file that exists
		foreach ($this->implementor->template_dir as $path) { 
			if (file_exists("$path/$fileName")) { 
				return "$path/$fileName";	
			}
		}
		
		throw new \Exception(
			"TEMPLATE $fileName specified in include cannot be" . 
			"found in template paths >> " . 
			print_r($this->implementor->template_dir, true)
		);
				
	}

	
	final private function isBlitzAvailable() { 
		// checks for the existence of blitz module
		// TODO check overhead of extension_loaded fnuction
		if (is_null(static::$blitzAvailable)) { 
			static::$blitzAvailable = extension_loaded(
				self::EXTENSION
			);
		}
		
		return static::$blitzAvailable;
	}

	final private function splice($input, $offset, $length=null, $splice='') {
	  $input = (string)$input;
	  $splice = (string)$splice;
	  $count = strlen($input);
	  
	  // Offset handling (negative values measure from end of string)
	  if ($offset<0) $offset = $count + $offset;
	
	  // Length handling (positive values measure from $offset; negative, from end of string; omitted = end of string)
	  if (is_null($length)) $length = $count;
	  elseif ($length < 0)  $length = $count-$offset+$length;
	
	  // Do the splice
	  return substr($input, 0, $offset) . $splice . substr($input, $offset+$length);
	}	
	
	private        $implementor;
	protected      $blitz;
	protected      $variables;
	private static $blitzAvailable;

	
}

$t = new Test;
$t->run();