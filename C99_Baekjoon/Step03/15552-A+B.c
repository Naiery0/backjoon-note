#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   ù �ٿ� �׽�Ʈ���̽��� ����
    ���� �ٿ��� �� ���� A�� B�� �־�����.
*   5
    1 1
    12 34
    5 500
    40 60
    1000 1000
* out
*   A+B�� �� �ٿ� �ϳ���
*   2
    46
    505
    100
    2000
*/

int main() {
    int T;
    scanf("%d", &T);
    int sum[T];
    int A, B;
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &A, &B);
        sum[i] = A + B;
    }
    for (int i = 0; i < T; i++) printf("%d\n", sum[i]);

    return 0;
}