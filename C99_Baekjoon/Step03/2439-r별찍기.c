#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   5
*
* out
*   *
    **
    ***
    ****
    *****
*
*/

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = n-1; j > i; j--) 
            printf(" ");

        for (int k = 0; k <= i; k++)
            printf("*");

        printf("\n");
    }
    return 0;
}