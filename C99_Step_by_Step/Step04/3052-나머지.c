#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   ù° �ٺ��� ����° �� ���� ���ڰ� �� �ٿ� �ϳ���
*   39 
    40
    41
    42
    43
    44
    82
    83
    84
    85
* out
*   42�� �������� ��, ���� �ٸ� �������� �� �� �ִ���
*   6
*/

int main() {
    int inArr[10];
    int modArr[10];
    int count = 10;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &inArr[i]);
        modArr[i] = inArr[i] % 42;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i != j && modArr[j] == modArr[i]) {
                count--;
                modArr[i] = 42;
            }
        }
    }
    printf("%d", count);

    return 0;
}