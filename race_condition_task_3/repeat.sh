#!/bin/sh
i=0
while [ $i -lt 100000 ]
do
./vulp3 < /home/seed/Desktop/race_condition_task_3/input.txt & i=`expr $i + 1`
echo $i
done
