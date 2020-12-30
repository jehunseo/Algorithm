#link : https://www.acmicpc.net/problem/3052
a = [int(input()) for i in range(10)]
b = []
for i in list(range(10)):
	a[i] = a[i]%42


a = set(a)
print(len(a))
