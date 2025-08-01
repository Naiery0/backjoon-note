#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   Sprout
    3   
*
* out
*   r
*
*/

int main() {
    char st[1000];
    int x;

    scanf("%s%d", st, &x);
    printf("%c", st[x - 1]);

    return 0;
}