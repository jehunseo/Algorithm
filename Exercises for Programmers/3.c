#include <stdio.h>

int main(void){
    char who[1000], what[1000];
    printf("What is the quote? "); scanf("%s", what);
    printf("Who said it? "); scanf("%s", who);
    printf("%s says, \"%s\".", who, what);
}
