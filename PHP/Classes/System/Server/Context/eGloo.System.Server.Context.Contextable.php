<?php
namespace eGloo\System\Server\Context;

/**
 * 
 * Provides interface/protocol for any representation having context with stateful application
 * @author Christian Calloway
 *
 */
interface Contextable {
	/**
	 * 
	 * Returns object representing context or scope of given implementor; for example,
	 * context/scope within: Server, Application, Session, Request
	 * @return Context
	 */
}