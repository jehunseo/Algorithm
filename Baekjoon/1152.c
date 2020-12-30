//link : https://www.acmicpc.net/problem/1152
#include <stdio.h>

int main(void) {
	// your code goes here
	char str[1000000];
	int cnt=0, i=0;
	
	gets(str);
	
	while(str[i] != '\0'){
		if(str[i] == ' ') {cnt++;}
		i++;
	}
	if(str[0] == ' '){ cnt--;}
	if(str[i-1] ==' '){ cnt--;}
	
	cnt++;
	
	
	printf("%d", cnt);
	
	return 0;
}
