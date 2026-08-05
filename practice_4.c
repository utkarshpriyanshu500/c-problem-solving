/* Write a program to check if given character is digit or not. */

#include <stdio.h>

int main() {

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    int count = 0;

    for( int i = '0' ; i <= '9' ; i++ ){       
        if (ch == i){
            count = 1;
            break;
        }   
    }

    /*  
    -> here count is used to detect the digit 
    -> if a no is inputed then count"s value gets incresed by 1 
    -> then if else checks the count 
    -> if count is +1 that means digit is present and if returns digit is present  
    -> if count is 0 that means digit is absent and else returns digit is absent  
    */

   if ( count ){
        printf("%c is a digit \n", ch);
    } 
    
    else{
        printf("%c is NOT a digit \n", ch);
    } 

    return 0;
}