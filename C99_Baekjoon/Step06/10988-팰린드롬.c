#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*  �Ӹ�����̶� ������ ���� ���� �Ųٷ� ���� �� �Ȱ��� �ܾ�
* in
*   ù° �ٿ� �ܾ �־����� 1���� ũ�ų� ����, 100���� �۰ų� ��
*   level
* out
*   ù° �ٿ� �Ӹ�����̸� 1, �ƴϸ� 0�� ���
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