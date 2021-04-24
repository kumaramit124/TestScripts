#!/bin/bash
ping -c1 google.com > /dev/null
if [ $? -eq 0 ]
  then 
    echo PASS 
    exit 0
  else
    echo “FAIL”
fi
