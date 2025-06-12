#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
* 첫째 줄에는 현재 시각
* 두 번째 줄에는 요리하는 데 필요한 시간
* out
* 종료되는 시간
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
