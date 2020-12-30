#link : https://www.acmicpc.net/problem/2576
odd =[]

for iter in range(7):
    i =int(input()) 
    if( i % 2 == 1):
        odd.append(i)

if(len(odd) == 0):
    print('-1')
else:    
    print(sum(odd))
    print(min(odd))
