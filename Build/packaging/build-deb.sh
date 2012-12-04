#! /usr/bin/env bash
#
# eGloo Framework .deb builder
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
echo "*******************************"
echo "*******************************"
echo "****   eGloo Deb Builder   ****"
echo "*******************************"
echo "*******************************"
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

# Get our Timestamp
TIMESTAMP=$(date +%s)

VERSION="1.0"
EXISTING_REPO="/home/zalgo/eglooframework"
DEFAULT_FRAMEWORK_DIR="/usr/share/"
DEBIAN_DIR="/home/zalgo/packaging/debian"

TMP_DIR="/tmp/$TIMESTAMP-egloopackaging"
PACKAGING_DIR="$TMP_DIR/eglooframework-$VERSION"
FRAMEWORK_INSIDE_PACKAGING="$PACKAGING_DIR$DEFAULT_FRAMEWORK_DIR"

###########################################################
########## Build!
###########################################################

mkdir -p $PACKAGING_DIR
pushd $PACKAGING_DIR

mkdir -p $FRAMEWORK_INSIDE_PACKAGING

# clone or...
# git clone git://eglooframework.git.sourceforge.net/gitroot/eglooframework/eglooframework

# or just copy from an existing dir
cp -r $EXISTING_REPO .

# rename the dir
mv eglooframework $FRAMEWORK_INSIDE_PACKAGING/eglooframework-$VERSION

cp -r $DEBIAN_DIR DEBIAN

cd ..
dpkg --build eglooframework-$VERSION .


popd

mv $TMP_DIR/*.deb .
#rm -rf $PACKAGING_DIR

###########################################################
########## DONE
###########################################################

echo
echo
echo "**************************************"
echo "**************************************"
echo "****   DONE: building eGloo deb   ****"
echo "**************************************"
echo "**************************************"
echo
echo
exit
