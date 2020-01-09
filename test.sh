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
testing500=(
	"176 425 51 313 516 17 336 202 366 49 449 519 424 517 124 231 435 27 339 396 13 480 393 295 240 360 125 9 493 398 111 224 370 205 318 194 215 312 463 21 418 511 62 303 505 117 350 118 238 469 137 322 166 479 304 6 412 68 337 114 64 306 88 160 289 395 79 229 485 41 182 47 232 29 345 459 367 209 127 454 329 460 457 381 15 280 504 497 446 385 186 399 211 217 33 25 291 20 239 233 346 144 455 184 330 136 140 197 379 268 353 90 115 384 276 372 283 150 42 195 71 152 203 163 488 183 286 7 281 259 338 107 501 122 423 496 45 95 471 123 159 440 221 116 193 158 67 191 325 265 305 404 512 285 420 288 413 483 12 196 208 308 74 173 509 470 206 46 344 86 500 138 332 16 416 299 441 417 187 464 153 143 230 506 307 400 102 174 110 72 76 450 371 458 478 8 3 93 277 451 97 26 513 390 461 199 317 10 228 266 274 397 84 348 154 250 333 65 300 444 242 148 18 264 314 290 94 394 475 36 342 365 438 121 294 369 5 476 502 315 83 28 271 436 59 284 172 518 378 507 514 287 406 212 309 113 89 109 165 364 402 44 149 426 279 355 66 213 472 442 236 91 245 53 30 359 248 178 98 75 492 429 100 175 257 139 448 2 422 190 161 85 34 432 269 219 357 157 179 335 24 409 218 408 361 37 388 216 292 356 164 352 477 503 223 220 141 401 495 392 270 262 192 415 112 310 320 387 391 323 130 261 267 263 38 61 147 244 363 252 132 427 382 508 128 201 162 177 260 434 200 180 249 376 343 316 311 481 32 466 407 35 465 278 297 99 227 78 188 474 57 491 437 453 73 77 103 354 119 135 302 214 145 349 467 14 241 50 105 456 48 334 341 253 494 168 80 482 452 169 129 43 101 374 104 410 60 22 326 155 210 87 328 443 327 498 235 92 358 319 515 225 489 106 439 82 54 189 246 58 243 386 362 11 351 52 126 490 81 375 156 31 430 373 486 256 272 19 298 510 484 167 204 377 222 411 151 258 473 428 282 383 185 462 301 131 181 69 468 414 108 324 1 431 207 120 63 55 133 331 23 170 255 171 389 445 247 293 403 447 273 134 56 321 340 96 254 226 237 275"
	"366 83 446 17 59 242 131 281 213 223 82 214 207 294 57 81 435 500 488 28 315 86 117 183 508 103 76 275 230 371 432 327 299 408 493 390 3 409 276 286 466 173 47 258 274 306 243 440 94 278 194 483 468 300 355 419 262 505 251 321 457 450 229 267 180 438 482 279 336 88 110 378 319 291 164 244 148 255 206 36 34 172 124 345 141 25 171 259 357 60 490 463 224 128 233 363 381 400 467 109 389 67 221 9 73 480 85 64 66 353 62 191 167 177 121 2 314 216 241 404 341 142 178 163 311 376 245 374 386 239 302 13 256 35 235 364 250 155 322 114 43 212 503 196 154 287 358 231 195 359 347 237 492 102 46 93 96 367 365 497 135 111 448 54 517 247 149 226 159 340 451 349 514 215 456 26 442 406 395 38 189 361 184 192 506 354 246 156 516 122 350 200 211 288 115 303 472 208 108 4 323 89 1 283 462 225 79 307 494 116 396 153 485 388 495 143 248 161 179 146 188 134 170 471 398 352 441 301 293 285 104 252 202 436 447 197 158 428 219 393 218 473 431 210 263 415 55 289 175 370 123 339 53 290 42 120 77 199 249 401 7 144 185 284 11 405 368 181 510 52 338 412 220 137 439 449 453 40 234 379 151 296 272 309 65 464 205 112 129 501 15 461 70 91 176 193 504 31 140 139 513 32 470 18 49 460 334 78 125 232 98 373 424 305 133 201 190 329 333 515 407 477 182 198 217 310 101 484 421 416 12 254 118 491 260 318 10 19 145 266 37 90 44 382 326 150 69 481 92 403 399 107 16 80 304 380 165 270 454 507 204 422 443 169 337 295 166 308 282 445 489 99 475 325 430 56 509 264 265 228 186 511 21 24 136 342 402 187 269 261 418 351 48 420 147 384 61 268 126 22 30 362 377 20 138 106 29 238 397 474 328 383 27 280 391 392 433 498 459 253 465 41 292 8 426 132 227 105 417 100 434 257 152 394 478 455 5 74 502 487 411 72 157 6 277 222 413 486 512 317 375 458 444 58 519 209 360 344 240 33 348 168 75 496 476 160 335 14 162 39 130 332 437 51 346 331 312 23 87 429 313 236 50 372 273 320 330 298 271 119 63 425 45 356 452 97 174 68 297 423"
	"62 366 487 327 428 43 269 30 482 7 161 277 198 136 207 380 430 483 205 282 315 370 375 141 218 386 463 268 216 477 351 48 493 221 445 507 223 189 93 408 89 436 457 379 82 66 215 91 498 230 100 170 316 104 303 433 265 83 291 503 235 99 35 469 481 212 295 23 283 209 515 177 171 447 460 278 368 168 312 133 378 259 514 317 450 110 335 373 147 225 426 385 330 257 128 310 8 222 462 18 13 348 236 466 495 369 406 304 152 242 272 509 518 124 176 79 510 453 195 58 407 145 320 359 372 252 377 243 185 459 363 137 233 102 92 228 64 45 280 313 444 266 213 439 204 422 42 358 116 285 448 156 461 427 490 496 347 214 302 231 2 44 71 142 247 301 46 289 178 494 384 121 21 421 485 394 307 211 36 452 131 183 391 274 157 111 471 275 81 513 206 3 392 361 84 388 519 192 293 284 288 425 329 158 273 420 240 87 262 29 181 191 11 305 396 97 167 502 497 127 122 219 72 210 229 135 217 203 12 491 258 88 1 511 96 200 441 220 144 484 173 86 339 149 154 232 76 505 138 134 374 53 360 456 54 343 27 418 387 281 65 245 446 226 125 17 114 39 61 405 479 382 365 187 442 130 32 85 103 311 73 499 432 146 150 465 294 423 165 299 107 175 474 454 69 472 197 95 57 237 371 196 287 393 332 112 290 270 148 139 105 449 179 504 501 321 338 253 390 322 404 98 120 117 517 159 286 67 60 512 153 31 419 260 271 184 38 362 164 182 90 416 415 413 254 118 328 417 297 333 468 431 52 14 160 193 340 403 342 412 180 188 109 115 296 300 292 166 402 473 74 199 478 202 68 306 354 326 77 367 489 163 376 108 353 19 59 255 429 22 395 364 249 470 113 20 500 397 4 172 336 208 467 355 234 411 143 508 33 443 331 325 55 51 261 201 132 80 346 174 279 410 16 488 70 400 248 241 94 389 251 464 480 40 318 264 350 324 169 349 356 476 250 458 186 314 455 414 37 341 26 49 263 75 50 5 28 424 15 492 56 47 337 344 162 123 434 129 25 475 151 357 24 409 451 298 435 323 78 224 101 256 345 319 383 126 244 119 10 399 239 267 440 34 334 276 63 9 140 438"
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
else
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
fi

read -n 1 -s -p "
Press any key to continue TEST 5 NUMBERS ?(y/n)" var
if [ "$var" = "n" ]; then
	rm tmp
else
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
fi

read -n 1 -s -p "
Press any key to continue TEST 6 NUMBERS ?(y/n)" var
if [ "$var" = "n" ]; then
	rm tmp
else
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
fi

read -n 1 -s -p "
Press any key to continue TEST 100 NUMBERS ?(y/n)" var
if [ "$var" = "n" ]; then
	rm tmp
else
	printf "===================================\n"

	# 100 NUMBERS
	for (( i=0; i < ${#testing100[@]}; i++ )); 
	do 
	printf "\n#-----------------#\n#test %d => ${testing100[i]}: " $i
	./push_swap ${testing100[i]} > tmp
	test_pushswap=$(cat tmp | ./checker ${testing100[i]})
	if [ "$test_pushswap" = "OK" ] ; then
		printf "${GREEN}${test_pushswap}${NOCOLOR}"
		nb_instructions=$(wc -l < tmp)
		if (( "$nb_instructions" < 350 )) ; then
			echo "${GREEN}${nb_instructions}${NOCOLOR}"
		elif (( "$nb_instructions" < 700 )) ; then
			echo "${ORANGE}${nb_instructions}${NOCOLOR}"
		else
			echo "${RED}${nb_instructions}${NOCOLOR}"
		fi
	elif [ "$test_pushswap" = "KO" ] ; then
		echo "${RED}${test_pushswap}${NOCOLOR}"
	fi
	# cat tmp | tr '\n' ' ' | cat
	done
fi

read -n 1 -s -p "
Press any key to continue TEST 500 NUMBERS ?(y/n)" var
if [ "$var" = "n" ]; then
	rm tmp
	exit
fi
printf "===================================\n"

# 500 NUMBERS
for (( i=0; i < ${#testing500[@]}; i++ )); 
do 
printf "\n#-----------------#\n#test %d => ${testing500[i]}: " $i
./push_swap ${testing500[i]} > tmp
test_pushswap=$(cat tmp | ./checker ${testing500[i]})
if [ "$test_pushswap" = "OK" ] ; then
	printf "${GREEN}${test_pushswap}${NOCOLOR}"
	nb_instructions=$(wc -l < tmp)
	if (( "$nb_instructions" < 5000 )) ; then
		echo "${GREEN}${nb_instructions}${NOCOLOR}"
	elif (( "$nb_instructions" < 5300 )) ; then
		echo "${ORANGE}${nb_instructions}${NOCOLOR}"
	else
		echo "${RED}${nb_instructions}${NOCOLOR}"
	fi
elif [ "$test_pushswap" = "KO" ] ; then
	echo "${RED}${test_pushswap}${NOCOLOR}"
fi
# cat tmp | tr '\n' ' ' | cat
done

rm tmp