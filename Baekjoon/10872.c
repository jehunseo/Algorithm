//link : https://www.acmicpc.net/problem/10872
#include <stdio.h>

int fact(int n)
{
    if(n<=1) return 1;
    return n*fact(n-1);
}

int main(void)
{
    int n=0;
    
    scanf("%d", &n);
    
    printf("%d", fact(n));
    
    return 0;
}
