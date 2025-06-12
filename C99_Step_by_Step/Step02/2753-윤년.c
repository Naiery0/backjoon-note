#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 윤년
* 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때
* 
* in
* 2000
*
* out
* 첫째 줄에 윤년이면 1, 아니면 0
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
