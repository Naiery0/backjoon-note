#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   정수 N개로 이루어진 수열 A와 정수 X가 주어진다
*   첫째 줄에 N과 X가 주어진다
*   둘째 줄에 수열 A를 이루는 정수 N개
*   10 5
    1 10 4 9 2 3 8 5 7 6
* out
*   X보다 작은 수를 입력받은 순서대로 공백으로 구분
*   1 4 2 3
*/

int main() {
    int N, X;
    scanf("%d %d", &N, &X);
    int A[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d ", &A[i]);
    }
    for (int i = 0; i < N; i++) {
        if (X > A[i]) {
            printf("%d ", A[i]);
        }
    }

    return 0;
}