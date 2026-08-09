/* Write a program to replace lowercase letters with uppercase & vice versa in a string */

#include <stdio.h>

int main() {
     
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
      
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase by subtracting 32
        }
       
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert to lowercase by adding 32
        }
    }

    printf("-> %s", str);

    return 0;
}