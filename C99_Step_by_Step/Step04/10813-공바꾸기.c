#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   ó������ �ٱ��Ͽ� �����ִ� ��ȣ�� ���� ��ȣ
*   ù° �ٿ� N M 
*   ��° �ٺ��� M���� �ٿ� ���ļ� ���� ��ȯ�� ���
*   i�� �ٱ��Ͽ� j�� �ٱ��Ͽ� ����ִ� ���� ��ȯ
    5 4
    1 2
    3 4
    1 4
    2 2
* out
*   
*   3 1 4 2 5
*/

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N];
    int temp;
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }
    int i, j;
    for (int x = 0; x < M; x++) {
        scanf("%d %d", &i, &j);
        i--;
        j--;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int x = 0; x < N; x++) {
        printf("%d ", arr[x]);
    }

    return 0;
}