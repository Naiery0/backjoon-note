#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
* in
*
*
* out
*
*
*/

int main() {
    char word[1000001];
    scanf("%s", word);

    int count[26] = { 0, };

    // �빮�ڷ� ����� / ����Ƚ��
    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        if (word[i] > 90) word[i] = word[i] - 32;
        count[word[i] - 65]++;
    }

    // �ִ� ���尪
    int max = 0;
    int index = 0;
    for (int i = 0; i < 26; i++) {
        if (max < count[i]) { 
            max = count[i]; 
            index = i;
        }
    }

    // ����ǥ �������?
    int shutdown = 0;
    for (int i = 0; i < 26; i++) {
        if (max == count[i]) shutdown++;
        if (shutdown == 2) {
            printf("?");
            return 0;
        }
    }
    printf("%c", index + 65);
    return 0;
}