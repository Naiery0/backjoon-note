#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   ���� N���� �̷���� ���� A�� ���� X�� �־�����
*   ù° �ٿ� N�� X�� �־�����
*   ��° �ٿ� ���� A�� �̷�� ���� N��
*   10 5
    1 10 4 9 2 3 8 5 7 6
* out
*   X���� ���� ���� �Է¹��� ������� �������� ����
*   1 4 2 3
*/

int main() {
    int N, X;
    scanf("%d %d", &N, &X);
    int A[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d ", &A[i]);
    }
    for (int i = 0; i < N; i++) {
        if (X > A[i]) {
            printf("%d ", A[i]);
        }
    }

    return 0;
}