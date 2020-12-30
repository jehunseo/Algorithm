#link : https://www.acmicpc.net/problem/9093
import sys
input = sys.stdin.readline

for i in range(int(input().strip())):
    a = input().strip().split(' ')
    for j in a:
        for k in range(len(j)-1, -1, -1):
            print(j[k], end = '')
        print(' ', end = '')
    print()
