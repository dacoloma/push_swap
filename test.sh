RED="\033[1;31m"
GREEN="\033[1;32m"
ORANGE="\033[1;33m"
NOCOLOR="\033[0m"

clear
make && make clean && clear
testing3=(
	"1 2 3"
	"1 3 2"
	"2 1 3"
	"2 3 1"
	"3 1 2"
	"3 2 1"
)
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
testing6=(
	"1 2 3 4 5 6"
	"2 1 3 4 5 6"
	"3 1 2 4 5 6"
	"1 3 2 4 5 6"
	"2 3 1 4 5 6"
	"3 2 1 4 5 6"
	"4 2 3 1 5 6"
	"2 4 3 1 5 6"
	"3 4 2 1 5 6"
	"4 3 2 1 5 6"
	"2 3 4 1 5 6"
	"3 2 4 1 5 6"
	"4 1 3 2 5 6"
	"1 4 3 2 5 6"
	"3 4 1 2 5 6"
	"4 3 1 2 5 6"
	"1 3 4 2 5 6"
	"3 1 4 2 5 6"
	"4 1 2 3 5 6"
	"1 4 2 3 5 6"
	"2 4 1 3 5 6"
	"4 2 1 3 5 6"
	"1 2 4 3 5 6"
	"2 1 4 3 5 6"
	"5 1 2 3 4 6"
	"1 5 2 3 4 6"
	"2 5 1 3 4 6"
	"5 2 1 3 4 6"
	"1 2 5 3 4 6"
	"2 1 5 3 4 6"
	"3 1 2 5 4 6"
	"1 3 2 5 4 6"
	"2 3 1 5 4 6"
	"3 2 1 5 4 6"
	"1 2 3 5 4 6"
	"2 1 3 5 4 6"
	"3 5 2 1 4 6"
	"5 3 2 1 4 6"
	"2 3 5 1 4 6"
	"3 2 5 1 4 6"
	"5 2 3 1 4 6"
	"2 5 3 1 4 6"
	"3 5 1 2 4 6"
	"5 3 1 2 4 6"
	"1 3 5 2 4 6"
	"3 1 5 2 4 6"
	"5 1 3 2 4 6"
	"1 5 3 2 4 6"
	"4 5 1 2 3 6"
	"5 4 1 2 3 6"
	"1 4 5 2 3 6"
	"4 1 5 2 3 6"
	"5 1 4 2 3 6"
	"1 5 4 2 3 6"
	"2 5 1 4 3 6"
	"5 2 1 4 3 6"
	"1 2 5 4 3 6"
	"2 1 5 4 3 6"
	"5 1 2 4 3 6"
	"1 5 2 4 3 6"
	"2 4 1 5 3 6"
	"4 2 1 5 3 6"
	"1 2 4 5 3 6"
	"2 1 4 5 3 6"
	"4 1 2 5 3 6"
	"1 4 2 5 3 6"
	"2 4 5 1 3 6"
	"4 2 5 1 3 6"
	"5 2 4 1 3 6"
	"2 5 4 1 3 6"
	"4 5 2 1 3 6"
	"5 4 2 1 3 6"
	"3 4 5 1 2 6"
	"4 3 5 1 2 6"
	"5 3 4 1 2 6"
	"3 5 4 1 2 6"
	"4 5 3 1 2 6"
	"5 4 3 1 2 6"
	"1 4 5 3 2 6"
	"4 1 5 3 2 6"
	"5 1 4 3 2 6"
	"1 5 4 3 2 6"
	"4 5 1 3 2 6"
	"5 4 1 3 2 6"
	"1 3 5 4 2 6"
	"3 1 5 4 2 6"
	"5 1 3 4 2 6"
	"1 5 3 4 2 6"
	"3 5 1 4 2 6"
	"5 3 1 4 2 6"
	"1 3 4 5 2 6"
	"3 1 4 5 2 6"
	"4 1 3 5 2 6"
	"1 4 3 5 2 6"
	"3 4 1 5 2 6"
	"4 3 1 5 2 6"
	"2 3 4 5 1 6"
	"3 2 4 5 1 6"
	"4 2 3 5 1 6"
	"2 4 3 5 1 6"
	"3 4 2 5 1 6"
	"4 3 2 5 1 6"
	"5 3 4 2 1 6"
	"3 5 4 2 1 6"
	"4 5 3 2 1 6"
	"5 4 3 2 1 6"
	"3 4 5 2 1 6"
	"4 3 5 2 1 6"
	"5 2 4 3 1 6"
	"2 5 4 3 1 6"
	"4 5 2 3 1 6"
	"5 4 2 3 1 6"
	"2 4 5 3 1 6"
	"4 2 5 3 1 6"
	"5 2 3 4 1 6"
	"2 5 3 4 1 6"
	"3 5 2 4 1 6"
	"5 3 2 4 1 6"
	"2 3 5 4 1 6"
	"3 2 5 4 1 6"
	"6 2 3 4 5 1"
	"2 6 3 4 5 1"
	"3 6 2 4 5 1"
	"6 3 2 4 5 1"
	"2 3 6 4 5 1"
	"3 2 6 4 5 1"
	"4 2 3 6 5 1"
	"2 4 3 6 5 1"
	"3 4 2 6 5 1"
	"4 3 2 6 5 1"
	"2 3 4 6 5 1"
	"3 2 4 6 5 1"
	"4 6 3 2 5 1"
	"6 4 3 2 5 1"
	"3 4 6 2 5 1"
	"4 3 6 2 5 1"
	"6 3 4 2 5 1"
	"3 6 4 2 5 1"
	"4 6 2 3 5 1"
	"6 4 2 3 5 1"
	"2 4 6 3 5 1"
	"4 2 6 3 5 1"
	"6 2 4 3 5 1"
	"2 6 4 3 5 1"
	"5 6 2 3 4 1"
	"6 5 2 3 4 1"
	"2 5 6 3 4 1"
	"5 2 6 3 4 1"
	"6 2 5 3 4 1"
	"2 6 5 3 4 1"
	"3 6 2 5 4 1"
	"6 3 2 5 4 1"
	"2 3 6 5 4 1"
	"3 2 6 5 4 1"
	"6 2 3 5 4 1"
	"2 6 3 5 4 1"
	"3 5 2 6 4 1"
	"5 3 2 6 4 1"
	"2 3 5 6 4 1"
	"3 2 5 6 4 1"
	"5 2 3 6 4 1"
	"2 5 3 6 4 1"
	"3 5 6 2 4 1"
	"5 3 6 2 4 1"
	"6 3 5 2 4 1"
	"3 6 5 2 4 1"
	"5 6 3 2 4 1"
	"6 5 3 2 4 1"
	"4 5 6 2 3 1"
	"5 4 6 2 3 1"
	"6 4 5 2 3 1"
	"4 6 5 2 3 1"
	"5 6 4 2 3 1"
	"6 5 4 2 3 1"
	"2 5 6 4 3 1"
	"5 2 6 4 3 1"
	"6 2 5 4 3 1"
	"2 6 5 4 3 1"
	"5 6 2 4 3 1"
	"6 5 2 4 3 1"
	"2 4 6 5 3 1"
	"4 2 6 5 3 1"
	"6 2 4 5 3 1"
	"2 6 4 5 3 1"
	"4 6 2 5 3 1"
	"6 4 2 5 3 1"
	"2 4 5 6 3 1"
	"4 2 5 6 3 1"
	"5 2 4 6 3 1"
	"2 5 4 6 3 1"
	"4 5 2 6 3 1"
	"5 4 2 6 3 1"
	"3 4 5 6 2 1"
	"4 3 5 6 2 1"
	"5 3 4 6 2 1"
	"3 5 4 6 2 1"
	"4 5 3 6 2 1"
	"5 4 3 6 2 1"
	"6 4 5 3 2 1"
	"4 6 5 3 2 1"
	"5 6 4 3 2 1"
	"6 5 4 3 2 1"
	"4 5 6 3 2 1"
	"5 4 6 3 2 1"
	"6 3 5 4 2 1"
	"3 6 5 4 2 1"
	"5 6 3 4 2 1"
	"6 5 3 4 2 1"
	"3 5 6 4 2 1"
	"5 3 6 4 2 1"
	"6 3 4 5 2 1"
	"3 6 4 5 2 1"
	"4 6 3 5 2 1"
	"6 4 3 5 2 1"
	"3 4 6 5 2 1"
	"4 3 6 5 2 1"
	"2 3 4 5 6 1"
	"3 2 4 5 6 1"
	"4 2 3 5 6 1"
	"2 4 3 5 6 1"
	"3 4 2 5 6 1"
	"4 3 2 5 6 1"
	"5 3 4 2 6 1"
	"3 5 4 2 6 1"
	"4 5 3 2 6 1"
	"5 4 3 2 6 1"
	"3 4 5 2 6 1"
	"4 3 5 2 6 1"
	"5 2 4 3 6 1"
	"2 5 4 3 6 1"
	"4 5 2 3 6 1"
	"5 4 2 3 6 1"
	"2 4 5 3 6 1"
	"4 2 5 3 6 1"
	"5 2 3 4 6 1"
	"2 5 3 4 6 1"
	"3 5 2 4 6 1"
	"5 3 2 4 6 1"
	"2 3 5 4 6 1"
	"3 2 5 4 6 1"
	"6 1 3 4 5 2"
	"1 6 3 4 5 2"
	"3 6 1 4 5 2"
	"6 3 1 4 5 2"
	"1 3 6 4 5 2"
	"3 1 6 4 5 2"
	"4 1 3 6 5 2"
	"1 4 3 6 5 2"
	"3 4 1 6 5 2"
	"4 3 1 6 5 2"
	"1 3 4 6 5 2"
	"3 1 4 6 5 2"
	"4 6 3 1 5 2"
	"6 4 3 1 5 2"
	"3 4 6 1 5 2"
	"4 3 6 1 5 2"
	"6 3 4 1 5 2"
	"3 6 4 1 5 2"
	"4 6 1 3 5 2"
	"6 4 1 3 5 2"
	"1 4 6 3 5 2"
	"4 1 6 3 5 2"
	"6 1 4 3 5 2"
	"1 6 4 3 5 2"
	"5 6 1 3 4 2"
	"6 5 1 3 4 2"
	"1 5 6 3 4 2"
	"5 1 6 3 4 2"
	"6 1 5 3 4 2"
	"1 6 5 3 4 2"
	"3 6 1 5 4 2"
	"6 3 1 5 4 2"
	"1 3 6 5 4 2"
	"3 1 6 5 4 2"
	"6 1 3 5 4 2"
	"1 6 3 5 4 2"
	"3 5 1 6 4 2"
	"5 3 1 6 4 2"
	"1 3 5 6 4 2"
	"3 1 5 6 4 2"
	"5 1 3 6 4 2"
	"1 5 3 6 4 2"
	"3 5 6 1 4 2"
	"5 3 6 1 4 2"
	"6 3 5 1 4 2"
	"3 6 5 1 4 2"
	"5 6 3 1 4 2"
	"6 5 3 1 4 2"
	"4 5 6 1 3 2"
	"5 4 6 1 3 2"
	"6 4 5 1 3 2"
	"4 6 5 1 3 2"
	"5 6 4 1 3 2"
	"6 5 4 1 3 2"
	"1 5 6 4 3 2"
	"5 1 6 4 3 2"
	"6 1 5 4 3 2"
	"1 6 5 4 3 2"
	"5 6 1 4 3 2"
	"6 5 1 4 3 2"
	"1 4 6 5 3 2"
	"4 1 6 5 3 2"
	"6 1 4 5 3 2"
	"1 6 4 5 3 2"
	"4 6 1 5 3 2"
	"6 4 1 5 3 2"
	"1 4 5 6 3 2"
	"4 1 5 6 3 2"
	"5 1 4 6 3 2"
	"1 5 4 6 3 2"
	"4 5 1 6 3 2"
	"5 4 1 6 3 2"
	"3 4 5 6 1 2"
	"4 3 5 6 1 2"
	"5 3 4 6 1 2"
	"3 5 4 6 1 2"
	"4 5 3 6 1 2"
	"5 4 3 6 1 2"
	"6 4 5 3 1 2"
	"4 6 5 3 1 2"
	"5 6 4 3 1 2"
	"6 5 4 3 1 2"
	"4 5 6 3 1 2"
	"5 4 6 3 1 2"
	"6 3 5 4 1 2"
	"3 6 5 4 1 2"
	"5 6 3 4 1 2"
	"6 5 3 4 1 2"
	"3 5 6 4 1 2"
	"5 3 6 4 1 2"
	"6 3 4 5 1 2"
	"3 6 4 5 1 2"
	"4 6 3 5 1 2"
	"6 4 3 5 1 2"
	"3 4 6 5 1 2"
	"4 3 6 5 1 2"
	"1 3 4 5 6 2"
	"3 1 4 5 6 2"
	"4 1 3 5 6 2"
	"1 4 3 5 6 2"
	"3 4 1 5 6 2"
	"4 3 1 5 6 2"
	"5 3 4 1 6 2"
	"3 5 4 1 6 2"
	"4 5 3 1 6 2"
	"5 4 3 1 6 2"
	"3 4 5 1 6 2"
	"4 3 5 1 6 2"
	"5 1 4 3 6 2"
	"1 5 4 3 6 2"
	"4 5 1 3 6 2"
	"5 4 1 3 6 2"
	"1 4 5 3 6 2"
	"4 1 5 3 6 2"
	"5 1 3 4 6 2"
	"1 5 3 4 6 2"
	"3 5 1 4 6 2"
	"5 3 1 4 6 2"
	"1 3 5 4 6 2"
	"3 1 5 4 6 2"
	"6 1 2 4 5 3"
	"1 6 2 4 5 3"
	"2 6 1 4 5 3"
	"6 2 1 4 5 3"
	"1 2 6 4 5 3"
	"2 1 6 4 5 3"
	"4 1 2 6 5 3"
	"1 4 2 6 5 3"
	"2 4 1 6 5 3"
	"4 2 1 6 5 3"
	"1 2 4 6 5 3"
	"2 1 4 6 5 3"
	"4 6 2 1 5 3"
	"6 4 2 1 5 3"
	"2 4 6 1 5 3"
	"4 2 6 1 5 3"
	"6 2 4 1 5 3"
	"2 6 4 1 5 3"
	"4 6 1 2 5 3"
	"6 4 1 2 5 3"
	"1 4 6 2 5 3"
	"4 1 6 2 5 3"
	"6 1 4 2 5 3"
	"1 6 4 2 5 3"
	"5 6 1 2 4 3"
	"6 5 1 2 4 3"
	"1 5 6 2 4 3"
	"5 1 6 2 4 3"
	"6 1 5 2 4 3"
	"1 6 5 2 4 3"
	"2 6 1 5 4 3"
	"6 2 1 5 4 3"
	"1 2 6 5 4 3"
	"2 1 6 5 4 3"
	"6 1 2 5 4 3"
	"1 6 2 5 4 3"
	"2 5 1 6 4 3"
	"5 2 1 6 4 3"
	"1 2 5 6 4 3"
	"2 1 5 6 4 3"
	"5 1 2 6 4 3"
	"1 5 2 6 4 3"
	"2 5 6 1 4 3"
	"5 2 6 1 4 3"
	"6 2 5 1 4 3"
	"2 6 5 1 4 3"
	"5 6 2 1 4 3"
	"6 5 2 1 4 3"
	"4 5 6 1 2 3"
	"5 4 6 1 2 3"
	"6 4 5 1 2 3"
	"4 6 5 1 2 3"
	"5 6 4 1 2 3"
	"6 5 4 1 2 3"
	"1 5 6 4 2 3"
	"5 1 6 4 2 3"
	"6 1 5 4 2 3"
	"1 6 5 4 2 3"
	"5 6 1 4 2 3"
	"6 5 1 4 2 3"
	"1 4 6 5 2 3"
	"4 1 6 5 2 3"
	"6 1 4 5 2 3"
	"1 6 4 5 2 3"
	"4 6 1 5 2 3"
	"6 4 1 5 2 3"
	"1 4 5 6 2 3"
	"4 1 5 6 2 3"
	"5 1 4 6 2 3"
	"1 5 4 6 2 3"
	"4 5 1 6 2 3"
	"5 4 1 6 2 3"
	"2 4 5 6 1 3"
	"4 2 5 6 1 3"
	"5 2 4 6 1 3"
	"2 5 4 6 1 3"
	"4 5 2 6 1 3"
	"5 4 2 6 1 3"
	"6 4 5 2 1 3"
	"4 6 5 2 1 3"
	"5 6 4 2 1 3"
	"6 5 4 2 1 3"
	"4 5 6 2 1 3"
	"5 4 6 2 1 3"
	"6 2 5 4 1 3"
	"2 6 5 4 1 3"
	"5 6 2 4 1 3"
	"6 5 2 4 1 3"
	"2 5 6 4 1 3"
	"5 2 6 4 1 3"
	"6 2 4 5 1 3"
	"2 6 4 5 1 3"
	"4 6 2 5 1 3"
	"6 4 2 5 1 3"
	"2 4 6 5 1 3"
	"4 2 6 5 1 3"
	"1 2 4 5 6 3"
	"2 1 4 5 6 3"
	"4 1 2 5 6 3"
	"1 4 2 5 6 3"
	"2 4 1 5 6 3"
	"4 2 1 5 6 3"
	"5 2 4 1 6 3"
	"2 5 4 1 6 3"
	"4 5 2 1 6 3"
	"5 4 2 1 6 3"
	"2 4 5 1 6 3"
	"4 2 5 1 6 3"
	"5 1 4 2 6 3"
	"1 5 4 2 6 3"
	"4 5 1 2 6 3"
	"5 4 1 2 6 3"
	"1 4 5 2 6 3"
	"4 1 5 2 6 3"
	"5 1 2 4 6 3"
	"1 5 2 4 6 3"
	"2 5 1 4 6 3"
	"5 2 1 4 6 3"
	"1 2 5 4 6 3"
	"2 1 5 4 6 3"
	"6 1 2 3 5 4"
	"1 6 2 3 5 4"
	"2 6 1 3 5 4"
	"6 2 1 3 5 4"
	"1 2 6 3 5 4"
	"2 1 6 3 5 4"
	"3 1 2 6 5 4"
	"1 3 2 6 5 4"
	"2 3 1 6 5 4"
	"3 2 1 6 5 4"
	"1 2 3 6 5 4"
	"2 1 3 6 5 4"
	"3 6 2 1 5 4"
	"6 3 2 1 5 4"
	"2 3 6 1 5 4"
	"3 2 6 1 5 4"
	"6 2 3 1 5 4"
	"2 6 3 1 5 4"
	"3 6 1 2 5 4"
	"6 3 1 2 5 4"
	"1 3 6 2 5 4"
	"3 1 6 2 5 4"
	"6 1 3 2 5 4"
	"1 6 3 2 5 4"
	"5 6 1 2 3 4"
	"6 5 1 2 3 4"
	"1 5 6 2 3 4"
	"5 1 6 2 3 4"
	"6 1 5 2 3 4"
	"1 6 5 2 3 4"
	"2 6 1 5 3 4"
	"6 2 1 5 3 4"
	"1 2 6 5 3 4"
	"2 1 6 5 3 4"
	"6 1 2 5 3 4"
	"1 6 2 5 3 4"
	"2 5 1 6 3 4"
	"5 2 1 6 3 4"
	"1 2 5 6 3 4"
	"2 1 5 6 3 4"
	"5 1 2 6 3 4"
	"1 5 2 6 3 4"
	"2 5 6 1 3 4"
	"5 2 6 1 3 4"
	"6 2 5 1 3 4"
	"2 6 5 1 3 4"
	"5 6 2 1 3 4"
	"6 5 2 1 3 4"
	"3 5 6 1 2 4"
	"5 3 6 1 2 4"
	"6 3 5 1 2 4"
	"3 6 5 1 2 4"
	"5 6 3 1 2 4"
	"6 5 3 1 2 4"
	"1 5 6 3 2 4"
	"5 1 6 3 2 4"
	"6 1 5 3 2 4"
	"1 6 5 3 2 4"
	"5 6 1 3 2 4"
	"6 5 1 3 2 4"
	"1 3 6 5 2 4"
	"3 1 6 5 2 4"
	"6 1 3 5 2 4"
	"1 6 3 5 2 4"
	"3 6 1 5 2 4"
	"6 3 1 5 2 4"
	"1 3 5 6 2 4"
	"3 1 5 6 2 4"
	"5 1 3 6 2 4"
	"1 5 3 6 2 4"
	"3 5 1 6 2 4"
	"5 3 1 6 2 4"
	"2 3 5 6 1 4"
	"3 2 5 6 1 4"
	"5 2 3 6 1 4"
	"2 5 3 6 1 4"
	"3 5 2 6 1 4"
	"5 3 2 6 1 4"
	"6 3 5 2 1 4"
	"3 6 5 2 1 4"
	"5 6 3 2 1 4"
	"6 5 3 2 1 4"
	"3 5 6 2 1 4"
	"5 3 6 2 1 4"
	"6 2 5 3 1 4"
	"2 6 5 3 1 4"
	"5 6 2 3 1 4"
	"6 5 2 3 1 4"
	"2 5 6 3 1 4"
	"5 2 6 3 1 4"
	"6 2 3 5 1 4"
	"2 6 3 5 1 4"
	"3 6 2 5 1 4"
	"6 3 2 5 1 4"
	"2 3 6 5 1 4"
	"3 2 6 5 1 4"
	"1 2 3 5 6 4"
	"2 1 3 5 6 4"
	"3 1 2 5 6 4"
	"1 3 2 5 6 4"
	"2 3 1 5 6 4"
	"3 2 1 5 6 4"
	"5 2 3 1 6 4"
	"2 5 3 1 6 4"
	"3 5 2 1 6 4"
	"5 3 2 1 6 4"
	"2 3 5 1 6 4"
	"3 2 5 1 6 4"
	"5 1 3 2 6 4"
	"1 5 3 2 6 4"
	"3 5 1 2 6 4"
	"5 3 1 2 6 4"
	"1 3 5 2 6 4"
	"3 1 5 2 6 4"
	"5 1 2 3 6 4"
	"1 5 2 3 6 4"
	"2 5 1 3 6 4"
	"5 2 1 3 6 4"
	"1 2 5 3 6 4"
	"2 1 5 3 6 4"
	"6 1 2 3 4 5"
	"1 6 2 3 4 5"
	"2 6 1 3 4 5"
	"6 2 1 3 4 5"
	"1 2 6 3 4 5"
	"2 1 6 3 4 5"
	"3 1 2 6 4 5"
	"1 3 2 6 4 5"
	"2 3 1 6 4 5"
	"3 2 1 6 4 5"
	"1 2 3 6 4 5"
	"2 1 3 6 4 5"
	"3 6 2 1 4 5"
	"6 3 2 1 4 5"
	"2 3 6 1 4 5"
	"3 2 6 1 4 5"
	"6 2 3 1 4 5"
	"2 6 3 1 4 5"
	"3 6 1 2 4 5"
	"6 3 1 2 4 5"
	"1 3 6 2 4 5"
	"3 1 6 2 4 5"
	"6 1 3 2 4 5"
	"1 6 3 2 4 5"
	"4 6 1 2 3 5"
	"6 4 1 2 3 5"
	"1 4 6 2 3 5"
	"4 1 6 2 3 5"
	"6 1 4 2 3 5"
	"1 6 4 2 3 5"
	"2 6 1 4 3 5"
	"6 2 1 4 3 5"
	"1 2 6 4 3 5"
	"2 1 6 4 3 5"
	"6 1 2 4 3 5"
	"1 6 2 4 3 5"
	"2 4 1 6 3 5"
	"4 2 1 6 3 5"
	"1 2 4 6 3 5"
	"2 1 4 6 3 5"
	"4 1 2 6 3 5"
	"1 4 2 6 3 5"
	"2 4 6 1 3 5"
	"4 2 6 1 3 5"
	"6 2 4 1 3 5"
	"2 6 4 1 3 5"
	"4 6 2 1 3 5"
	"6 4 2 1 3 5"
	"3 4 6 1 2 5"
	"4 3 6 1 2 5"
	"6 3 4 1 2 5"
	"3 6 4 1 2 5"
	"4 6 3 1 2 5"
	"6 4 3 1 2 5"
	"1 4 6 3 2 5"
	"4 1 6 3 2 5"
	"6 1 4 3 2 5"
	"1 6 4 3 2 5"
	"4 6 1 3 2 5"
	"6 4 1 3 2 5"
	"1 3 6 4 2 5"
	"3 1 6 4 2 5"
	"6 1 3 4 2 5"
	"1 6 3 4 2 5"
	"3 6 1 4 2 5"
	"6 3 1 4 2 5"
	"1 3 4 6 2 5"
	"3 1 4 6 2 5"
	"4 1 3 6 2 5"
	"1 4 3 6 2 5"
	"3 4 1 6 2 5"
	"4 3 1 6 2 5"
	"2 3 4 6 1 5"
	"3 2 4 6 1 5"
	"4 2 3 6 1 5"
	"2 4 3 6 1 5"
	"3 4 2 6 1 5"
	"4 3 2 6 1 5"
	"6 3 4 2 1 5"
	"3 6 4 2 1 5"
	"4 6 3 2 1 5"
	"6 4 3 2 1 5"
	"3 4 6 2 1 5"
	"4 3 6 2 1 5"
	"6 2 4 3 1 5"
	"2 6 4 3 1 5"
	"4 6 2 3 1 5"
	"6 4 2 3 1 5"
	"2 4 6 3 1 5"
	"4 2 6 3 1 5"
	"6 2 3 4 1 5"
	"2 6 3 4 1 5"
	"3 6 2 4 1 5"
	"6 3 2 4 1 5"
	"2 3 6 4 1 5"
	"3 2 6 4 1 5"
	"1 2 3 4 6 5"
	"2 1 3 4 6 5"
	"3 1 2 4 6 5"
	"1 3 2 4 6 5"
	"2 3 1 4 6 5"
	"3 2 1 4 6 5"
	"4 2 3 1 6 5"
	"2 4 3 1 6 5"
	"3 4 2 1 6 5"
	"4 3 2 1 6 5"
	"2 3 4 1 6 5"
	"3 2 4 1 6 5"
	"4 1 3 2 6 5"
	"1 4 3 2 6 5"
	"3 4 1 2 6 5"
	"4 3 1 2 6 5"
	"1 3 4 2 6 5"
	"3 1 4 2 6 5"
	"4 1 2 3 6 5"
	"1 4 2 3 6 5"
	"2 4 1 3 6 5"
	"4 2 1 3 6 5"
	"1 2 4 3 6 5"
	"2 1 4 3 6 5"
)
testing100=(
	"41 58 68 35 38 101 93 21 104 31 30 102 57 74 25 16 36 78 65 2 19 40 69 100 56 70 64 85 99 6 7 13 9 80 86 105 89 45 49 8 28 14 53 67 98 23 42 103 52 77 1 95 82 48 94 92 47 18 79 81 91 72 55 106 26 60 10 83 71 84 88 4 5 22 17 33 108 96 51 46 32 59 44 12 3 50 109 43 76 34 39 11 37 90 66 29 15 62 73 63"
	"54 58 89 13 59 35 53 44 62 73 51 26 80 64 21 29 107 77 16 102 71 103 55 42 106 23 87 9 88 101 69 28 108 32 2 17 99 24 63 6 41 48 109 46 4 38 57 60 8 11 12 36 81 49 33 47 40 79 1 78 84 91 105 94 19 65 96 90 92 72 98 27 86 22 74 76 100 5 83 82 3 104 14 25 56 68 39 52 7 34 18 66 31 75 45 50 15 70 30 37"
	"90 63 97 72 19 105 95 103 5 89 3 104 51 75 76 4 35 98 74 106 48 45 73 107 67 39 65 44 108 42 52 91 8 34 92 47 22 84 64 46 12 10 82 16 6 58 33 69 66 86 36 83 11 13 102 109 88 93 15 81 54 26 94 2 53 59 62 55 7 80 28 31 101 50 32 49 87 23 1 85 41 61 30 21 17 18 14 25 29 70 38 40 60 57 20 68 78 71 37 9"
)

