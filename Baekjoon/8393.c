//link : https://www.acmicpc.net/problem/8393
#include <stdio.h>
int main(void){
    int num, total, i;
    scanf("%d", &num);
    total = 0;
    for(i=1;i<=num;i++){
        total+=i;
    }
    printf("%d", total);
    
    return 0;
}
