#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   처음에는 바구니에 적혀있는 번호와 같은 번호
*   첫째 줄에 N M 
*   둘째 줄부터 M개의 줄에 걸쳐서 공을 교환할 방법
*   i번 바구니와 j번 바구니에 들어있는 공을 교환
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