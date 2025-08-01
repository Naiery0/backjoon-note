#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   20
*
* out
*   long long long long long int
*
*/

int main() {

    long long n;
    scanf("%lld", &n);

    for (int i = 1; i <= n / 4; i++)
        printf("long ");

    printf("int");

    return 0;
}