#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
* in
*   가장 많이 사용된 알파벳
*
* out
*    가장 많이 사용된 알파벳을 대문자
*   여러 개 존재하는 경우에는 ?
*/
int main() {

    char word[1000000];
    scanf("%s", word);

    int count;

    // 문자열 정렬 & 소문자로 통일
    int temp;
    for (int i = 0; i < strlen(word); i++) {
        for (int j = 0; j < i; j++) {

        }
    }
    // 문자열 검사
    for (int i = 0; i < strlen(word); i++) {
        
        if (word[i] == word[i - 1]) count++;
        else count = 1;
    }


    return 0;
}