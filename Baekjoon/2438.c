//link : https://www.acmicpc.net/problem/2438
#include <stdio.h>

int main(void){
    int star, i, j;
    
    scanf("%d", &star);
    for(i=0;i<star;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
