#!/bin/bash
echo "-----Salary Calculator-----"

read -p "Enter the baseic salary : " basSal


if [ $basSal -lt 1500 ]
then  
	hr=$((($basSal*10)/100))
	da=$((($basSal*90)/100))
	gross=$(($hr+$da))
	echo "Gross sal for base sal less than 1500 = "$gross
else 	
	hr=500
	da=$((($basSal*98)/100))
	gross=$(($hr+$da))
	echo "Gross sal for base sal greater than 1500 = $gross"
fi
