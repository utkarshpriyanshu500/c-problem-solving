/* Write a function to print "Hot" or "Cold" depending on the temperature user enters */

#include <stdio.h>

void temperature( int temp );

int main() {

    int temp;
    printf("ENTER THE temperature in degree celsius : ");
    scanf("%d", &temp);
    
    temperature(temp);

    return 0;
}

void temperature( int temp ){

    if( temp >= 15 && temp <= 50 ){
        printf(" HOT!!!!!!!!!!!\n");
    }

    else if ( temp >= -50 && temp < 15 ){
        printf(" COLD!!!!!!!!\n");
    }

    else{
        printf(" invalid temperature input \n");
    }
}