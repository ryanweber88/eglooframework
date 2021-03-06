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

# OS Constants
OS_UBUNTU_10=0
OS_UBUNTU_12=1
OS_MACOSX=2
OS_WINDOWS=3


# Current platform
# Default to Debian
DETECTED_PLATFORM=0
# OS String
DETECTED_OS_NAME="Unknown"

# Get our parent directory
PARENT_DIRECTORY=$(_egloo_parent_dir=$(pwd) ; echo "${_egloo_parent_dir%/*}")

# Get our Timestamp
TIMESTAMP=$(date +%s)

###########################################################
########## Platform Detection
###########################################################

# Get our platform
PLATFORM=$(cat /etc/issue)

# Temporarily disable errexit check because grep returns non-true on a result we need
set +o errexit
MACOSX_FOUND=`echo "$PLATFORM" | grep -i -c "Apple Mac OS X"`
UBUNTU_10_FOUND=`echo "$PLATFORM" | grep -i -c "Ubuntu 10.04"`
UBUNTU_12_FOUND=`echo "$PLATFORM" | grep -i -c "Ubuntu 12.04"`
WINDOWS_FOUND=`echo "$PLATFORM" | grep -i -c "Windows"`
set -o errexit

###########################################################
########## Platform: OS X specific params
###########################################################
if [ "$MACOSX_FOUND" -eq 1 ]
then

	DETECTED_OS_NAME="Apple Mac OS X"
        echo "Detected:" $DETECTED_OS_NAME
        DETECTED_PLATFORM=$OS_MACOSX
fi

###########################################################
########## Platform: Ubuntu specific params
###########################################################
if [ "$UBUNTU_10_FOUND" -eq 1 ]
then
	DETECTED_OS_NAME="Ubuntu 10.04"
        echo "Detected:" $DETECTED_OS_NAME
	DETECTED_PLATFORM=$OS_UBUNTU_10

fi

if [ "$UBUNTU_12_FOUND" -eq 1 ]
then
	DETECTED_OS_NAME="Ubuntu 12.04"
        echo "Detected:" $DETECTED_OS_NAME
        DETECTED_PLATFORM=$OS_UBUNTU_12

fi

###########################################################
########## Platform: Winblows specific params
###########################################################
if [ "$WINDOWS_FOUND" -eq 1 ]
then
	DETECTED_OS_NAME="Windows"
        echo "Detected:" $DETECTED_OS_NAME
	DETECTED_PLATFORM=$OS_WINDOWS

fi

###########################################################
########## Check that we have correct permissions and correct user/group
###########################################################
# Check for root
if [[ "$UID" -ne "$ROOT_UID" && $DETECTED_PLATFORM -ne $OS_WINDOWS ]]
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

if [ $DETECTED_PLATFORM -eq 0 ]
then
	# Ubuntu 10.04
	echo $DETECTED_OS_NAME "is not currently supported by this dependency installation script"
	exit 1
elif [ $DETECTED_PLATFORM -eq 1 ]
then
	# Ubuntu 12.04
	echo
        echo "****************************"
	echo "* Installing dependencies for" $DETECTED_OS_NAME "*"
        echo "****************************"
        echo

	apt-get update

	apt-get --assume-yes install python-software-properties

        add-apt-repository --yes ppa:ondrej/php5
	add-apt-repository --yes ppa:chris-lea/node.js

        apt-get update

        apt-get --assume-yes install git git-flow curl apache2 memcached \
                php5 php5-dev php5-memcache php5-mysql php5-pgsql php5-mcrypt \
                php-apc php5-imagick php5-memcached php5-common \
                php-soap php5-gd ruby1.9.3 npm avahi-daemon

	gem install sass
	npm install -g uglify-js
	npm install -g less

	curl -s https://getcomposer.org/installer | php
	mv composer.phar /usr/local/bin/composer

        echo
        echo "* DONE: installing dependencies *"
        echo

	exit 0
elif [ $DETECTED_PLATFORM -eq 2 ]
then
	echo $DETECTED_OS_NAME "is not currently supported by this dependency installation script"
	exit 1
elif [ $DETECTED_PLATFORM -eq 3 ]
then
	echo $DETECTED_OS_NAME "is not currently supported by this dependency installation script"
	exit 1
else
	echo "Unknown system detected...exiting"
	exit 1
fi

exit
