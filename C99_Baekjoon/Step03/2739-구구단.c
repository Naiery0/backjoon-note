#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   2
*
* out
*   2 * 1 = 2
    2 * 2 = 4
    2 * 3 = 6
    2 * 4 = 8
    2 * 5 = 10
    2 * 6 = 12
    2 * 7 = 14
    2 * 8 = 16
    2 * 9 = 18
*
*/

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 1; i < 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    

    return 0;
}