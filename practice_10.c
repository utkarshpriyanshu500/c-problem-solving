/* Write a function to find sum of digits of a number */

#include <stdio.h>

int sum_digits( int n );

int main() {

    int n;
    printf("ENTER THE number: ");
    scanf("%d", &n);

    int result = sum_digits(n);
    printf("The sum of digits of %d is %d\n", n, result);

    return 0;
}

int sum_digits( int n ){
    int i = n;
    int sum = 0;

    while (i > 0){
        int last_digit = i % 10;
        sum += last_digit;
        i = i / 10;
    }

    return sum;
}