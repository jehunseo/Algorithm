//link : https://www.acmicpc.net/problem/2441
#include <stdio.h>

int main(void){
    int num, blank, star, a, b, c;
    
    scanf("%d", &num);
    star = num;
    blank = 0;
    for(a=0;a<num;a++){
        for(c=0;c<blank;c++){
            printf(" ");
        }
        for(b=star;b>0;b--){
            printf("*");
        }
        
        printf("\n");
        
        star--;
        blank++;
    }
    return 0;
}
