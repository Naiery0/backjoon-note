#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   A B
*
* out
*   A가 B보다 큰 경우에는 '>'를 출력한다.
    A가 B보다 작은 경우에는 '<'를 출력한다.
    A와 B가 같은 경우에는 '=='를 출력한다.
*
*/

int main() {
    int A, B;

    scanf("%d %d", &A, &B);
    if (A > B)
        printf(">");
    else if (A < B)
        printf("<");
    else if (A == B)
        printf("==");

    return 0;
}