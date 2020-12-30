//link : https://www.acmicpc.net/problem/11718
#include <stdio.h>

int main(void) {
	char arr[100 + 10][100 + 10] = { 0 };
	int i,j, N;

	N = 0;

	for (N = 0;; N++) {
		gets(arr[N]);
		if (arr[N][0] == '\0') break;
	}
	
	for (i = 0; i < N; i++) {
		printf("%s\n", arr[i]);
	}
}
