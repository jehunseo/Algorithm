#link : https://www.acmicpc.net/problem/2750
i = int(input())
arr = []
for iter in range(i):
    arr.append(int(input()))

arr.sort()

for a in arr:
    print(a)
