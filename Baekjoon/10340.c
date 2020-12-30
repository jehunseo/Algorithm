//link : https://www.acmicpc.net/problem/10430
#include <stdio.h>

int main(void){
    int var1, var2, var3;
    
    scanf("%d %d %d", &var1, &var2, &var3);
    
    printf("%d\n", (var1+var2)%var3);
    printf("%d\n", (var1%var3+var2%var3)%var3);
    printf("%d\n", (var1*var2)%var3);
    printf("%d\n", (var1%var3)*(var2%var3)%var3);
           
    return 0;
}
