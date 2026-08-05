/* Write a program to print the smallest number of two */

#include <stdio.h>

int main() {

    int a;
    printf("ENTER THE a: ");
    scanf("%d", &a);

    int b;
    printf("ENTER THE b: ");
    scanf("%d", &b);

    if( a < b ){
        printf( "%d is smaller is %d \n" , a  , b);
    }

    else if( b < a ){
        printf( "%d is smaller is %d \n" , b  , a);
    }

    else{
        printf(" invalid conditions");
    }

    return 0;
}