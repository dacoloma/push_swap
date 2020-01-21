RED="\033[1;31m"
GREEN="\033[1;32m"
ORANGE="\033[1;33m"
NOCOLOR="\033[0m"

clear
make && clear

read -p "
Enter MIN value: " MIN
read -p "
Enter MAX value: " MAX
read -p "
Enter RANGE value: " RANGE


entries="$(python3 rand_nb_gen.py $MIN $MAX $RANGE)"
printf "\n#-----------------#\n#test %d => $entries:\t" $i
./push_swap $entries > tmp
test_pushswap=$(cat tmp | ./checker ${entries})
if [ "$test_pushswap" = "OK" ] ; then
	printf "${GREEN}${test_pushswap}${NOCOLOR}"
	nb_instructions=$(wc -l < tmp)
	if (( "$nb_instructions" < 5 )) ; then
		echo "${GREEN}${nb_instructions}${NOCOLOR}"
	elif (( "$nb_instructions" < 12 )) ; then
		echo "${ORANGE}${nb_instructions}${NOCOLOR}"
	else
		echo "${RED}${nb_instructions}${NOCOLOR}"
	fi
elif [ "$test_pushswap" = "KO" ] ; then
	echo "${RED}${test_pushswap}${NOCOLOR}"
fi
rm -f tmp

