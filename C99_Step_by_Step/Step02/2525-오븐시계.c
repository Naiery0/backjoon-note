#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
* ù° �ٿ��� ���� �ð�
* �� ��° �ٿ��� �丮�ϴ� �� �ʿ��� �ð�
* out
* ����Ǵ� �ð�
*
*/

int main() {
    int h, m, cook, mh, mm;

    scanf("%d %d%d", &h, &m, &cook);

    
    mh = cook / 60;
    mm = cook % 60;

    m += mm;
    if (m >= 60) {
        mh++;
        m -= 60;
    }
    
    h += mh;
    if (h >= 24) h -= 24;

    printf("%d %d", h, m);

    return 0;
}
