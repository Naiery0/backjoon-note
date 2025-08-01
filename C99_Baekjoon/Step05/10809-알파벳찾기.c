#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
* in
*   첫째 줄에 단어 S 소문자로만
*   baekjoon
* out
*   각각의 알파벳에 대해서, a가 처음 등장하는 위치, b가 처음 등장하는 위치, ... z가 처음 등장하는 위치를 공백으로 구분
*   1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
*/

int main() {
    // printf("%d", 'a'); //97
    char S[100];
    scanf("%s", S);
    int tf = 0;
    for (int i = 97; i <123 ; i++) {
        for (int j = 0; j < strlen(S); j++) {
            if (i == S[j]) {
                printf("%d ", j);
                tf = 1;
                break;
            }
        }
        if (tf == 0) printf("-1 ");
        else tf = 0;
    }
    
    return 0;
}