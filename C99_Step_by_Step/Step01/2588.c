#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* ù° �ٿ� (1)�� ��ġ�� �� �� �ڸ� �ڿ�����, ��° �ٿ� (2)�� ��ġ�� �� ���ڸ� �ڿ���
* ù° �ٺ��� ��° �ٱ��� ���ʴ�� (3), (4), (5), (6)�� �� ���� ���
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