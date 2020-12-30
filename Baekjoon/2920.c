//link : https://www.acmicpc.net/problem/2920
#include <stdio.h>

int main(void) {
	// your code goes here
	int i, chk, ref;
	int arr[8];
	for(i=0;i<8;i++) scanf("%d", &arr[i]);
	
	ref = arr[1] - arr[0];
	for(i=1;i<7;i++)
	{
		chk=arr[i+1] - arr[i];
		if(ref != chk)
		{
			printf("mixed");
			return 0;
		}
	}
	
	if( ref > 0 ) printf("ascending");
	if( ref < 0 ) printf("descending");
	return 0;
}
