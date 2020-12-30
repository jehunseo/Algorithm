//link : https://www.acmicpc.net/problem/2884
#include <stdio.h>

int main(void){
    char H, M;
    scanf("%d %d", &H, &M);
    
    M = M - 45;
    
    if (M < 0){
        M = M + 60;
        H--;
    }
    if (H < 0){
        H = H + 24;
    }
    
    printf("%d %d", H, M);
    return 0;
}
