#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   ù° �ٿ� ������ ����
*   ��° �ٿ��� ������ �������� ����
*   ��° �ٿ��� ã������ �ϴ� ���� v
*   11
    1 4 1 2 4 2 4 2 3 4 4
    2
* out
*   3
*
*/

int main() {
    int arrCount;
    int v;
    int vCount = 0;

    scanf("%d",&arrCount);
    int array[arrCount];
    for (int i = 0; i < arrCount; i++) {
        scanf("%d ", &array[i]);
    }
    scanf("%d", &v);

    for (int i = 0; i < arrCount; i++) {
        if (v == array[i]) {
            vCount++;
        }
    }
    printf("%d", vCount);


    return 0;
}