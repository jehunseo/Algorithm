//link : https://www.acmicpc.net/problem/2588
#include <stdio.h>
int main(void)
{
	int A, B;
	int sub1, sub10, sub100;
	scanf("%d", &A);
	scanf("%d", &B);
	
	sub1 = A * (B%10);
	sub10 = A * ((B/10)%10);
	sub100 = A * (B/100);
	
	printf("%d\n%d\n%d\n%d", sub1, sub10, sub100, A*B);
	return 0;
	
}
