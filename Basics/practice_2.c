/* Take a number(n) from user & output its cube (n*n*n) */

#include <stdio.h>

int main() {

    int n;
    printf("ENTER THE n: ");
    scanf("%d", &n);

    int cube;
    cube = n * n * n;

    printf(" the cube of %d is : %d \n ", n , cube);
    
    return 0;
}