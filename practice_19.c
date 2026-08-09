/* Write a program to convert all lowercase vowels to uppercase in a string */

#include <stdio.h>

int main() {
    
    char str[100];

    printf("Enter a string in lowercase : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i] = str[i] - 32;                // Convert to uppercase by subtracting 32 from its ASCII value
        }
    }

    printf(" -> %s", str);

    return 0;
}