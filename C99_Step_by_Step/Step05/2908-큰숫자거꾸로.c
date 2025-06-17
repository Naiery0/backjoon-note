#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
* in
*   두 수 A와 B
*   순서 뒤집고 큰 숫자 출력
*   734 893
*
* out
*   
*   437
*   
*/

int main() {

    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    // 문자열로 바꾸기
    char st1[100], st2[100];
    sprintf(st1, "%d", n1); // %d를 지정해 정수를 문자열로
    sprintf(st2, "%d", n2);
    char temp;
    // 뒤집기
    for (int i = 0; i < strlen(st1); i++) {
        if (i >= strlen(st1) - (i + 1)) break;
        temp = st1[i];
        st1[i] = st1[strlen(st1) - (i + 1)];
        st1[strlen(st1) - (i + 1)] = temp;
    }
    for (int i = 0; i < strlen(st2); i++) {
        if (i >= strlen(st2) - (i + 1)) break;
        temp = st2[i];
        st2[i] = st2[strlen(st2) - (i + 1)];
        st2[strlen(st2) - (i + 1)] = temp;
    }
    
    n1 = atoi(st1); // 정수 -> 문자열
    n2 = atoi(st2);
    
    if (n1 > n2)printf("%d", n1);
    else printf("%d", n2);
    

    return 0;
}