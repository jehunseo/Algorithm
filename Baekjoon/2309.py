#link : https://www.acmicpc.net/problem/2309
import sys

arr =[]
over = 0
for iter in range(9):
	arr.append(int(input()))
	
arr.sort()
over = sum(arr) - 100

for i in range(8):
	for j in range(1, 9):
		if i >= j : continue
		if (over == (arr[i] + arr[j])) :
			a_ = arr[i]
			b_ = arr[j]
			arr.remove(a_)
			arr.remove(b_)
			for a in arr:
				print(a)
			sys.exit()
