//link : https://www.acmicpc.net/problem/2562
#include <stdio.h>
int main(void){
    int max = 0;
    int num = 0;
    int arr[9];
    int i=0;
    for(i=0; i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i =0;i<10;i++)
    {
        if(arr[i] > max) max = arr[i];   
    }
    for(i =0;i<10;i++)
    {
        if(arr[i] == max) break;   
    }
    
    printf("%d\n%d", max, i+1);
}
