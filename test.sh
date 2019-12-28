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

testing4=(
	"1 2 3 4"
	"1 2 4 3"
	"1 3 2 4"
	"1 3 4 2"
	"1 4 2 3"
	"1 4 3 2"
	"2 1 3 4"
	"2 1 4 3"
	"2 3 1 4"
	"2 3 4 1"
	"2 4 1 3"
	"2 4 3 1"
	"3 1 2 4"
	"3 1 4 2"
	"3 2 1 4"
	"3 2 4 1"
	"3 4 1 2"
	"3 4 2 1"
	"4 1 2 3"
	"4 1 3 2"
	"4 2 1 3"
	"4 2 3 1"
	"4 3 1 2"
	"4 3 2 1"
)

for (( i=0; i < ${#testing4[@]}; i++ )); 
do 
printf "\n#-----------------#\n#test %d => ${testing4[i]}: " $i
./push_swap ${testing4[i]} > tmp
test_pushswap=$(./push_swap ${testing4[i]} | ./checker ${testing4[i]})
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
done

rm tmp