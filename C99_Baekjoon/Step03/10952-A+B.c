#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   1 1
    2 3
    3 4
    9 8
    5 2
    0 0 <-- 마지막 입력
* out
    2
    5
    7
    17
    7
*/

int main() {
    int a = 1, b = 1;
    while (1) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) return 0;
        printf("%d\n", a + b);
    }
    return 0;
}