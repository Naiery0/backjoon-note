#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* ����
* 4�� ����̸鼭, 100�� ����� �ƴ� �� �Ǵ� 400�� ����� ��
* 
* in
* 2000
*
* out
* ù° �ٿ� �����̸� 1, �ƴϸ� 0
*
*/

int main() {
    int year;
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("1");
    else printf("0");

    return 0;
}
