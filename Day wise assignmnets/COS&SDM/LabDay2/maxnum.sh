#!/bin/bash

echo Enter the 1st number
read n1

echo ENter the 2nd number
read n2

echo ENter the 3rd number
read n3

if [ $n1 -gt $n2 ] && [ $n1 -gt $n3 ]
then 
	echo "$n1 is greater"
elif [ $n2 -gt $n3 ]
then 
	echo $n2 is greater
else
	echo $n3 is greater
fi	
