//link : https://www.acmicpc.net/problem/1008
#include <stdio.h>

int main(void){
    int var1, var2;
    scanf("%d %d", &var1, &var2);
    
    printf("%.9f", (double)var1/var2);
    // error should be less than 10^-9, so use double variable and '%.9f' format
    
    return 0;
}
