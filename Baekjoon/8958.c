//link : https://www.acmicpc.net/problem/8958
#include <stdio.h>

int main(void) {
	// your code goes here
	int T=0,i,j, s,p;
	char arr[80];
	
	scanf("%d", &T);
	for(i=0;i<T;i++)
	{
		scanf("%s", arr);
		
		s=0;
		p=1;
		for(j=0;arr[j]!='\0';j++)
		{
			if(arr[j] == 'X') 
			{
				p=0;
			}
			s+=p;
			p++;
		}
		
		printf("%d\n", s);
	}
	return 0;
}
