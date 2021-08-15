#include <stdio.h>
#include <string.h>

int main(void){
    char text[100];
    printf("What is the input string? ");
    scanf("%s", text);
    printf("%s has %d characters", text, strlen(text));
    return 0;
}
