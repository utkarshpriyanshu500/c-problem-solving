/* Write a program to print the highest frequency character in a string */

#include <stdio.h>

int main() {
    
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char ch = str[0];

    int max_frequency = 0;

    for (int i = 0; str[i] != '\0'; i++){

        if (str[i] == '\n' || str[i] == ' '){
            continue;
        }

        int count = 0;

        for (int j = 0; str[j] != '\0'; j++){
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count > max_frequency){
            max_frequency = count;
            ch = str[i];
        }
    }

    printf("The highest frequency character is '%c'\t appears %d times \n", ch , max_frequency);

  return 0;
}