/* Write a program in C to print the elements of an array in reverse order */

#include <stdio.h>

int main() {

    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    
    int arr[n];

    for ( int i = 0 ; i < n ; i++){  
        scanf("%c" ,&arr[i]);
    }

    for ( int i = n ; i >= 0 ; i--){
        printf("%c",arr[i]);
    }
    
    printf("\n");
   
    return 0;
}