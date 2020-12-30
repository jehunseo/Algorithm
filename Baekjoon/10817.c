//link : https://www.acmicpc.net/problem/10817
#include <stdio.h>

int main(void){
    int numA, numB, numC;
    
    scanf("%d %d %d", &numA, &numB, &numC);
    
    if(numA > numB){
        if(numC > numA){
           printf("%d", numA);
        }
        else{
            if(numB>numC){
                printf("%d", numB);
            }
            else{
                printf("%d", numC);
            }
        }
    }
    else{
        if(numC > numB){
           printf("%d", numB);
        }
        else{
            if(numA>numC){
                printf("%d", numA);
            }
            else{
                printf("%d", numC);
            }
        }
    }
    return 0;
}
