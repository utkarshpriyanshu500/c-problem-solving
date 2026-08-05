/* Write a program to print the average of 3 numbers. */

#include <stdio.h>

int average( int a , int b , int c);

int main() {

    int a;
    printf("ENTER THE 1ST NO: ");
    scanf("%d", &a);

    int b;
    printf("ENTER THE 2ND  NO: ");
    scanf("%d", &b);

    int c;
    printf("ENTER THE 3RD NO: ");
    scanf("%d", &c);

    int final_avg;
    final_avg = average( a , b , c);

    printf(" THE AVERAGE OF %d , %d  and %d is : %d \n" , a , b , c , final_avg );

    return 0;
}

int average( int a , int b , int c){

    int avg;
    avg = ( a + b + c) / 3;

    return avg;
}