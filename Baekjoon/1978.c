//link : https://www.acmicpc.net/problem/1978
#include <stdio.h>
int main(void){
    int a, cnt = 0;
    int arr[110];
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<a;i++){
        if( arr[i] == 1 ) continue;
        if( arr[i] == 2 || arr[i] == 3){
            cnt++;
            continue;
        }
        for(int j=2;j<arr[i] / 2 + 1;j++){
            if(arr[i] % j == 0) break;
            else if ( (j) == (arr[i] / 2) ) cnt++;
        }
    }
    
    printf("%d", cnt);
    return 0;
}
