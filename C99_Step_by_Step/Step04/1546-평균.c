#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 점수 중에 최댓값 M
* 모든 점수를 점수/M*100
* in
*   첫째 줄에 시험 본 과목의 개수 N이 주어진다.
*   둘째 줄에 세준이의 현재 성적
*   3
    40 80 60
* out
*   75.0
*/

int main() {
    int N;
    double sum = 0, M = 0;
    scanf("%d", &N);
    double arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%lf ", &arr[i]);
        if (M < arr[i]) M = arr[i];
    }
    for (int i = 0; i < N; i++) {
        arr[i] = arr[i] / M * 100;
        sum += arr[i];
    }
    printf("%.9lf", sum / N);
    return 0;
}