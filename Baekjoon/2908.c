//link : https://www.acmicpc.net/problem/2908
#include <stdio.h>

int main(void) {
	// your code goes here
int A, B;
int A_1, A_10, A_100, B_1, B_10, B_100;
scanf("%d %d", &A, &B);

A_1=A%10; A_10=(A/10)%10; A_100=A/100;
B_1=B%10; B_10=(B/10)%10; B_100=B/100;

A= A_1*100+A_10*10+A_100;
B= B_1*100+B_10*10+B_100;

if(A>B) printf("%d", A);
else printf("%d", B);
	return 0;
}
