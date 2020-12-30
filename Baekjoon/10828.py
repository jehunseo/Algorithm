#link : https://www.acmicpc.net/problem/10828
import sys
input = sys.stdin.readline

l = int(input().strip())
arr = []

for iter in range(l):
    a = input().strip().split(' ')
    if(a[0] == 'push'):
        arr.append(a[1])
        
    elif(a[0] == 'pop' or a[0] == 'top'):
        if(len(arr) == 0) :
            print('-1')
            continue
        print(arr[-1])
        if(a[0] == 'pop') : del arr[-1]
        
    elif(a[0] == 'empty'):
        print('1' if len(arr) == 0 else '0')
        
    else:
        print(len(arr))
