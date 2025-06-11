#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 첫째 줄에 (1)의 위치에 들어갈 세 자리 자연수가, 둘째 줄에 (2)의 위치에 들어갈 세자리 자연수
* 첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력
*/

int main() {
    int x, y;

    scanf("%d%d", &x, &y);

    printf("%d\n", x * (y % 10));
    printf("%d\n", x * (y % 100 / 10));
    printf("%d\n", x * (y / 100));
    printf("%d\n", x * y);

    return 0;
}