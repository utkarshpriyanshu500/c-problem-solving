/* Write a program to remove blank spaces in a string */

#include <stdio.h>

int main() {
    
    char str[1000];

    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            str[count] = str[i]; 
            count++;             
        }
    }

    str[count] = '\0';

    printf("%s\n", str);
     
    return 0;
}