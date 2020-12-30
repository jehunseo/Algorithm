//link : https://www.acmicpc.net/problem/2439
#include <stdio.h>

int main(void){
    int num, star, blank, i, j, k;
    
    scanf("%d", &num);
    blank = num;
    star = 0;
    for(i=0;i<num;i++){
        blank--;
        star++;
        for(j=0;j<blank;j++){
            printf(" ");
        }
        for(k=0;k<star;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
