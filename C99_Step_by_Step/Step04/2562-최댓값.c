#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã�� �� �ִ��� �� ��° ������
* in
*   3
    29
    38
    12
    57
    74
    40
    85
    61
*
* out
*   85
    8   
*
*/

int main() {
    int arr[10];
    int max, maxIndex;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    maxIndex = 0;
    for (int i = 0; i < 10; i++) {
        if (max < arr[i]) {
            max = arr[i];
            maxIndex = i;
        }
    }
    printf("%d\n%d", max, maxIndex + 1);

    return 0;
}