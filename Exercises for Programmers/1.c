#include <stdio.h>
 
int main(void) {
	// your code goes here
	char name[100];
	printf("What is your name? ");
	scanf("%s", name);
	printf("Hello %s, Nice to meet you!", name);
	return 0;
}
