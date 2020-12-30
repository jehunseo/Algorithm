//link : https://www.acmicpc.net/problem/14681
#include <stdio.h>

int main(void){
   short X, Y;
    
   scanf("%d", &X);
   scanf("%d", &Y);
    
   if(X>0){
       if(Y>0)    printf("1");
       else       printf("4");
   }
   else{
       if(Y>0)    printf("2");
       else       printf("3");
   }
   return 0; 
}
