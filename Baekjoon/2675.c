//link : https://www.acmicpc.net/problem/2675
#include <stdio.h>

int main(void) {
	// your code goes here
int T, R, i, j, k, len;
char S[20];

scanf("%d", &T);

for(i=0;i<T;i++) {
	len = 0;
	scanf("%d %s", &R, &S);
		
	for(j=0;S[j]!=0;j++) len++;
	
	for(j=0;j<len;j++){
		for(k=0;k<R;k++){
			printf("%c", S[j]);
		}
	}
	printf("\n");
}


return 0;
}
