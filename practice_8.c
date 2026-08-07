/* Write a program to check if a number is prime or not */

#include <stdio.h>

int main() {

    int a;
    printf("ENTER THE number : ");
    scanf("%d", &a);

    int prime;

    if( a <= 1){
        prime = 0;
    }

    else {
        for ( int i = 2 ; i * i <= a ; i++){
            if ( a % i == 0){
                prime = 0;
                break;
            }
        }
    }

    if (prime) {
        printf("%d is a prime number\n", a);
    } 
    
    else {
        printf("%d is not a prime number\n", a);
    }

    return 0;
}