#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
* ù° �ٿ� �׽�Ʈ ���̽��� ���� T
* �� �ٿ� A�� B��
*   5
    1 1
    2 3
    3 4
    9 8
    5 2
* out
*   2
    5
    7
    17
    7
*
*/
int main() {
    int T;
    int A, B;
    scanf("%d", &T);
    int result[T];

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &A, &B);
        result[i] = A + B;
    }
    for (int i = 0; i < T; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}