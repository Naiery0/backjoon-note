#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
* 첫째 줄에 N과 M 
* 둘째 줄부터 M개의 줄에 왼쪽으로부터 i번째 바구니부터 j번째 바구니의 순서를 역순으로
*   5 4
    1 2
    3 4
    1 4
    2 2
* out
*   3 4 1 2 5
*
*/
/*
    풀이를 위한 주저리
    1 2 3 4 5
    5 4 3 2 1
    arr[0] arr[4]
    arr[1] arr[3]
    arr[2] arr[2] - break

    if (i >= j) break;

*/

int main() {
    int i, j;
    int M, N;
    int temp;
    scanf("%d %d", &N, &M);
    int arr[N];
    for (int x = 0; x < N; x++) {
        arr[x] = x + 1;
    }
    for (int x = 0; x < M; x++) {
        scanf("%d %d", &i, &j);
        i--;
        j--;
        while (!(i >= j)) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    for (int x = 0; x < N; x++) {
        printf("%d ", arr[x]);
    }

    return 0;
}