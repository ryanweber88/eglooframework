path,has_doc,line_end
<?php
$hasDoc = strlen($reflection_file->getDocComment()) 
	? 'true'
	: 'false';
	

echo "{$reflection_file->getFileName()},$hasDoc,{$reflection_file->getEndLine()}";