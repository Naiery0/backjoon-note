#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 16개의 피스를 사용하며, 킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개
* in
*   흰색 킹, 퀸, 룩, 비숍, 나이트, 폰의 개수
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