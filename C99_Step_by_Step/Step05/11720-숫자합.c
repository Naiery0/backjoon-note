#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>

/*
* in
*   ù° �ٿ� ������ ���� N (1 �� N �� 100). 
    ��° �ٿ� ���� N���� �������
*   5
    54321
* out
*   15
*
*/

int main() {
    int N, sum = 0;
    scanf("%d", &N);

    char st[100];
    scanf("%s", st);

    for (int i = 0; i < N; i++)
    {
        //sum += atoi(st[i]); - ������ ���� ���ڿ��� �ƴ϶� ���ڸ� ��ȯ�Ϸ��� �ؼ�
        sum += st[i] - '0'; // - ���� 0�� ���� ���ڰ� �ȴ�
    }

    printf("%d", sum);

    return 0;
}