//link : https://www.acmicpc.net/problem/2490
#include <stdio.h>

int main(void)
{
	int up=0, down=0;
	int a = 0;
	
	for(int i=0; i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d", &a);
			if(a ==0) down++;
			else up++;
		}
		
		switch(down){
			case 0:
			printf("E");
			break;
			case 1:
			printf("A");
			break;
			case 2:
			printf("B");
			break;
			case 3:
			printf("C");
			break;
			case 4:
			printf("D");
			break;
			default:
			break;
		}
		printf("\n");
		up = down = 0;
	}
	
	return 0;
}
