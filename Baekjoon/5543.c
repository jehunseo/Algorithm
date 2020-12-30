//link : https://www.acmicpc.net/problem/5543
#include <stdio.h>

int main(void){
	int arr[5];
	
	for(int i = 0; i < 5 ; i++){
		scanf("%d", &(arr[i]) );
	}
	
	int A[6];
	int min;
	
	min = A[0] = arr[0] + arr[3];
	A[1] = arr[0] + arr[4];
	A[2] = arr[1] + arr[3];
	A[3] = arr[1] + arr[4];
	A[4] = arr[2] + arr[3];
	A[5] = arr[2] + arr[4];
	
	for(int i = 1; i < 6 ; i++){
		if (A[i] < min) min = A[i];
	}
	
	min = min -  50;
	
	printf("%d", min );
	
	
	return 0;
}
