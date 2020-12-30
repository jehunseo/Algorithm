//link : https://www.acmicpc.net/problem/2839

#include <stdio.h>

int main(void) {
	int sugar, five_kg, three_kg, sol;

	scanf("%d", &sugar);
	
	five_kg = sugar / 5;
	sol = 2000;
	for (; five_kg >=0; five_kg--) {
		three_kg = (sugar - (5*five_kg)) / 3;
		if (sugar != ((five_kg * 5) + (three_kg * 3))) continue;
		else if (sol > five_kg + three_kg) sol = five_kg + three_kg;
	}

	if (sol == 2000) printf("-1");
	else printf("%d", sol);

	return 0;
}
