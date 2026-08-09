/* Allocate memory for n integers using calloc & then store first n natural numbers in that space */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);

    int *ptr;

    ptr = (int *) calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf(" error \n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    ptr = NULL;
    
    return 0;
}