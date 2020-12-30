//link : https://www.acmicpc.net/problem/1546
#include <stdio.h>

int main(void) {
	// your code goes here
	int n=0;
	int M=0;
	double sum, avg = 0;
	int score[1000];
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d", &score[i]);
		if(score[i] > M) M = score[i];
	}
	
	for(int i=0;i<n;i++)
	{
		sum += (double)score[i] / M * 100;
	}
	
	avg = sum / n;
	
	printf("%f", avg);
	
	return 0;
}
