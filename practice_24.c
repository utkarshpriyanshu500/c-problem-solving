/* Replace the data in file of Q(a) with the number of vowels in the string */

#include <stdio.h>

int main() {
   
    FILE *ptr;
    ptr = fopen("info.txt", "r");

    if (ptr == NULL) {
        printf("can't open file\n");
        return 1; 
    }

    char temp[1000];
    int vowels_count = 0;

    if (fgets(temp, sizeof(temp), ptr) != NULL){
    
        fclose(ptr);

        for (int i = 0; temp[i] != '\0'; i++){
            char ch = temp[i];
           
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                vowels_count++;
            }
        }

        ptr = fopen("info.txt", "w");

        if (ptr == NULL){
            printf("Can't open file for writing\n");
            return 1;
        }

        fprintf(ptr, "%d", vowels_count);

        fclose(ptr);

        printf("the vowel count is : %d\n", vowels_count);
    } 
    
    else{
        fclose(ptr);
        printf("The file was empty\n");
    }

    return 0;
}