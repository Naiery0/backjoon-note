#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 원래 설정되어 있는 알람을 45분 앞서는 시간
* 24시간 표현을 사용
* 
* in
* 첫째 줄에 두 정수 H와 M
* 0 30
* out
* 23 45
*
*/

int main() {
    int h, m;

    scanf("%d %d", &h, &m);
    
    if (m < 45) { 
        m += 60; 
        h -= 1;
        if (h < 0) h = 23;
    }
    printf("%d %d", h, m - 45);

    return 0;
}