//link : https://www.acmicpc.net/problem/10950
#include <stdio.h>
int main(void)
{
	int T=0;
	int A=0, B=0;
	scanf("%d", &T);
	for(int i=0;i<T;i++)
	{
		A=B=0;
		
		scanf("%d %d", &A, &B);
		
		printf("%d\n", A+B);
	}
    return 0;
}
