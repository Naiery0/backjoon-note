#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
* 첫 번째 줄에 A, B, C (1 ≤ A, B, C ≤ 10^12)이 공백을 사이에 두고 주어진다.
*
* out
* A+B+C의 값을 출력한다.
*
*/

int main() {
    long long A, B, C;
    scanf("%lld %lld %lld", &A, &B, &C);
    printf("%lld", A + B + C);
    return 0;
}