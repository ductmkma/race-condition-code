#!/bin/sh


old=`ls -l /etc/passwd`
new=`ls -l /etc/passwd`
while [ "$old" = "$new" ]
do
    new=`ls -l /etc/passwd`
    echo "Loading check";
done

echo "STOP... The passwd file has been changed"
return;



