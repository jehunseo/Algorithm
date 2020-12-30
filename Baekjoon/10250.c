//link : https://www.acmicpc.net/problem/10250
#include <stdio.h>

int main(void) {
	int T=0;
	int a, b;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
		int H, W, N;
		scanf("%d %d %d", &H, &W, &N);
		a = ((N-1) % H) + 1;
		b = ((int) (N-1) / H) + 1;
		printf("%d%02d\n", a, b);
	}
	return 0;
}
