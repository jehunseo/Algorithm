//link : https://www.acmicpc.net/problem/10814
#include <stdio.h>

int main(void) {
	int n=0;
	scanf("%d", &n);
	int age[110000];
	char name[110000][110];
	
	for(int i=0;i<n;i++){
		scanf("%d", &age[i]);
		scanf("%s", &name[i][0]);
	}
	int len = 0;
	for(int i=1;i<201;i++){
		for(int j=0;j<n;j++){
			if(age[j] == i)
			{
				printf("%d %s\n", age[j], name[j]);
				len++;
			}
			if(len == n) return 0;
		}
	}
	return 0;
}
