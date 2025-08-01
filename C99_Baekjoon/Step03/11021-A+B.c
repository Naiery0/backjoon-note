#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   5
    1 1
    2 3
    3 4
    9 8
    5 2
*
* out
*   Case #1: 2
    Case #2: 5
    Case #3: 7
    Case #4: 17
    Case #5: 7
*
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
    for (int i = 0; i < T; i++) printf("Case #%d: %d\n", i + 1, sum[i]);

    return 0;
}