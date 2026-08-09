/* Write a program to insert an element at the end of an array */

#include <stdio.h>

int main() {

    int n;
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int new_element;
    printf("Enter the element to insert at the end : ");
    scanf("%d", &new_element);

    if (arr[n] = new_element){
        n++;
    }
    
    printf("Array after adding elements at the back is :\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}