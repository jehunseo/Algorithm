//link : https://www.acmicpc.net/problem/4344
#include <stdio.h>

int main(void)
{
	unsigned int C_1, C_2, N[1000 + 10], i, j, sum, cnt;

	scanf("%d", &C_1);

	for (i = 0; i < C_1; i++)
	{
		sum = 0; cnt = 0;

		scanf("%d", &C_2);
		
		for (j = 0; j < C_2; j++)
		{
			scanf("%d", &N[j]);
			sum += N[j];
		}

		for (j = 0; j < C_2; j++)
		{
			if (N[j] > (float)sum / (float)C_2) cnt++;
		}

		printf("%.3f%%\n", (float)cnt / (float)C_2 * 100);
	}

	return 0;
}
