#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
*   같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
    같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
    모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
* in
* 3 3 6
*
* out
* 1300
*
*/
int MaxFunc(int A, int B, int C) {
    int array[3] = { A, B, C };
    int max = 0;

    for (int i = 0; i < 3; i++) {
        if (max < array[i]) max = array[i];
    }

    return max;
}

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A == B && A == C) // 셋 다 같을 때
        printf("%d", 10000 + A * 1000);
    else if (A == B || A == C) // 두 개 같을 때
        printf("%d", 1000 + A * 100);
    else if (B == C) // 두 개 같을 때
        printf("%d", 1000 + B * 100);
    else // 다 다를 때
    {
        int max = MaxFunc(A, B, C);
        printf("%d", max * 100);
    }

    return 0;
}
