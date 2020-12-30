//link : https://www.acmicpc.net/problem/1110
#include <stdio.h>

int main(void)
{
	unsigned char sum, temp, cnt;
	unsigned int N;

	temp = 0;
	sum = 0;
	cnt = 0;

	scanf("%d", &N);

	temp = N;
	while (1)
	{
		cnt++;

		sum = (temp / 10) + (temp % 10);
		temp = sum % 10 + (temp % 10) * 10;

		if (N == temp) break;
	}

	printf("%d", cnt);


	return 0;
}
