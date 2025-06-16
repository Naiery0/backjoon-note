#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
* in
*   첫째 줄에 테스트 케이스의 개수 T
*   각 테스트 케이스는 반복 횟수 R 문자열 S가 공백
*   1 <= S <= 20
* 
* 
*   2
    3 ABC
    5 /HTP
* out
*   테스트 케이스에 대해 P를 출력
* 
* 
*   AAABBBCCC
    /////HHHHHTTTTTPPPPP
*
*/

int main() {

    int T;
    scanf("%d", &T);

    int R;
    char S[20];
    for (int x = 0; x < T; x++) {
        scanf("%d %s", &R, S);

        for (int i = 0; i < strlen(S); i++) {
            for (int j = 0; j < R; j++) printf("%c", S[i]);
        }
        printf("\n");
    }

    return 0;
}