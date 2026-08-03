/*  Write a program to calculate perimeter of rectangle. Take sides, a & b, from the user. */

#include <stdio.h>

int main() {

    int a ;
    printf("ENTER THE length of rectangle : ");
    scanf("%d", &a);

    int b ;
    printf("ENTER THE breath of rectangle : ");
    scanf("%d", &b);

    int perimter; 
    perimter = 2 * ( a + b );

    printf(" THE PERIMETER OF RECTANGLE GIVEN OF LENGTH %d AND BREATH %d IS : %d \n", a , b , perimter );

    return 0;
}