//link : https://www.acmicpc.net/problem/11721
#include <stdio.h>

int main(void)
{
	char arr[100 + 10];
	char i, j;

	gets(arr);

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (arr[10 * i + j] == '\0') goto end;
			printf("%c", arr[10 * i + j]);
		}
		printf("\n");
	}


end:

	return 0;
}
