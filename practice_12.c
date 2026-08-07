/* Write a function to find square root of a number */

#include <stdio.h>
#include <math.h>

float square_root( float n );

int main() {

    float n;
    printf("ENTER THE number : ");
    scanf("%f", &n);

    float final_result;
    final_result= square_root( n );
    printf(" the square root of %f is : %f \n" , n ,  final_result);

    return 0;
}

float square_root( float n ){
    float result;
    result = pow ( n , 0.5 );

    return result;
}