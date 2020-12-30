#link : https://www.acmicpc.net/problem/10093
a = [int(i) for i in input().split()]
a.sort()
if a[0] == a[1] : print(0)
else : print(abs(a[0] - a[1]) - 1)
for iter in range(a[0]+1, a[1]):
    print(iter, end = ' ')
