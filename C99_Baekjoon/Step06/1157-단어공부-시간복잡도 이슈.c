#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
* in
*   가장 많이 사용된 알파벳
*
* out
*    가장 많이 사용된 알파벳을 대문자
*   여러 개 존재하는 경우에는 ?
*/
int main() {

    char word[1000000];
    scanf("%s", word);

    // 대문자로 만들기
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] > 90) word[i] = word[i] - 32;
    }
    // 알파벳순 정렬
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

    // 등장한 횟수 기록
    int index[26] = { 0, };
    int j = 0;
    for (int i = 0; i < strlen(word); i++) {
        index[j]++;
        if (word[i] != word[i + 1]) j++;
    }

    // 인덱스열의 최댓값과 몇 번째 인덱스인지
    int max[2] = { 0, 0 };
    int wordIndex = 0;
    for (int i = 0; i < 26; i++) {
        wordIndex += index[i];
        if (max[0] < index[i]) {
            max[0] = index[i];
            max[1] = wordIndex-1;
        }
    }

    // 물음표 출력 여부
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