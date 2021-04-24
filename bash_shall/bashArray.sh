#!/bin/bash
# Declare array with 4 elements
ARRAY=( "Debian Linux" "RedHat Linux" "Ubuntu Linux" )
#get the number of element in the array
ELEMENTS=${ARRAY[@]}

#echo each element in array
#for loop
for ((i=0;i<$ELEMENTS;i++)); do
	echo ${ARRAY[${i}]}
done
