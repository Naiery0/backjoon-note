#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
1 3

0.33333333333333333333333333333333
*/

int main() {
    int x, y;

    scanf("%d%d", &x, &y);
    printf("%.9lf", (double)x / y);

    return 0;
}
