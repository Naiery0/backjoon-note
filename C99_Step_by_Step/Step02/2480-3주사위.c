#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
*   ���� ���� 3���� ������ 10,000��+(���� ��)��1,000���� ����� �ް� �ȴ�.
    ���� ���� 2���� ������ ��쿡�� 1,000��+(���� ��)��100���� ����� �ް� �ȴ�.
    ��� �ٸ� ���� ������ ��쿡�� (�� �� ���� ū ��)��100���� ����� �ް� �ȴ�.
* in
* 3 3 6
*
* out
* 1300
*
*/
int MaxFunc(int A, int B, int C) {
    int array[3] = { A, B, C };
    int max = 0;

    for (int i = 0; i < 3; i++) {
        if (max < array[i]) max = array[i];
    }

    return max;
}

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A == B && A == C) // �� �� ���� ��
        printf("%d", 10000 + A * 1000);
    else if (A == B || A == C) // �� �� ���� ��
        printf("%d", 1000 + A * 100);
    else if (B == C) // �� �� ���� ��
        printf("%d", 1000 + B * 100);
    else // �� �ٸ� ��
    {
        int max = MaxFunc(A, B, C);
        printf("%d", max * 100);
    }

    return 0;
}
