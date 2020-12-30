//link : https://www.acmicpc.net/problem/10818
#include <stdio.h>
int main(void){
    int min = 1000000;
    int max = -1000000;
    int N = 0;
    int num;
    
    scanf("%d", &N);
    for(int i =0;i<N;i++)
    {
        scanf("%d", &num);
        if(num < min) min = num;
        if(num > max) max = num;   
    }
    
    printf("%d %d", min, max);
}
