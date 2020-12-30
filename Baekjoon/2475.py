#link : https://www.acmicpc.net/problem/2475
arr = [int(i)**2 for i in input().split()]
print(sum(arr) % 10)
