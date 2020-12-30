//link : https://www.acmicpc.net/problem/2753
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    if( ((!(n%4))&&(n%100)) || !(n%400)) 
    {
        printf("1"); 
    }
    else printf("0");
    
    return 0;
}
