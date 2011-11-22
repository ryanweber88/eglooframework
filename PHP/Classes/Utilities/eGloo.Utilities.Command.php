<?php
namespace eGloo\Utilities;


/**
 * 
 * Abstract representation of any command; this would be better suited to an interface if it
 * weren't convenienct 
 * @author Christian Calloway
 *
 */
abstract class Command extends \eGloo\Dialect\Object { 
	
	/**
	 * 
	 * Enforcing that commands need names, and thus is explicitly tied 
	 * to command instantiation
	 * 
	 * @param string $name
	 */
	function __construct($name) { 
		parent::__construct();
		
		// set name property; this can be overriden in child classes
		$this->name = $name;
	}	
	
	
	
	/**
	 * 
	 * Executes said command
	 * @return boolean
	 */
	public function execute() { 
		// run cases based upon options should they exist; this is done to avoid an
		// endless series of switch statements based on the option, which
		// can be handled elegantly via polymorphic behavior
		
		// case method names folllow a few conventions:
		// naming = convetion case + Option (ucfirst character option)
		// returns boolean true to continue and false to break looop - this is done
		// so as to allow implementing classes to control the flow of cases being executed;
		// similar in concept to using a switch statement and a corresponding break
		// TODO: The above isn't an exact science and would rely looking at other options
		// being present, so think more about this
		
		/*
		$self = &$this;
		
		// can't do this till 5.4 install - fucking closure has no access to object
		// protected/private properties
		\eGloo\Utilities\Ruby\Iterator::rnew($this->options()).each(function($key, $methodName) use ($self) { 
			if ($self->methodExists($methodName)) { 
				$self->$methodName();
			}
		});
		*/
		
		// cover your bases - make sure array is, well an array 
		if ((is_array($this->options) || ($this->options instanceof ArrayAccess))  && count($this->options)) { 
			foreach($this->options() as $option) {
				$methodName =  'case' . ucfirst($option);
				
				if ($this->methodExists($methodName)) { 
					
					// break loop if method returns false
					if (!($continue=$this->$methodName()) || is_null($continue)) { 
						break ;
					}
				}
			}
		}
		
	}
	

	
	/** *@var string */
	protected $name;
	
	/** *@var string* */
	protected $options;
}