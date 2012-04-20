<?php
namespace eGloo\Dialect;

/**
 * Represents a php namespace and provides utility methods to manage
 * namespace/string manipulation
 */
class _Namespace extends ObjectSafe {
		
		/**
		 * Determine namespace, assuming a fully qualified class/function
		 * has been passed
		 * @return string
		 */
		public static function name($qualifiedClassName) {
			$tokens = explode('\\', $qualifiedClassName);
			
			return implode('\\', array_slice(
				$tokens, 0, count($tokens) - 1
			));
		}
}