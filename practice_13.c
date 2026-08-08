/* Write a program in C to find the maximum number between two numbers using a pointer. */

#include <stdio.h>

int main() {

    int num_1;
    printf("Enter first number: ");
    scanf("%d", &num_1);

    int  num_2;
    printf("Enter first number: ");
    scanf("%d", &num_2);

    int *ptr_1 , *ptr_2;

    ptr_1 = &num_1;
    ptr_2 = &num_2;

    if( *ptr_1 > *ptr_2){
        printf("The maximum number is : %d\n", *ptr_1);
    }

    else if (*ptr_2 > *ptr_1) {
        printf("The maximum number is : %d\n", *ptr_2);
    } 
    
    else {
        printf("both nummbers are equal \n");
    }
    
    return 0;
}