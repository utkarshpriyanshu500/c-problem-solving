/* print this pattern using nested loop  *****
                                         *****
                                         *****
                                         *****
*/

#include <stdio.h>

int main() {

    int x;

    printf("ENTER THE x: ");
    scanf("%d", &x);

    for (int i =0 ; i < x ; i++){

        for ( int n = 0 ; n < x ; n++){
            printf("* ");
        }
       printf("\n");
    }

    return 0;
}