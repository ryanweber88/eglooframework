name,has_doc,line_start,line_end
<?php
$hasDoc = strlen($reflection_class->getDocComment()) 
	? 'true'
	: 'false';
	
echo "{$reflection_class->getName()},$hasDoc,{$reflection_class->getStartLine()},{$reflection_class->getEndLine()}";