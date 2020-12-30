#link : https://www.acmicpc.net/problem/2587
arr =[]
for iter in range(5):
	arr.append(int(input()))
	
print(int(sum(arr) / len(arr)))
arr.sort()
print(arr[2])
