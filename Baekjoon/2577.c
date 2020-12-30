//link : https://www.acmicpc.net/problem/2577
#include <stdio.h>

int main(void) {
	// your code goes here
	int A, B, C, chk;
	int arr[10];
	
	for(int i=0;i<10;i++)
	{
		arr[i]=0;
	}
	scanf("%d %d %d", &A, &B, &C);
	
	chk = A * B * C;
	
	while(chk!=0)
	{
		int n=chk%10;
		arr[n]++;
		chk /= 10;
	}

	for(int i=0;i<10;i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
