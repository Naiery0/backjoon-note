#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* ���� �߿� �ִ� M
* ��� ������ ����/M*100
* in
*   ù° �ٿ� ���� �� ������ ���� N�� �־�����.
*   ��° �ٿ� �������� ���� ����
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