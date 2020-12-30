//link : https://www.acmicpc.net/problem/10809
#include <stdio.h>

int main(void) {
	// your code goes here
int arr[26];
char str[100];

for(int i=0;i<26;i++) arr[i]= -1;

scanf("%s", str);

for(int i=0;i<100;i++) {
char a = str[i];

if(str[i] == 0) break;
if(arr[a-97]==-1) arr[a-97] = i;
}

for(int i=0;i<26;i++) printf("%d ", arr[i]);

return 0;
}
