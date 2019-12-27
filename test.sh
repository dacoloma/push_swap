RED="\033[1;31m"
GREEN="\033[1;32m"
NOCOLOR="\033[0m"


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
# 	echo "${GREEN}${test_pushswap}${NOCOLOR}"
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
	echo "${GREEN}${test_pushswap}${NOCOLOR}"
elif [ "$test_pushswap" = "KO" ] ; then
	echo "${RED}${test_pushswap}${NOCOLOR}"
fi
cat tmp | tr '\n' ' ' | cat
done

rm tmp