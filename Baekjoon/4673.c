//link : https://www.acmicpc.net/problem/4673
#include <stdio.h>
#define min (10000)

int table[min];

void d(n)
{
	int num;
	num = n;
	for (int i = 0; i < 4; i++)
	{
		n += num % 10;
		num /= 10; 
		if (num == 0) break;
	}
	num = n;

	if (num > min) return;
	if (table[num - 1] == 1) return;

	table[num - 1] = 1;

	d(num);
}

int main(void)
{
	for (int i = 0; i < min; i++)
	{
		d(i + 1);
	}

	for (int i = 0; i < min; i++)
	{
		if (table[i] == 0) printf("%d\n", i + 1);
	}

	return 0;
}
