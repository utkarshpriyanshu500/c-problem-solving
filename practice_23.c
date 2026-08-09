/* Write a program to read a string from a file & output to the user */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE *ptr;
    ptr = fopen("info.txt", "r");

    if (ptr == NULL) {
        printf("can't open file\n");
        return 1; 
    }

    char temp[1000];

    while (fgets(temp, sizeof(temp), ptr) != NULL) {
        printf("%s", temp);
    }

    fclose(ptr);    

    return 0;
}