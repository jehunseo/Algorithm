//link : https://www.acmicpc.net/problem/1065
#include <stdio.h>
#define min (1000)

int main(void)
{
	int N, i, cnt;
	scanf("%d", &N);

	if (N < 100)
	{
		printf("%d", N);
		return 0;
	}

	for (i = 100, cnt = 99; i <= N; i++)
	{
		int cnt1, cnt2, cnt3;
		int temp;

		temp = i;
		
		cnt1 = temp % 10;
		temp /= 10;

		cnt2 = temp % 10;
		temp /= 10;

		cnt3 = temp % 10;

		if ((cnt1 - cnt2) == (cnt2 - cnt3)) cnt++;
	}
	
	if (N == 1000) cnt--;

	printf("%d", cnt);
	return 0;
}
