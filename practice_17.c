/* Write a program to print the largest number in an array */

#include <stdio.h>

int main() {
    
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int largest_number = numbers[0];

    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest_number ) {
            largest_number = numbers[i];
        }
    }

    printf("The largest number in the array is : %d\n", largest_number);

    return 0;
}