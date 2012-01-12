path,has_doc,line_start,line_end
<?php
$hasDoc = strlen($reflection_file->getDocComment()) 
	? 'true'
	: 'false';

echo "{$reflection_file->getFileName()},$hasDoc,0,{$reflection_file->getEndLine()}";