#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
* EOF�� ���ؼ� �˾ƺ���� ����
* �Է��� ���� ������ A+B ���
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
