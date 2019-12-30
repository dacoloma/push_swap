RED="\033[1;31m"
GREEN="\033[1;32m"
ORANGE="\033[1;33m"
NOCOLOR="\033[0m"

clear

# testing3=(
# 	"1 2 3"
# 	"1 3 2"
# 	"2 1 3"
# 	"2 3 1"
# 	"3 1 2"
# 	"3 2 1"
# )

# for (( i=0; i < ${#testing3[@]}; i++ )); 
# do
# printf "\n#-----------------#\n#test %d => ${testing3[i]}: " $i
# ./push_swap ${testing3[i]} > tmp
# test_pushswap=$(./push_swap ${testing3[i]} | ./checker ${testing3[i]})
# if [ "$test_pushswap" = "OK" ] ; then
# 	echo "${GREEN}${test_pushswap}${NOCOLOR}
# nb_instructions=$(cat tmp | wc -l)

# elif [ "$test_pushswap" = "KO" ] ; then
# 	echo "${RED}${test_pushswap}${NOCOLOR}"
# fi
# cat tmp | tr '\n' ' ' | cat
# done

# testing4=(
# 	"1 2 3 4"
# 	"1 2 4 3"
# 	"1 3 2 4"
# 	"1 3 4 2"
# 	"1 4 2 3"
# 	"1 4 3 2"
# 	"2 1 3 4"
# 	"2 1 4 3"
# 	"2 3 1 4"
# 	"2 3 4 1"
# 	"2 4 1 3"
# 	"2 4 3 1"
# 	"3 1 2 4"
# 	"3 1 4 2"
# 	"3 2 1 4"
# 	"3 2 4 1"
# 	"3 4 1 2"
# 	"3 4 2 1"
# 	"4 1 2 3"
# 	"4 1 3 2"
# 	"4 2 1 3"
# 	"4 2 3 1"
# 	"4 3 1 2"
# 	"4 3 2 1"
# )

# for (( i=0; i < ${#testing4[@]}; i++ )); 
# do 
# printf "\n#-----------------#\n#test %d => ${testing4[i]}: " $i
# ./push_swap ${testing4[i]} > tmp
# test_pushswap=$(cat tmp | ./checker ${testing4[i]})
# if [ "$test_pushswap" = "OK" ] ; then
# 	printf "${GREEN}${test_pushswap}${NOCOLOR}"
# 	nb_instructions=$(wc -l < tmp)
# 	# echo "TEST : $nb_instructions"
# 	if (( "$nb_instructions" < 5 )) ; then
# 		echo "${GREEN}${nb_instructions}${NOCOLOR}"
# 	elif (( "$nb_instructions" < 12 )) ; then
# 		echo "${ORANGE}${nb_instructions}${NOCOLOR}"
# 	else
# 		echo "${RED}${nb_instructions}${NOCOLOR}"
# 	fi
# elif [ "$test_pushswap" = "KO" ] ; then
# 	echo "${RED}${test_pushswap}${NOCOLOR}"
# fi
# cat tmp | tr '\n' ' ' | cat
# done

