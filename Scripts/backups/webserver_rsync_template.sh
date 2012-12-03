#!/bin/bash

. /root/scripts/environ

# copy /etc stuff
rsync --compress --recursive --stats --delete-after --progress /etc/apache2 er:/ebs/${SERV}/etc/
rsync --compress --recursive --stats --delete-after --progress /etc/egloo er:/ebs/${SERV}/etc/
rsync --compress --recursive --stats --delete-after --progress /etc/postfix er:/ebs/${SERV}/etc/
rsync --compress --recursive --stats --delete-after --progress /etc/mail* er:/ebs/${SERV}/etc/

# copy /var stuff
rsync --compress --recursive --stats --delete-after --progress /var/www er:/ebs/${SERV}/var/
rsync --compress --recursive --stats --delete-after --progress /var/egloo er:/ebs/${SERV}/var/

# dump root's crontab
crontab -l > /root/root_crontab

# copy over root
rsync --compress --recursive --stats --delete-after --progress /root er:/ebs/${SERV}/

# copy data stuff
rsync --compress --recursive --stats --delete-after --progress /data/code er:/ebs/${SERV}/data/

# don't forget to setup rsync of any SSL certs

# copy home dirs
#rsync --compress --recursive --stats --delete-after --progress /home er:/ebs/${SERV}/
