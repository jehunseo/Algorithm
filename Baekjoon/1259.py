#link : https://www.acmicpc.net/problem/1259
while(1):
    flag = 0
    a = input()
    if(a == '0'): break
    i = len(a)
    for iter in range(i // 2):
        if a[iter] != a[i - iter - 1] :
            print('no')
            flag = 1
            break
    if(flag == 0): print('yes')
