//link : https://www.acmicpc.net/problem/9498
#include <stdio.h>

int main(void){
    int grade;
    
    scanf("%d", &grade);
    
    if(grade<60){
        printf("F");
    }
    else if(grade<70){
        printf("D");
    }
    else if(grade<80){
        printf("C");
    }
    else if(grade<90){
        printf("B");
    }
    else{
        printf("A");
    }
    
    return 0;
}
