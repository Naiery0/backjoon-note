#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
* in
*   ù° �ٿ� �׽�Ʈ ���̽��� ���� T
*   �� �׽�Ʈ ���̽��� �ݺ� Ƚ�� R ���ڿ� S�� ����
*   1 <= S <= 20
* 
* 
*   2
    3 ABC
    5 /HTP
* out
*   �׽�Ʈ ���̽��� ���� P�� ���
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