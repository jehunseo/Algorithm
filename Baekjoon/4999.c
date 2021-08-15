#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	char me[1010], doctor[1010];
	
	scanf("%s", me);
	scanf("%s", doctor);
	if(strlen(me) < strlen(doctor)) printf("no");
	else printf("go");
}
