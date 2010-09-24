<?php
/**
 * eGlooDefaultRequestProcessor Class File
 *
 * $file_block_description
 * 
 * Copyright 2010 eGloo, LLC
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *        http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *  
 * @author George Cooper
 * @copyright 2010 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @package $package
 * @subpackage $subpackage
 * @version 1.0
 */

/**
 * eGlooDefaultRequestProcessor
 *
 * $short_description
 *
 * $long_description
 *
 * @package $package
 * @subpackage $subpackage
 */
class eGlooDefaultRequestProcessor extends RequestProcessor {

    /**
     * Concrete implementation of the abstract RequestProcessor method
     * processRequest().
     * 
     * This method handles processing of the incoming client request.  Its
     * primary function is to establish the deployment environment (dev, test,
     * production) and the current localization, and to then parse the correct
     * template(s) in order to construct and output the appropriate external
     * main page (the domain root; e.g. www.egloo.com).
     * 
     * @access public
     */
    public function processRequest() {
        eGlooLogger::writeLog( eGlooLogger::DEBUG, "ExternalMainPageBaseRequestProcessor: Entered processRequest()" );

		$templateDirector = TemplateDirectorFactory::getTemplateDirector( $this->requestInfoBean );
		$templateBuilder = new XHTMLBuilder();

		$templateDirector->setTemplateBuilder( $templateBuilder );

		$templateDirector->preProcessTemplate();

		$templateDirector->setTemplateVariables( $templateVariables, true );            

		$output = $templateDirector->processTemplate();

		eGlooLogger::writeLog( eGlooLogger::DEBUG, "ExternalMainPageBaseRequestProcessor: Echoing Response" );

		// TODO move header declarations to a decorator
		header("Content-type: text/html; charset=UTF-8");

		// TODO buffer output
		echo $output;        

        eGlooLogger::writeLog( eGlooLogger::DEBUG, "ExternalMainPageBaseRequestProcessor: Exiting processRequest()" );
    }

}
