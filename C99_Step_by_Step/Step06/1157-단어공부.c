#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
* in
*   ���� ���� ���� ���ĺ�
*
* out
*    ���� ���� ���� ���ĺ��� �빮��
*   ���� �� �����ϴ� ��쿡�� ?
*/
int main() {

    char word[1000000];
    scanf("%s", word);

    int count;

    // ���ڿ� ���� & �ҹ��ڷ� ����
    int temp;
    for (int i = 0; i < strlen(word); i++) {
        for (int j = 0; j < i; j++) {

        }
    }
    // ���ڿ� �˻�
    for (int i = 0; i < strlen(word); i++) {
        
        if (word[i] == word[i - 1]) count++;
        else count = 1;
    }


    return 0;
}