testing5=(
	"1 2 3 4 5" 
	"2 1 3 4 5" 
	"3 1 2 4 5" 
	"1 3 2 4 5" 
	"2 3 1 4 5" 
	"3 2 1 4 5" 
	"4 2 3 1 5" 
	"2 4 3 1 5" 
	"3 4 2 1 5" 
	"4 3 2 1 5" 
	"2 3 4 1 5" 
	"3 2 4 1 5" 
	"4 1 3 2 5" 
	"1 4 3 2 5" 
	"3 4 1 2 5" 
	"4 3 1 2 5" 
	"1 3 4 2 5" 
	"3 1 4 2 5" 
	"4 1 2 3 5" 
	"1 4 2 3 5" 
	"2 4 1 3 5" 
	"4 2 1 3 5" 
	"1 2 4 3 5" 
	"2 1 4 3 5" 
	"5 1 2 3 4" 
	"1 5 2 3 4" 
	"2 5 1 3 4" 
	"5 2 1 3 4" 
	"1 2 5 3 4" 
	"2 1 5 3 4" 
	"3 1 2 5 4" 
	"1 3 2 5 4" 
	"2 3 1 5 4" 
	"3 2 1 5 4" 
	"1 2 3 5 4" 
	"2 1 3 5 4" 
	"3 5 2 1 4" 
	"5 3 2 1 4" 
	"2 3 5 1 4" 
	"3 2 5 1 4" 
	"5 2 3 1 4" 
	"2 5 3 1 4" 
	"3 5 1 2 4" 
	"5 3 1 2 4" 
	"1 3 5 2 4" 
	"3 1 5 2 4" 
	"5 1 3 2 4" 
	"1 5 3 2 4" 
	"4 5 1 2 3" 
	"5 4 1 2 3" 
	"1 4 5 2 3" 
	"4 1 5 2 3" 
	"5 1 4 2 3" 
	"1 5 4 2 3" 
	"2 5 1 4 3" 
	"5 2 1 4 3" 
	"1 2 5 4 3" 
	"2 1 5 4 3" 
	"5 1 2 4 3" 
	"1 5 2 4 3" 
	"2 4 1 5 3" 
	"4 2 1 5 3" 
	"1 2 4 5 3" 
	"2 1 4 5 3" 
	"4 1 2 5 3" 
	"1 4 2 5 3" 
	"2 4 5 1 3" 
	"4 2 5 1 3" 
	"5 2 4 1 3" 
	"2 5 4 1 3" 
	"4 5 2 1 3" 
	"5 4 2 1 3" 
	"3 4 5 1 2" 
	"4 3 5 1 2" 
	"5 3 4 1 2" 
	"3 5 4 1 2" 
	"4 5 3 1 2" 
	"5 4 3 1 2" 
	"1 4 5 3 2" 
	"4 1 5 3 2" 
	"5 1 4 3 2" 
	"1 5 4 3 2" 
	"4 5 1 3 2" 
	"5 4 1 3 2" 
	"1 3 5 4 2" 
	"3 1 5 4 2" 
	"5 1 3 4 2" 
	"1 5 3 4 2" 
	"3 5 1 4 2" 
	"5 3 1 4 2" 
	"1 3 4 5 2" 
	"3 1 4 5 2" 
	"4 1 3 5 2" 
	"1 4 3 5 2" 
	"3 4 1 5 2" 
	"4 3 1 5 2" 
	"2 3 4 5 1" 
	"3 2 4 5 1" 
	"4 2 3 5 1" 
	"2 4 3 5 1" 
	"3 4 2 5 1" 
	"4 3 2 5 1" 
	"5 3 4 2 1" 
	"3 5 4 2 1" 
	"4 5 3 2 1" 
	"5 4 3 2 1" 
	"3 4 5 2 1" 
	"4 3 5 2 1" 
	"5 2 4 3 1" 
	"2 5 4 3 1" 
	"4 5 2 3 1" 
	"5 4 2 3 1" 
	"2 4 5 3 1" 
	"4 2 5 3 1" 
	"5 2 3 4 1" 
	"2 5 3 4 1" 
	"3 5 2 4 1" 
	"5 3 2 4 1" 
	"2 3 5 4 1" 
	"3 2 5 4 1" 

)

for (( i=0; i < ${#testing5[@]}; i++ )); 
do 
if ((i == 20)) || ((i == 40)) || ((i == 60)) || ((i == 80)) || ((i == 100)); then
	read -n 1 -s -r -p "
Press any key to continue"
	printf "===================================\n"
fi
printf "\n#-----------------#\n#test %d => ${testing5[i]}: " $i
./push_swap ${testing5[i]} > tmp
test_pushswap=$(cat tmp | ./checker ${testing5[i]})
if [ "$test_pushswap" = "OK" ] ; then
	printf "${GREEN}${test_pushswap}${NOCOLOR}"
	nb_instructions=$(wc -l < tmp)
	# echo "TEST : $nb_instructions"
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
cat tmp | tr '\n' ' ' | cat
# printf "\n"
done

rm tmp