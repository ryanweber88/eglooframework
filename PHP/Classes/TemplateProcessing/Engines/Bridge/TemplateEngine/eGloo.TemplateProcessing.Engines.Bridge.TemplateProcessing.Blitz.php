<?php
namespace eGloo\TemplateProcessing\Engines\Bridge\TemplateEngine;

class Blitz extends \eGloo\TemplateProcessing\Engines\Bridge\TemplateEngine {

	const EXTENSION = 'blitz';

	public function fetch($path, $cacheId) {
		if ($this->isBlitzAvailable()) {
			$blitz = new \Blitz;
			$blitz->set($this->implementor->getTemplateVars());

		}

		else {
			return $this->implementor->fetch($path, $cacheId);
		}
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

		// match include statements, and recursively replace content
		preg_replace(
			"/{$rightDelimiter}include.+?file=('|\")(.+?)('|\"){$leftDelimiter}/",

			$this->translate(file_get_contents($this->tplPath('$2'))),

			$content
		);

	}

	// private function tplPath


	final private function isBlitzAvailable() {
		// checks for the existence of blitz module
		// TODO check overhead of extension_loaded fnuction
		return extension_loaded(self::EXTENSION);
	}

}
