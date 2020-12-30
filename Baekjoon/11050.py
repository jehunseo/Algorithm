#link : https://www.acmicpc.net/problem/11050
def factorial(n):
    ans = 1
    for i in range(2, n+1):
        ans *= i
    return ans


def bino_coef_factorial(n, r):
    return factorial(n) // factorial(r) // factorial(n-r)

arr = [int(i) for i in input().split()]
print(bino_coef_factorial(arr[0], arr[1]))
