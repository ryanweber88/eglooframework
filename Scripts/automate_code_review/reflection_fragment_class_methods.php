name,line_start,line_end,has_doc
<?php
$data = [ ];

foreach($reflection_class->getMethods() as $method) {
	if ($method->getDeclaringClass()->getName() == $reflection_class->getName()) {
		$hasDocComment = strlen($method->getDocComment())
			? 'true' : 'false';
			
		echo "{$method->getName()},{$method->getStartLine()},{$method->getEndLine()},$hasDocComment\n";
	}
}