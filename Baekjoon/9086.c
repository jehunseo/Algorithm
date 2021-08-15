#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	char text[1010];
	int T;
	scanf("%d", &T);
	
	for(int i = 0 ; i < T ; i++){
		scanf("%s", text);
		printf("%c%c\n", text[0], text[strlen(text)-1]);
	}
	return 0;
}
