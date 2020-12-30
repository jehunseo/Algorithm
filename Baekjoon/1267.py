#link : https://www.acmicpc.net/problem/1267
N = int(input())
arr = [int(i) for i in input().split()]
 
y = 0
m = 0
for a in arr:
	y +=  a // 30 * 10 + 10
	m += a // 60 * 15 + 15
if y > m : print(f'M {m}')
elif m > y : print(f'Y {y}')
else : print(f'Y M {m}')
