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

    // �빮�ڷ� �����
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] > 90) word[i] = word[i] - 32;
    }
    // ���ĺ��� ����
    char temp;
    for (int i = 0; i < strlen(word); i++) {
        for (int j = 0; j < i; j++) {
            if (word[j] > word[i]) {
                temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
    //printf("%s\n", word);

    // ������ Ƚ�� ���
    int index[26] = { 0, };
    int j = 0;
    for (int i = 0; i < strlen(word); i++) {
        index[j]++;
        if (word[i] != word[i + 1]) j++;
    }

    // �ε������� �ִ񰪰� �� ��° �ε�������
    int max[2] = { 0, 0 };
    int wordIndex = 0;
    for (int i = 0; i < 26; i++) {
        wordIndex += index[i];
        if (max[0] < index[i]) {
            max[0] = index[i];
            max[1] = wordIndex-1;
        }
    }

    // ����ǥ ��� ����
    int shutdown = 0;
    for (int i = 0; i < 26; i++) {
        if (max[0] == index[i]) shutdown++;
        if (shutdown == 2) {
            printf("?");
            return 0;
        }
    }

    printf("%c", word[max[1]]);

    return 0;
}