//link : https://www.acmicpc.net/problem/2480
#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a==b)
    {
        if(b==c)
        {
            printf("%d", 10000 + a * 1000);
            return 0;
        }
        else
        {
        	printf("%d", 1000 + a * 100);
    	   return 0;
        }
    }
    else if(b == c)
    {
        if(a==b)
        {
            printf("%d", 10000 + b * 1000);
            return 0;
        }
        else 
        {
        	printf("%d", 1000 + b * 100);
        	return 0;
        }
    }
    else if(a == c)
    {
        if(a==b)
        {
            printf("%d", 10000 + a * 1000);
            return 0;
        }
        else 
        {
        	printf("%d", 1000 + a * 100);
        	return 0;
        }
    }
    else
    {
        if((a > b) && (a > c)) printf("%d", a * 100);
        else if (b > c) printf("%d", b * 100);
        else printf("%d", c * 100);
        
        return 0;
    }
}
