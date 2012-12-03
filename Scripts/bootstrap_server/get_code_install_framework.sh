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

# My ssh config directory
SSH_CONFIG_DIR="$HOME/.ssh"
SSH_CONFIG="config"

# current user
USER=$(whoami)

DETECTED_OS_NAME="Ubuntu 12.04"

# Default Configuration Parameters (Ubuntu)
DEFAULT_APPLICATIONS="/usr/lib/egloo/applications"
DEFAULT_CACHE_DIR="/var/cache/egloo"
DEFAULT_CONFIG="/etc/egloo/"
DEFAULT_CUBES="/usr/lib/egloo/cubes"
DEFAULT_DATA_STORE="/var/egloo"
DEFAULT_DOCTRINE=`locate /usr/*/Doctrine.php | head -n 1`
DEFAULT_DOCUMENTATION="/usr/share/doc/egloo"
DEFAULT_DOCUMENTROOT="/var/www/egloo"
DEFAULT_FRAMEWORKROOT="/usr/lib/eglooframework"
DEFAULT_LOGPATH="/var/log/egloo"
DEFAULT_SMARTY=`locate /usr/*/Smarty.class.php | head -n 1`

DEFAULT_WEBUSER="www-data"
DEFAULT_WEBGROUP="www-data"

DEFAULT_CODE_DIR="/data/code"
DEFAULT_FRAMEWORK_INSTALL="$DEFAULT_CODE_DIR/eglooframework"
DEFAULT_TZ_INSTALL="$DEFAULT_CODE_DIR/tierzwei"

installMinDependencies_1204() {
        echo
        echo "**********************"
        echo "* Updating Apt Cache *"
        echo "**********************"
        echo

        sudo apt-get update

        echo
        echo "***************************"
        echo "* Installing Dependencies *"
        echo "***************************"
        echo

        # packages on the second line are "nice to have" but are not essential
        sudo apt-get --assume-yes install git git-flow python-software-properties \
                nmap secure-delete nethogs build-essential
	echo
        echo "**** DONE: installing dependencies ****"
}

getCode() {
        echo
        echo "*******************************"
        echo "* Cloning Petflow/eGloo repos *"
        echo "*******************************"
        echo

        if [ ! -d $DEFAULT_CODE_DIR ]; then
		echo "Creating $DEFAULT_CODE_DIR"
                sudo mkdir -p $DEFAULT_CODE_DIR
		sudo chmod 777 $DEFAULT_CODE_DIR
		echo "DONE: creating $DEFAULT_CODE_DIR"
        else
                echo "$DEFAULT_CODE_DIR exists, moving on to next step"
        fi

        if [ ! -d $DEFAULT_FRAMEWORK_INSTALL ]; then
                pushd $DEFAULT_CODE_DIR
                echo "Cloning eGloo repo..."
	        git clone git://eglooframework.git.sourceforge.net/gitroot/eglooframework/eglooframework
		echo "DONE: cloning eGloo repo"
		cd $DEFAULT_FRAMEWORK_INSTALL
		git checkout feature/conversion
                popd
		echo
        else
                echo "eGloo repo dir already exists...skipping cloning"
        fi
}

###########################################################
########## Install!
###########################################################

# Ubuntu 12.04
echo "Bootstrapping" $DETECTED_OS_NAME

checkEnv

installMinDependencies_1204

distributeSsh

getCode

sudo -E bash "./install_egloo_link_petflow.sh"

sudo -E bash "./deploy_env_config.sh"

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
