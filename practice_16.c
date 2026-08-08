/* In an array of numbers, find how many times does a number 'x' occurs */

#include <stdio.h>

int main() {

    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter the number to find (x) : ");
    scanf("%d", &x);

    int *ptr = arr;

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (*(ptr + i) == x) {
            count++;
        }
    }

    printf("The number %d occurs %d times in the array.\n", x, count);
    
    return 0;
}