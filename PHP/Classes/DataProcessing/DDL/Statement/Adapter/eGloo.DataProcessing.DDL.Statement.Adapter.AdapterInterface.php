<?php
namespace eGloo\DataProcessing\DDL\Entity\Statement\Adapter;

interface AdapterInterface {
	
	public static function processOrderBy($fieldString);
}