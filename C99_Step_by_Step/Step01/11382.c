#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
* ù ��° �ٿ� A, B, C (1 �� A, B, C �� 10^12)�� ������ ���̿� �ΰ� �־�����.
*
* out
* A+B+C�� ���� ����Ѵ�.
*
*/

int main() {
    long long A, B, C;
    scanf("%lld %lld %lld", &A, &B, &C);
    printf("%lld", A + B + C);
    return 0;
}