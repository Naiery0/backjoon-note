#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 
*/


int main() {

    int x, y;

    scanf("%d%d", &x, &y);
    printf("%d\n", x + y);
    printf("%d\n", x - y);
    printf("%d\n", x * y);
    printf("%d\n", x / y);
    printf("%d\n", x % y);

    return 0;
}