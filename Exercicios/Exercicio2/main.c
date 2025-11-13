#include "Stack.h"
#include <stdio.h>
#include <string.h>


int main(){
    char input[1024];
    scanf("%s", input);
    printf("%s", input);

    printf("\n %s\n", Palindromo2(input) ? "s" : "n");
    return 0;
}