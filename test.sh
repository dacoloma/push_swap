RED="\033[1;31m"
GREEN="\033[1;32m"
ORANGE="\033[1;33m"
NOCOLOR="\033[0m"

clear
make && clear

limit=(
    '3'
	'4'
    '5'
	'12'
	'700'
	'750'
	'5300'
	'5400'
)

read -p "
Enter MIN value: " MIN
read -p "
Enter MAX value: " MAX
read -p "
Enter RANGE value: " RANGE
i=0
while true
do
	entries="$(python3 rand_nb_gen.py $MIN $MAX $RANGE)"
	printf "\n#-----------------#\n#test %d => $entries:\t" $i
	i=$(($i+1))
	if (( "$RANGE" < 4)) ; then
		j=0
	elif (( "$RANGE" < 6)) ; then
		j=1
	elif (( "$RANGE" < 101)) ; then
		j=2
	elif (( "$RANGE" < 501)) ; then
		j=3
	fi
	./push_swap $entries > tmp
	test_pushswap=$(cat tmp | ./checker ${entries})
	if [ "$test_pushswap" = "OK" ] ; then
		printf "${GREEN}${test_pushswap}${NOCOLOR}"
		nb_instructions=$(wc -l < tmp)
		if (( "$nb_instructions" < ${limit[($j*2)]} )) ; then
			echo "${GREEN}${nb_instructions}${NOCOLOR}"
		elif (( "$nb_instructions" < ${limit[($j*2+1)]} )) ; then
			echo "${ORANGE}${nb_instructions}${NOCOLOR}"
		else
			echo "${RED}${nb_instructions}${NOCOLOR}"
		fi
	elif [ "$test_pushswap" = "KO" ] ; then
		echo "${RED}${test_pushswap}${NOCOLOR}"
	fi
	rm -f tmp
	read -n 1 -s -p "
Continue with same values? (y/n or q to quit)" var
	if [ "$var" = "n" ] ; then
		clear
		i=0
		read -p "
Enter MIN value: " MIN
		read -p "
Enter MAX value: " MAX
		read -p "
Enter RANGE value: " RANGE
	elif [ "$var" = "q" ] ; then
		break
	fi
done

