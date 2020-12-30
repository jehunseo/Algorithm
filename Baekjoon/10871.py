#link : https://www.acmicpc.net/problem/10871
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]

for b_ in b:
	if b_ < a[1] : print(b_, end = ' ') 
