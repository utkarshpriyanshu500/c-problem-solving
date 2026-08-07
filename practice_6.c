/* Write a program to check if the given number is a natural number */

#include <stdio.h>

int main() {

    int a;
    printf("ENTER THE NUMBER :  ");
    scanf("%d", &a);

    if (a > 0) {
        printf("%d is a natural number.\n", a);
    } 
    
    else {
        printf("%d is NOT a natural number.\n", a);
    }
    
    return 0;
}