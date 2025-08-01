#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   첫째 줄에 N (1 ≤ N ≤ 100)과 M
    둘째 줄부터 M개의 줄에 걸쳐서 공을 넣는 방법
*   세 정수 i j k로 이루어져 있으며
*   i번 바구니부터 j번 바구니까지에 k번 번호가 적혀져 있는 공을 넣는다
*   5 4
    1 2 3
    3 4 4
    1 4 1
    2 2 2
* out
*   1번 바구니부터 N번 바구니에 들어있는 공의 번호를 공백으로 구분
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