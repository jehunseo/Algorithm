#link : https://www.acmicpc.net/problem/2752
arr = [int(i) for i in input().split(' ')]
arr.sort()

for i in arr:
	print(i, end = ' ')
