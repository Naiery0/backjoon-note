#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 16���� �ǽ��� ����ϸ�, ŷ 1��, �� 1��, �� 2��, ��� 2��, ����Ʈ 2��, �� 8��
* in
*   ��� ŷ, ��, ��, ���, ����Ʈ, ���� ����
*   0 1 2 2 2 7
* out
*   1 0 0 0 0 1
*
*/

int main() {

    int check[6] = { 1, 1, 2, 2, 2, 8 };
    int arr[6];
    for (int i = 0; i < 6; i++)
        scanf("%d ", &arr[i]);
    for (int i = 0; i < 6; i++) {
        
        printf("%d ", check[i] - arr[i]);
    }

    return 0;
}