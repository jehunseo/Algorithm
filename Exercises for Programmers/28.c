#include <stdio.h>
 
int main(void) {
	// your code goes here
	int sum=0, in;
 
	for(int i = 0 ; i < 5 ; i++){
		printf("Enter a number: ");
        scanf("%d", &in);

		sum += in;
	}
	printf("The total is %d.\n", sum);
	return 0;
}
