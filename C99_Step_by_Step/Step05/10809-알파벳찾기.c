#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
* in
*   ù° �ٿ� �ܾ� S �ҹ��ڷθ�
*   baekjoon
* out
*   ������ ���ĺ��� ���ؼ�, a�� ó�� �����ϴ� ��ġ, b�� ó�� �����ϴ� ��ġ, ... z�� ó�� �����ϴ� ��ġ�� �������� ����
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