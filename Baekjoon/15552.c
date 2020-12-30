//link : https://www.acmicpc.net/problem/15552
#include <stdio.h>

int main(void) {
	// your code goes here
	int T=0, A=0, B=0;
	
	scanf("%d", &T);
	
	for(int i=0;i<T;i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A+B);
	}
	return 0;
}
