#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*  5
   1 1
   2 3
   3 4
   9 8
   5 2
* out
    Case #1: 1 + 1 = 2
    Case #2: 2 + 3 = 5
    Case #3: 3 + 4 = 7
    Case #4: 9 + 8 = 17
    Case #5: 5 + 2 = 7
*/

int main() {
    int T;
    scanf("%d", &T);
    int sum[T];
    int A[T];
    int B[T];
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &A[i], &B[i]);
        sum[i] = A[i] + B[i];
    }
    for (int i = 0; i < T; i++) 
        printf("Case #%d: %d + %d = %d\n", i + 1, A[i], B[i], sum[i]);

    return 0;
}