#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
* EOF에 대해서 알아보라는 문제
* 입력이 끝날 때까지 A+B 출력
* out
*
*
*/

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
       printf("%d\n", a + b);
    }
//  while (scanf("%d %d", &a, &b) == 2) {
//       printf("%d\n", a + b);
//    }

    return 0;
}
