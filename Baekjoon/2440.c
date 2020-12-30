//link : https://www.acmicpc.net/problem/2440
#include <stdio.h>

int main(void) {
	int num, a, b;

	scanf("%d", &num);

	for (a = num; a>0; a--) {
		for (b = a; b>0; b--) {
			printf("*");
		}
		num--;
		printf("\n");
	}
	return 0;
}
