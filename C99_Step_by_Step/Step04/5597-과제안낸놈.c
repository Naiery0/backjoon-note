#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   입력은 총 28줄로 각 제출자(학생)의 출석번호 n
*
* out
*   1번째 줄엔 제출하지 않은 학생의 출석번호 중 가장 작은 것을 출력하고, 
    2번째 줄에선 그 다음 출석번호를 출력한다.
*
*/

int main() {
    int num[30];
    int good[28];
    for (int i = 0; i < 30; i++) num[i] = i + 1;
    for (int i = 0; i < 28; i++) scanf("%d", &good[i]);

    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 28; j++) {
            if (num[i] == good[j]) num[i] = 0;
        }
    }
    for (int i = 0; i < 30; i++) {
        if (num[i] != 0) printf("%d\n", num[i]);
    }


    return 0;
}