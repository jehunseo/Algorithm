//link : https://www.acmicpc.net/problem/10039
#include <stdio.h>

int main(void) {
	// your code goes here
int a[5];
int sum=0, avg=0;
for(int i=0;i<5;i++){
scanf("%d", &a[i]);
if(a[i]<40) a[i]=40;
sum+=a[i];
}

printf("%d", sum/5);

}
