#link : https://www.acmicpc.net/problem/1085
arr = [int(i) for i in input().split()]
x = [arr[0], arr[2] - arr[0]]
y = [arr[1], arr[3] - arr[1]]
if(min(x) > min(y)) :print(min(y))
else : print(min(x))
