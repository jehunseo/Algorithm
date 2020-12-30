//link : https://www.acmicpc.net/problem/11720
#include <stdio.h>

int main(void) {
	char arr[100 + 10];
	int num, sum, i;

	sum = 0;

	scanf("%d", &num);

	getchar();

	gets(arr);
	
	for (i = 0; i<num; i++) {
		sum += arr[i] - '0';
	}
	printf("%d", sum);
}
