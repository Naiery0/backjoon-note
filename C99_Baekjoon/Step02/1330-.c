#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   A B
*
* out
*   A�� B���� ū ��쿡�� '>'�� ����Ѵ�.
    A�� B���� ���� ��쿡�� '<'�� ����Ѵ�.
    A�� B�� ���� ��쿡�� '=='�� ����Ѵ�.
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