#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   ù° �ٿ� N (1 �� N �� 100)�� M
    ��° �ٺ��� M���� �ٿ� ���ļ� ���� �ִ� ���
*   �� ���� i j k�� �̷���� ������
*   i�� �ٱ��Ϻ��� j�� �ٱ��ϱ����� k�� ��ȣ�� ������ �ִ� ���� �ִ´�
*   5 4
    1 2 3
    3 4 4
    1 4 1
    2 2 2
* out
*   1�� �ٱ��Ϻ��� N�� �ٱ��Ͽ� ����ִ� ���� ��ȣ�� �������� ����
*   1 2 1 1 0
*/

int main() {
    int N, M, i, j, k;

    scanf("%d %d", &N, &M);
    int arr[N];
    for (int x = 0; x < N; x++) {
        arr[x] = 0;
    }

    for (int x = 0; x < M; x++) {
        scanf("%d %d %d", &i, &j, &k);
        for (int y = i - 1; y < j; y++) {
            arr[y] = k;
        }
    }
    for (int x = 0; x < N; x++) {
        printf("%d ", arr[x]);
    }

    return 0;
}