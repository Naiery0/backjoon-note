#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* in
*   ù° �ٿ��� �������� ���� �� �ݾ�
    ��° �ٿ��� �������� ���� ������ ������ ������ ��
    ���� �� ������ ����, ������ ������ ���̿� �ΰ� �־�����.
*   260000
    4
    20000 5
    30000 2
    10000 6
    5000 8
* out
*   �� �ݾ��� ��ġ�ϸ� Yes, ��ġ���� �ʴ´ٸ� No
*   Yes
*/

int main() {
    int total, goods;
    scanf("%d%d", &total, &goods);
    int price, count;
    int sum = 0;
    for (int i = 0; i < goods; i++) {
        scanf("%d %d", &price, &count);
        sum += price * count;
    }
    if (total == sum) printf("Yes");
    else printf("No");

    return 0;
}