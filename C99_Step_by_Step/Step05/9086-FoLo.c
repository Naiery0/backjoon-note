#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
* in
*   ù�� N
*   N���� ���ڿ�
*
*   3
    ACDKJFOWIEGHE
    O
    AB
*
* out
*   AE
    OO
    AB
*
*/

int main() {
    int N;
    scanf("%d", &N);
    //char st[1000];
    //for (int i = 0; i < N; i++) {
    //    scanf("%s", st);
    //    printf("%c%c\n", st[0], st[strlen(st) - 1]);
    //}

    // �� ���ķ� ����
    char st[N][1000];
    for (int i = 0; i < N; i++) {
        scanf("%s", st[i]);
    }
    for (int i = 0; i < N; i++) {
        printf("%c%c\n", st[i][0], st[i][strlen(st[i]) - 1]);
    }
    // �̰� ����
    return 0;
}