#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
* in
*   첫 줄에 영어 대소문자와 공백으로 이루어진 문자열
*   단어는 공백 한 개로 구분
*   문자열은 공백으로 시작하거나 끝날 수 있다.
*   The Curious Case of Benjamin Button
* 
* 
* out
*   첫째 줄에 단어의 개수를 출력
*   6
*/

int main() {
    int tf = 0; // 문자를 마주쳤나 안 마주쳤나
    char S[1000000];

    int count = 0;
    gets(S); // 공백 입력을 받음 이거 말고도 방법 몇 개 더 있긴 함
    for (int i = 0; i < strlen(S); i++) {
        if (S[i] != 32) tf = 1;
        if (S[i] == 32 && tf == 1) { 
            count++; 
            tf = 0;
        }
        if (S[i + 1] == NULL && tf == 1) count++;
    }
    printf("%d", count);

    return 0;
}