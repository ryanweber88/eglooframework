#!/bin/bash
# eGloo Framework Statsd installer
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
echo "*************************************"
echo "*************************************"
echo "****       Logstash Install      ****"
echo "*************************************"
echo "*************************************"
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

###########################################################
########## Check that we have correct permissions and correct user/group
###########################################################
# Check for root
if [ "$UID" -ne "$ROOT_UID" ]; then
        echo "***********************************"
        echo "* Must be root to run this script *"
        echo "***********************************"
        echo
        exit $E_NOTROOT
fi

###########################################################
########## Do something !
###########################################################

DEFAULT_CODE_DIR="/data/code"

pushd $DEFAULT_CODE_DIR

apt-get update

mkdir logstash
cd logstash
wget http://semicomplete.com/files/logstash/logstash-1.1.1-monolithic.jar

# java -jar logstash-1.1.1-monolithic.jar agent -f apache_to_statsd.conf
