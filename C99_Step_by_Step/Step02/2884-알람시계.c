#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* ���� �����Ǿ� �ִ� �˶��� 45�� �ռ��� �ð�
* 24�ð� ǥ���� ���
* 
* in
* ù° �ٿ� �� ���� H�� M
* 0 30
* out
* 23 45
*
*/

int main() {
    int h, m;

    scanf("%d %d", &h, &m);
    
    if (m < 45) { 
        m += 60; 
        h -= 1;
        if (h < 0) h = 23;
    }
    printf("%d %d", h, m - 45);

    return 0;
}