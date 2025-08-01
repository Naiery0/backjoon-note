#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*  팰린드롬이란 앞으로 읽을 때와 거꾸로 읽을 때 똑같은 단어
* in
*   첫째 줄에 단어가 주어진다 1보다 크거나 같고, 100보다 작거나 같
*   level
* out
*   첫째 줄에 팰린드롬이면 1, 아니면 0을 출력
*   1
*/

int main() {

    char st[100];
    scanf("%s", st);
    
    for (int i = 0; i < strlen(st); i++) {
        if (st[i] == st[strlen(st) - (i + 1)]) 
            continue;
        else {  
            printf("0"); 
            return 0;
        }
        if (i >= strlen(st) - (i + 1)) break;
    }
    printf("1");

    return 0;
}