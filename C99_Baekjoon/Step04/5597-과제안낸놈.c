#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   �Է��� �� 28�ٷ� �� ������(�л�)�� �⼮��ȣ n
*
* out
*   1��° �ٿ� �������� ���� �л��� �⼮��ȣ �� ���� ���� ���� ����ϰ�, 
    2��° �ٿ��� �� ���� �⼮��ȣ�� ����Ѵ�.
*
*/

int main() {
    int num[30];
    int good[28];
    for (int i = 0; i < 30; i++) num[i] = i + 1;
    for (int i = 0; i < 28; i++) scanf("%d", &good[i]);

    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 28; j++) {
            if (num[i] == good[j]) num[i] = 0;
        }
    }
    for (int i = 0; i < 30; i++) {
        if (num[i] != 0) printf("%d\n", num[i]);
    }


    return 0;
}