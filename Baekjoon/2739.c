//link : https://www.acmicpc.net/problem/2739
#include <stdio.h>

int main(void)
{

    int num, i;
    
    scanf("%d", &num);
    
    for(i=1;i<=9;i++)
    {
        printf("%d * %d = %d\n", num, i, (num*i));
    }
    return 0;
}
