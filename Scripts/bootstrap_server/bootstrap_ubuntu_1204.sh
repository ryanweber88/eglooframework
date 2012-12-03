#! /usr/bin/env bash
#
# This script will bootstrap a blank server to install the eglooframework
# and several other desired packages.
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
echo "****       WEBSERVER BOOTSTRAP      ****"
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
E_ROOT=02   # Script run as root

# Script Constants
ROOT_UID=0     # Only users with $UID 0 have root privileges.

# Get our Timestamp
TIMESTAMP=$(date +%s)

# current user
USER=$(whoami)

DETECTED_OS_NAME="Ubuntu 12.04"

###########################################################
########## Install!
###########################################################

SERVER=$1

# Ubuntu 12.04
echo "Bootstrapping $DETECTED_OS_NAME on $SERVER"

SCRIPT_TO_EXEC='get_code_install_framework.sh'
scp $SCRIPT_TO_EXEC $SERVER:~
ssh $SERVER chmod 700 $SCRIPT_TO_EXEC

echo
echo
echo "****************************************"
echo "****************************************"
echo "****     DONE: SERVER BOOTSTRAP     ****"
echo "****************************************"
echo "****************************************"
echo
echo

exit 0
