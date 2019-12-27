RED="\033[1;31m"
GREEN="\033[1;32m"
NOCOLOR="\033[0m"

testing3=(
	"1 2 3"
	"1 3 2"
	"2 1 3"
	"2 3 1"
	"3 1 2"
	"3 2 1"
)

for (( i=0; i < ${#testing3[@]}; i++ )); 
do
# echo ${testing3[i]}; 
printf "\n#-----------------#\n#test ${i+1} => ${testing3[i]}: "
# instructions=$(./push_swap $testing3[i])
./push_swap ${testing3[i]} > tmp
test_pushswap=$(./push_swap ${testing3[i]} | ./checker ${testing3[i]})
if [ "$test_pushswap" = "OK" ] ; then
	echo "${GREEN}${test_pushswap}${NOCOLOR}"
elif [ "$test_pushswap" = "KO" ] ; then
	echo "${RED}${test_pushswap}${NOCOLOR}"
fi
cat tmp | tr '\n' ' ' | cat
done

testing4=(
	"1 2 3"
	"1 3 2"
	"2 1 3"
	"2 3 1"
	"3 1 2"
	"3 2 1"
)

for (( i=0; i < ${#testing3[@]}; i++ )); 
do
# echo ${testing3[i]}; 
printf "\n#-----------------#\n#test ${i+1} => ${testing3[i]}: "
# instructions=$(./push_swap $testing3[i])
./push_swap ${testing3[i]} > tmp
test_pushswap=$(./push_swap ${testing3[i]} | ./checker ${testing3[i]})
if [ "$test_pushswap" = "OK" ] ; then
	echo "${GREEN}${test_pushswap}${NOCOLOR}"
elif [ "$test_pushswap" = "KO" ] ; then
	echo "${RED}${test_pushswap}${NOCOLOR}"
fi
cat tmp | tr '\n' ' ' | cat
done

rm tmp