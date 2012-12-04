#! /usr/bin/env bash
#
# eGloo Framework Dependencies Installation Script
#
# Script should be chmod 700 and run as root from the working directory
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#        http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#  
# @author Ben Roberson
# @license http://www.apache.org/licenses/LICENSE-2.0
# @package Build
# @subpackage Installation
# @version 1.0

echo
echo
echo "****************************************"
echo "****************************************"
echo "****   eGloo Dependency Installer   ****"
echo "****************************************"
echo "****************************************"
echo
echo

###########################################################
########## General Setup
###########################################################

# Exit the script if any variables specified are unset when accessed
set -o nounset

# Exit the script if any statement returns a non-true value
# This prevents errors from cascading
set -o errexit

# Exit Error Codes
E_XCD=01       # Script can't change directories
E_NOTROOT=02   # Script not run as root

# Script Constants
ROOT_UID=0     # Only users with $UID 0 have root privileges.

# Get our Timestamp
TIMESTAMP=$(date +%s)

###########################################################
########## Check that we have correct permissions and correct user/group
###########################################################
# Check for root
if [[ "$UID" -ne "$ROOT_UID" ]]
then
	echo "***********************************"
	echo "* Must be root to run this script *"
	echo "***********************************"
	echo
	exit $E_NOTROOT
fi

###########################################################
########## Install!
###########################################################

	echo
        echo "****************************"
	echo "* Installing dependencies for Ubuntu 12.04*"
        echo "****************************"
        echo

	apt-get --assume-yes install python-software-properties

	add-apt-repository ppa:ondrej/php5

	apt-get update

        apt-get --assume-yes install git git-flow curl apache2 memcached \
		php5 php5-dev php5-memcache php5-mysql php5-pgsql php5-mcrypt \
		php-apc php5-imagick php5-memcached php5-common \
                php-soap php5-gd

        echo
        echo "* DONE: installing dependencies *"
        echo

exit
