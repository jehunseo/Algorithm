//link : https://www.acmicpc.net/problem/2442
#include <stdio.h>

int main(void){
	int a=0;
	scanf("%d", &a);
	
	for(int i = 0;i<a;i++){
		for(int j = a - i - 1 ; j>0; j--) printf(" ");
		for(int j = 0;j<i * 2 + 1;j++) printf("*");
		printf("\n");
	}
	return 0;
}
