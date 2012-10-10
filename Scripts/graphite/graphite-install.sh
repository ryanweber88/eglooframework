#!/bin/bash
# eGloo Framework Graphite installer
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
echo "****       Graphite Install      ****"
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
GRAPHITE_VER="0.9.10"
GRAPHITE_CODE="${DEFAULT_CODE_DIR}/graphite-web"
GRAPHITE_CONF="/opt/graphite/conf"
GRAPHITE_WEBAPP="/opt/graphite/webapp/graphite"
CARBON_CODE="${DEFAULT_CODE_DIR}/carbon"
WHISPER_CODE="${DEFAULT_CODE_DIR}/whisper"
APACHE_CONF="/etc/apache2"


pushd $DEFAULT_CODE_DIR

apt-get update

apt-get dist-upgrade

apt-get autoremove

apt-get install build-essential python-dev

apt-get install python-cairo python-django python-django-tagging python-twisted python-zope.interface fontconfig apache2 libapache2-mod-wsgi python-pysqlite2 python-simplejson git

git clone https://github.com/graphite-project/graphite-web.git
git clone https://github.com/graphite-project/carbon.git
git clone https://github.com/graphite-project/whisper.git

pushd $CARBON_CODE
git checkout $GRAPHITE_VER
python setup.py install
popd

pushd $WHISPER_CODE
git checkout $GRAPHITE_VER
python setup.py install
popd

pushd $GRAPHITE_CODE
git checkout $GRAPHITE_VER
python setup.py install
popd

cp ${GRAPHITE_CONF}/carbon.conf.example ${GRAPHITE_CONF}/carbon.conf
sed -i 's/USER = /USER = carbon/g' ${GRAPHITE_CONF}/carbon.conf

cp ${GRAPHITE_CONF}/storage-schemas.conf.example ${GRAPHITE_CONF}/storage-schemas.conf

cp ${GRAPHITE_CONF}/graphite.wsgi.example ${GRAPHITE_CONF}/graphite.wsgi
sed -i 's/from graphite.logger/#from graphite.logger/g' ${GRAPHITE_CONF}/graphite.wsgi
sed -i 's/log.info(/#log.info(/g' ${GRAPHITE_CONF}/graphite.wsgi
sed -i 's/import graphite.metrics.search/#import graphite.metrics.search/g' ${GRAPHITE_CONF}/graphite.wsgi

pushd /tmp
wget https://gist.github.com/gists/4c7e5e710617084706ec/download
tar xfz download
cp gist*/gist* ${APACHE_CONF}/sites-available/graphite
popd

pushd ${APACHE_CONF}/sites-enabled
ln -s ../sites-available/graphite
popd

pushd ${APACHE_CONF}/mods-enabled
ln -s ../mods-available/ssl.conf
ln -s ../mods-available/ssl.load
popd

# maybe setup password for access
# htpasswd -c /etc/apache2/graphite.htpasswd demo

# python ${GRAPHITE_WEBAPP}/manage.py syncdb
echo "please syncdb: python ${GRAPHITE_WEBAPP}/manage.py syncdb"

chown www-data /opt/graphite/storage
chown www-data:www-data /opt/graphite/storage/graphite.db
chown -R www-data:www-data /opt/graphite/storage/log
