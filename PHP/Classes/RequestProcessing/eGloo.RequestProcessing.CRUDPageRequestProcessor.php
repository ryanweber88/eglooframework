<?php

namespace eGloo\RequestProcessing;

use \eGloo\RequestProcessing\PageRequestProcessor;

use \eGloo\Configuration as Configuration;
use \eGloo\Utility\Logger as Logger;

/**
 * CRUDPageRequestProcessor Class File
 *
 * Contains the class definition for the CRUDPageRequestProcessor
 *
 * Copyright 2012 eGloo, LLC
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
 * @copyright 2012 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @category $category
 * @package $package
 * @subpackage $subpackage
 * @version 1.0
 */

/**
 * CRUDPageRequestProcessor
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
class CRUDPageRequestProcessor extends PageRequestProcessor {

	protected $_build_default_form = true;

	protected $_defaultFormObj = null;

	protected $_default_model_base = null;
	protected $_default_model_name = null;

	public function __construct() {
		static::attachObserver( $this, ['update_action', 'invoke_action'] );
		parent::__construct();
	}

	protected $routes = [
		'index' => [
			'methods' => ['GET'],
			'matches' => [
				'@controller/?',
				'@controller/index'
			],
		],
		'new' => [
			'methods' => ['GET'],
			'matches' => [
				['@controller/new' => '@controller#_new'],
			],
		],
		'create' => [
			'methods' => ['POST'],
		],
		'edit' => [
			'methods' => ['GET'],
			'matches' => [
				'@controller/:id/edit',
				'@controller/edit/:id',
				// ['@controller/edit/:id' => '@controller#index'], example reroute
			],
		],
		'update' => [
			'methods' => ['POST'],
			'matches' => [
				'@controller/:id',
				'@controller/:id/update'
			],
		],
		'show' => [
			'methods' => ['GET'],
			'matches' => ['@controller/:id'],
		],
		'destroy' => [
			'methods' => ['DELETE'],
			'matches' => ['@controller/:id'],
		],
	];

	// new /controller/new action GET
	protected function _new( $validation_result = null )  {
		echo $this->_default_form->render();
	}

	// create /controller/ action POST
	protected function create( $validation_result = null )  {echo_r('vagina'); }

	// edit /controller/edit/:id action GET
	protected function edit( $validation_result = null )    { }

	// update /controller/:id action PUT
	protected function update( $validation_result = null )    { echo_r ('dick'); }

	// show /controller/:id action GET
	protected function show( $validation_result = null )    { }

	// destroy /controller/:id action DELETE
	protected function destroy( $validation_result = null ) { }

	// setup primary form, if applicable
	protected function buildDefaultForm() {
		if ( !$this->_build_default_form ) {
			return false;
		}

		if ( isset($this->_default_model_name) ) {
			$this->_default_model_base = $model_base = substr($this->_default_model_name, strrpos($this->_default_model_name, '\\') +1 );
			$model_name_space = substr($this->_default_model_name, 0, strrpos($this->_default_model_name, '\\') );
		} else {
			$self_name = get_called_class();
			// $this->_default_model_name = get_called_class();

			$this->_default_model_base = $model_base = substr( $self_name, 0, strpos($self_name, 'RequestProcessor') );

			if ( class_exists( '\\' . $model_base, true) ) {
				$this->_default_model_name = '\\' . $model_base;
			} else if ( class_exists( '\eGloo\Domain\Model\\' . $model_base, true) ) {
				$this->_default_model_name = '\eGloo\Domain\Model\\' . $model_base;
			} else if ( class_exists( '\Common\Domain\Model\\' . $model_base, true) ) {
				$this->_default_model_name = '\Common\Domain\Model\\' . $model_base;
			} else {
				// TODO log or throw error
			}

			$model_name_space = substr($this->_default_model_name, 0, strrpos($this->_default_model_name, '\\') );
		}

		if ( isset($this->_default_model_name) && class_exists($this->_default_model_name, true) ) {
			$formObj = new \ValidatedForm( strtolower($model_base) );
			// $formObj->setAction( strtolower($model_base) . '/create');
			$formObj->setAction( Configuration::getRewriteBase() . strtolower($model_base) );

			$form_model_class = $this->_default_model_name;

			$constraints = $form_model_class::constraints();

			foreach( $form_model_class::field_definitions() as $field_definition ) {
				$field_name = $field_definition['column_name'];

				$fieldObj = new \ValidatedFormField( $field_name );

				$constraint_call = 'constraint_for_field_' . $field_name;

				$constraints = $form_model_class::$constraint_call();

				$is_foreign_key = false;

				if ( !empty($constraints) ) {
					foreach( $constraints as $constraint ) {
						if ( $constraint['constraint_type'] === 'FOREIGN KEY' ) {
							$is_foreign_key = true;
							$table_name = $constraint['table_name'];

							$model_case = $model_name_space . '\\' . \eGlooString::toCamelCase( $table_name, '_', true );

							if ( !class_exists($model_case) ) {
								$model_case = $model_name_space . '\\' . str_replace(' ', '\\', \eGlooString::toPrettyPrint( $table_name, '_', true, true ) );
							}

							if ( !class_exists($model_case) ) {
								throw new \Exception( 'No associated model class found for foreign relationship ' .
									$table_name . ' on model ' . $model_base . ' (' . $form_model_class::entityName() . ').');
							}

							$foreign_options = $model_case::all();

							$select_matches = [];

							foreach($foreign_options as $foreign_option) {
								if ( property_exists($foreign_option, 'name') || $foreign_option->isAliasedProperty('name') ) {
									$select_matches[$foreign_option->id] = $foreign_option->name;
								} else if ( property_exists($foreign_option, 'title') || $foreign_option->isAliasedProperty('title') ) {
									$select_matches[$foreign_option->id] = $foreign_option->title;
								} else if ( property_exists($foreign_option, $table_name) || $foreign_option->isAliasedProperty($table_name) ) {
									$select_matches[$foreign_option->id] = $foreign_option->$table_name;
								} else if ( property_exists($foreign_option, 'label') || $foreign_option->isAliasedProperty('label') ) {
									$select_matches[$foreign_option->id] = $foreign_option->label;
								} else if ( property_exists($foreign_option, 'description') || $foreign_option->isAliasedProperty('description') ) {
									$select_matches[$foreign_option->id] = $foreign_option->description;
								} else {
									$select_matches[$foreign_option->id] = $foreign_option->id;
								}
							}

							asort($select_matches);

							$fieldObj->setValueSeeder( new \GenericValueSeeder( $select_matches ) );
						}
					}
				}

				if ( strpos($field_definition['column_default'], 'nextval') !== false ) {
					$fieldObj->setFormFieldType( 'hidden' );
				} else {
					switch( $field_definition['data_type'] ) {
						case 'character varying' :
							$fieldObj->setFormFieldType( 'text' );
							break;
						case 'integer' :
							$fieldObj->setFormFieldType( 'text' );
							// $fieldObj->setFormFieldHTMLAttribute( 'size', $field_definition['numeric_precision']);
							$fieldObj->setFormFieldHTMLAttribute( 'maxlength', $field_definition['numeric_precision']);
							break;
						case 'boolean' :
							$fieldObj->setFormFieldType( 'checkbox' );

							if ( $field_definition['column_default'] !== 'true' ) {
								$fieldObj->setValue( false );
							}

							break;
						default :
							break;
					}

					if ( $is_foreign_key ) {
						$fieldObj->setFormFieldType( 'select' );
					}

					// Label
					if ( $fieldObj->getFormFieldType() !== 'checkbox' ) {
						$label = \eGlooString::toPrettyPrint( $field_name, '_', true ) . ':';
					} else {
						$label = \eGlooString::toPrettyPrint( $field_name, '_', true );
					}

					$fieldObj->setDisplayLabel( $label );

					if ( $field_definition['is_nullable'] === 'NO' && $fieldObj->getFormFieldType() !== 'checkbox' ) {
						$fieldObj->setIsRequired()->setRequiredMarker('*');
					}

					$fieldObj->setPrependHTML( '<div>' )->setAppendHTML( '</div>' );
				}


				$formObj->addFormField( $field_name, $fieldObj );
			}

			$submitFormField = new \ValidatedFormField( 'submit' );
			$submitFormField->setFormFieldType( 'submit' )->setValue( '' );

			$this->_default_form = $formObj;
		}
	}

	// Framework before
	public function _internalBefore() {
		$this->buildDefaultForm();
	}

	// Framework after
	public function _internalAfter() {

	}

	protected function limitTo( $routes_allowed ) {
		// TODO
	}

	protected function receiveSubjectUpdate( $event, $__mixed ) {
		// echo_r('Event ' . $event . ' with value ' . $__mixed );

		switch( $event ) {
			case 'update_action' :
				$submit = new \ValidatedFormField('submit');
				$field_value = null;
				$form_action = null;

				switch( $__mixed ) {
					case '_new' :
						$field_value = 'Create';
						$form_action = '/create';
						break;
					case 'edit' :
						$field_value = 'Update';

						if ( isset($this->bean['id']) ) {
							$form_action = '/' . $this->bean['id'] . '/update';
						} else {
							$form_action = '/update';
						}

						break;
					default :
						$field_value =
							trim(\eGlooString::toPrettyPrint( $__mixed, '_', true, true ));
						break;
				}

				$submit->setFormFieldType('submit')->setValue( $field_value );

				if ( $this->_default_form->issetFormField('submit') ) {
					$this->_default_form->removeFormField('submit');
				}

				$this->_default_form->addFormField('submit', $submit);
				$this->_default_form->setAction( Configuration::getRewriteBase() .
					strtolower($this->_default_model_base) . $form_action );

				break;
			default;
				break;
		}

	}

}
