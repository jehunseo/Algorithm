//link : https://www.acmicpc.net/problem/1712
#include<stdio.h>

int main(void){
    long a, b, c;
    int cnt = 0;
    int sum = 0;
    scanf("%ld %ld %ld", &a, &b, &c);
    
    if(b >= c) {
        printf("-1");
        return 0;
    }
    
    printf("%ld", a / (c-b) + 1);
}
