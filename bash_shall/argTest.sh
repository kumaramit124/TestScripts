#!/bin/bash
# Test bash scripts, where we pass the cmd argument

# help function 
helpfun()
{
   echo ""
   echo "Usage: $0 -u username -a age -f fullname"
   echo "\t-u Description of what is parameterA"
   echo "\t-a Description of what is parameterB"
   echo "\t-f Description of what is parameterC"
   exit 1 # Exit script after printing help
}	

while getopts u:a:f: flag
do
	case "${flag}" in
		u) username=${OPTARG};;
		a) age=${OPTARG};;
		f) fullname=${OPTARG};;
		? ) helpfun ;; # Print helpFunction in case parameter is non-existent
	esac
done


# Print helpFunction in case parameters are empty
if [ -z "$username" ] || [ -z "$age" ] || [ -z "$fullname" ]
then
   echo "Some or all of the parameters are empty";
   helpfun
fi

echo "Username: $username";
echo "Age: $age";
echo "Full Name: $fullname";




#The variable $@ is the array of all the input parameters
##i=1;
##for user in "$@" 
##do
##    echo "Username - $i: $user";
##    i=$((i + 1));
##done
#sh users-loop.sh john matt bill 'joe wicks' carol

#The $# variable returns the input size:
##i=1;
##j=$#;
##while [ $i -le $j ]
##do
##    echo "Username - $i: $1";
##    i=$((i + 1));
##    shift 1;
##done
#sh users-shift-operator.sh john matt bill 'joe wicks' carol



