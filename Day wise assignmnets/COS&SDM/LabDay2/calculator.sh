#!/bin/bash

echo "A Simple INteger Claculator"

read -p "Enter the 1st number : " n1
read -p "Enter the 2nd number : " n2
read -p "Enter the operators from(+ - * % /) : " opr

if [ "$opr" = "+" ]
then 
	echo "sum = "$(($n1+$n2))
elif [ "$opr" = "-" ]
then
	echo "sub = "$(($n1-$n2))
elif [ "$opr" = "*" ]
then
	echo "mul = "$(($n1*$n2))
elif [ "$opr" = "/" ]
then
	echo "div = "$(($n1/$n2))
elif [ "$opr" = "%" ]
then
	echo "rem = "$(($n1%$n2))
	
else
	echo "Operator is invalid"
fi