# 3 NUMBERS

for (( i=0; i < ${#testing3[@]}; i++ )); 
do
printf "\n#-----------------#\n#test %d => ${testing3[i]}: " $i
./push_swap ${testing3[i]} > tmp
test_pushswap=$(./push_swap ${testing3[i]} | ./checker ${testing3[i]})
if [ "$test_pushswap" = "OK" ] ; then
	printf "${GREEN}${test_pushswap}${NOCOLOR}"
	nb_instructions=$(wc -l < tmp)
	if (( "$nb_instructions" < 3 )) ; then
		echo "${GREEN}${nb_instructions}${NOCOLOR}"
	elif (( "$nb_instructions" < 5 )) ; then
		echo "${ORANGE}${nb_instructions}${NOCOLOR}"
	else
		echo "${RED}${nb_instructions}${NOCOLOR}"
	fi
elif [ "$test_pushswap" = "KO" ] ; then
	echo "${RED}${test_pushswap}${NOCOLOR}"
fi
cat tmp | tr '\n' ' ' | cat
done

read -n 1 -s -p "
Press any key to continue TEST 4 NUMBERS ?(y/n)" var
if [ "$var" = "n" ] ; then
	rm tmp
	exit
fi
printf "===================================\n"

# 4 NUMBERS
for (( i=0; i < ${#testing4[@]}; i++ )); 
do 
printf "\n#-----------------#\n#test %d => ${testing4[i]}: " $i
./push_swap ${testing4[i]} > tmp
test_pushswap=$(cat tmp | ./checker ${testing4[i]})
if [ "$test_pushswap" = "OK" ] ; then
	printf "${GREEN}${test_pushswap}${NOCOLOR}"
	nb_instructions=$(wc -l < tmp)
	if (( "$nb_instructions" < 5 )) ; then
		echo "${GREEN}${nb_instructions}${NOCOLOR}"
	elif (( "$nb_instructions" < 8 )) ; then
		echo "${ORANGE}${nb_instructions}${NOCOLOR}"
	else
		echo "${RED}${nb_instructions}${NOCOLOR}"
	fi
elif [ "$test_pushswap" = "KO" ] ; then
	echo "${RED}${test_pushswap}${NOCOLOR}"
fi
cat tmp | tr '\n' ' ' | cat
done

read -n 1 -s -p "
Press any key to continue TEST 5 NUMBERS ?(y/n)" var
if [ "$var" = "n" ]; then
	rm tmp
	exit
fi
printf "===================================\n"

# 5 NUMBERS
for (( i=0; i < ${#testing5[@]}; i++ )); 
do 
if ((i != 0)) && ((i % 20 == 0)) ; then
	read -n 1 -s -p "
Continue ?(y/n)" var
	if [ "$var" = "n" ]; then
		rm tmp
		exit
	fi
	printf "===================================\n"
fi
printf "\n#-----------------#\n#test %d => ${testing5[i]}: " $i
./push_swap ${testing5[i]} > tmp
test_pushswap=$(cat tmp | ./checker ${testing5[i]})
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
cat tmp | tr '\n' ' ' | cat
# printf "\n"
done

read -n 1 -s -p "
Press any key to continue TEST 6 NUMBERS ?(y/n)" var
if [ "$var" = "n" ]; then
	rm tmp
	exit
fi
printf "===================================\n"

# 6 NUMBERS
for (( i=0; i < ${#testing6[@]}; i++ )); 
do 
if ((i != 0)) && ((i % 20 == 0)) ; then
	read -n 1 -s -p "
Continue ?(y/n)" var
	if [ "$var" = "n" ]; then
		rm tmp
		exit
	fi
	printf "===================================\n"
fi
printf "\n#-----------------#\n#test %d => ${testing6[i]}: " $i
./push_swap ${testing6[i]} > tmp
test_pushswap=$(cat tmp | ./checker ${testing6[i]})
if [ "$test_pushswap" = "OK" ] ; then
	printf "${GREEN}${test_pushswap}${NOCOLOR}"
	nb_instructions=$(wc -l < tmp)
	if (( "$nb_instructions" < 15 )) ; then
		echo "${GREEN}${nb_instructions}${NOCOLOR}"
	elif (( "$nb_instructions" < 20 )) ; then
		echo "${ORANGE}${nb_instructions}${NOCOLOR}"
	else
		echo "${RED}${nb_instructions}${NOCOLOR}"
	fi
elif [ "$test_pushswap" = "KO" ] ; then
	echo "${RED}${test_pushswap}${NOCOLOR}"
fi
cat tmp | tr '\n' ' ' | cat
done

read -n 1 -s -p "
Press any key to continue TEST 100 NUMBERS ?(y/n)" var
if [ "$var" = "n" ]; then
	rm tmp
	exit
fi
printf "===================================\n"

# 100 NUMBERS
for (( i=0; i < ${#testing100[@]}; i++ )); 
do 
# if ((i % 20 == 0)) ; then
# 	read -n 1 -s -p "
# Continue ?(y/n)" var
# 	if [ "$var" = "n" ]; then
# 		rm tmp
# 		exit
# 	fi
# 	printf "===================================\n"
# fi
printf "\n#-----------------#\n#test %d => ${testing100[i]}: " $i
./push_swap ${testing100[i]} > tmp
test_pushswap=$(cat tmp | ./checker ${testing100[i]})
if [ "$test_pushswap" = "OK" ] ; then
	printf "${GREEN}${test_pushswap}${NOCOLOR}"
	nb_instructions=$(wc -l < tmp)
	if (( "$nb_instructions" < 15 )) ; then
		echo "${GREEN}${nb_instructions}${NOCOLOR}"
	elif (( "$nb_instructions" < 20 )) ; then
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