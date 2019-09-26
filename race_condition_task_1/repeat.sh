#!/bin/sh
i=0
while [ $i -lt 100000 ]
do
./vulp < /home/seed/Desktop/race_condition/input.txt & i=`expr $i + 1`
echo $i
done
