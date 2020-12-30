#link : https://www.acmicpc.net/problem/10804
arr = [i + 1 for i in list(range(20))]

for iter in range(10):
	a = [int(i) for i in input().split(' ')]
	arr[a[0]-1:a[1]] = reversed(arr[a[0]-1:a[1]])
for a in arr:
	print(a, end = ' ')
