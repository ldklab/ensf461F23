#!/bin/sh

VAR=1
while [ $VAR -lt 10 ]
do
  MOD=`expr $VAR % 2`
  if [ $MOD -eq 0 ]
  then
    echo "$VAR is even"
  else
    echo "$VAR is odd"
  fi
  VAR=`expr $VAR + 1`
done
