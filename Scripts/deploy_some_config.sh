#! /usr/bin/env bash
#
# eGloo Framework config deployment and rollback script
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
echo "************************************"
echo "************************************"
echo "****       Config Deployer      ****"
echo "************************************"
echo "************************************"
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
OS_UBUNTU_1110=4

# Current platform
# Default to Debian
DETECTED_PLATFORM=9999
# OS String
DETECTED_OS_NAME="Unknown"

# Get our parent directory
PARENT_DIRECTORY=$(_egloo_parent_dir=$(pwd) ; echo "${_egloo_parent_dir%/*}")

# Get our Timestamp
TIMESTAMP=$(date +%s)

DEPLOY=1
REVERT=0
CHOICE=$DEPLOY

while getopts "rh" opt; do
  case $opt in
    r)
	CHOICE=$REVERT
	echo "Reverting a file"
    ;;

    h)
	echo "Deploy: $0 TARGET_CONFIG_FILE FROM_CONFIG_FILE"
	echo "Revert: $0 -r TARGET_CONFIG_FILE FROM_CONFIG_FILE"
	exit 0
    ;;

    \?)
	echo "Bad flag"
	exit 1
    ;;
  esac
done

###########################################################
########## Platform Detection
###########################################################

# Get our platform
PLATFORM=$(shtool platform -v -F "%sc (%ac) %st (%at) %sp (%ap)")

# Temporarily disable errexit check because grep returns non-true on a result we need
set +o errexit
MACOSX_FOUND=`echo "$PLATFORM" | grep -i -c "Apple Mac OS X"`
UBUNTU_10_FOUND=`echo "$PLATFORM" | grep -i -c "Ubuntu 10.04"`
UBUNTU_1110_FOUND=`echo "$PLATFORM" | grep -i -c "Ubuntu 11.10"`
UBUNTU_12_FOUND=`echo "$PLATFORM" | grep -i -c "Ubuntu 12.04"`
WINDOWS_FOUND=`echo "$PLATFORM" | grep -i -c "Windows"`
set -o errexit

###########################################################
########## Platform: OS X specific params
###########################################################
if [ "$MACOSX_FOUND" -eq 1 ]; then
	DETECTED_OS_NAME="Apple Mac OS X"
        echo "Detected:" $DETECTED_OS_NAME
        DETECTED_PLATFORM=$OS_MACOSX
fi

###########################################################
########## Platform: Ubuntu specific params
###########################################################
if [ "$UBUNTU_10_FOUND" -eq 1 ]; then
	DETECTED_OS_NAME="Ubuntu 10.04"
        echo "Detected:" $DETECTED_OS_NAME
	DETECTED_PLATFORM=$OS_UBUNTU_10

        DEFAULT_CODE_DIR="/data/code"
        DEFAULT_FRAMEWORK_INSTALL="$DEFAULT_CODE_DIR/eglooframework"
        DEFAULT_TZ_INSTALL="$DEFAULT_CODE_DIR/tierzwei"
        . $DEFAULT_FRAMEWORK_INSTALL/Scripts/common/params-ubuntu-1004
fi

if [ "$UBUNTU_1110_FOUND" -eq 1 ]; then
	DETECTED_OS_NAME="Ubuntu 11.10"
	echo "Detected:" $DETECTED_OS_NAME
	DETECTED_PLATFORM=$OS_UBUNTU_1110
fi

if [ "$UBUNTU_12_FOUND" -eq 1 ]; then
	DETECTED_OS_NAME="Ubuntu 12.04"
        echo "Detected:" $DETECTED_OS_NAME
        DETECTED_PLATFORM=$OS_UBUNTU_12

        DEFAULT_CODE_DIR="/data/code"
        DEFAULT_FRAMEWORK_INSTALL="$DEFAULT_CODE_DIR/eglooframework"
        DEFAULT_TZ_INSTALL="$DEFAULT_CODE_DIR/tierzwei"
        . $DEFAULT_FRAMEWORK_INSTALL/Scripts/common/params-ubuntu-1204
fi

echo

###########################################################
########## Platform: Winblows specific params
###########################################################
if [ "$WINDOWS_FOUND" -eq 1 ]; then
	DETECTED_OS_NAME="Windows"
        echo "Detected:" $DETECTED_OS_NAME
	DETECTED_PLATFORM=$OS_WINDOWS
fi

###########################################################
########## Check that we have correct permissions and correct user/group
###########################################################
# Check for root
if [[ "$UID" -ne "$ROOT_UID" && $DETECTED_PLATFORM -ne $OS_WINDOWS ]]; then
	echo "***********************************"
	echo "* Must be root to run this script *"
	echo "***********************************"
	echo
	exit $E_NOTROOT
fi

###########################################################
########## Define some custom functions
###########################################################
deploy() {
	echo "mv $TARGET ${TARGET}-$TIMESTAMP"
	mv $TARGET ${TARGET}-$TIMESTAMP
	echo "cp $FROM $TARGET"
	cp $FROM $TARGET
}

revert() {
	# list the timestamp appended files
	# WARN: fragile
	LAST=$(ls -1a ${TARGET}-13* | tail -n 1)
	echo "LAST: $LAST"
	echo "mv $LAST $TARGET"
	mv $LAST $TARGET
}

###########################################################
########## Install!
###########################################################

if [ $DETECTED_PLATFORM -eq $OS_UBUNTU_10 ]; then
	if [ $CHOICE -eq $DEPLOY ]; then
		TARGET=$1
		FROM=$2
                echo "TARGET: $TARGET"
		echo "FROM: $FROM"
		deploy
	elif [ $CHOICE -eq $REVERT ]; then
		TARGET=$2
		echo "TARGET: $TARGET"
		revert
	else
		echo "BAD CHOICE"
		exit 1
	fi
	exit 0
elif [ $DETECTED_PLATFORM -eq $OS_UBUNTU_1110 ]; then
	if [ $CHOICE -eq $DEPLOY ]; then
		TARGET=$1
		FROM=$2
                echo "TARGET: $TARGET"
		echo "FROM: $FROM"
		deploy
	elif [ $CHOICE -eq $REVERT ]; then
		TARGET=$2
		echo "TARGET: $TARGET"
		revert
	else
		echo "BAD CHOICE"
		exit 1
	fi
	exit 0
elif [ $DETECTED_PLATFORM -eq $OS_UBUNTU_12 ]; then
	if [ $CHOICE -eq $DEPLOY ]; then
		TARGET=$1
		FROM=$2
		echo "TARGET: $TARGET"
		echo "FROM: $FROM"
		deploy
	elif [ $CHOICE -eq $REVERT ]; then
		TARGET=$2
		echo "TARGET: $TARGET"
		revert
	else
		echo "BAD CHOICE"
		exit 1
	fi
	exit 0
elif [ $DETECTED_PLATFORM -eq $OS_MACOSX ]; then
	if [ $CHOICE -eq $DEPLOY ]; then
		TARGET=$1
		FROM=$2
                echo "TARGET: $TARGET"
		echo "FROM: $FROM"
		deploy
	elif [ $CHOICE -eq $REVERT ]; then
		TARGET=$2
		echo "TARGET: $TARGET"
		revert
	else
		echo "BAD CHOICE"
		exit 1
	fi
	exit 0
elif [ $DETECTED_PLATFORM -eq $OS_WINDOWS ]; then
	echo $DETECTED_OS_NAME "is not currently supported"
	exit 1
else
	echo "Unknown system detected...exiting"
	exit 1
fi

exit
