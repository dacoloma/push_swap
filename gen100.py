import random

false = 0
true = 1
def generator(min, max, n):
	arr = random.sample(range(min, max), n)
	return arr
def check(arr):
	sort_arr = sorted(arr)
	for i in range(len(arr) - 1):
		if sort_arr[i] == sort_arr[i + 1]:
			return false
	return true

arr = generator(1, 520, 42)
ck = check(arr)
if (ck == false):
	print("ERROR")
else:
	for i in arr:
		print(i, end=' ')
