read -p "Enter the weight of a person" w

if [ $w -ge 30 ] && [ $w -le 250 ]
then 
	echo "Person is allowed in MBT health club"
else 	
	echo "Person is not allowed in MBT health club"
fi
