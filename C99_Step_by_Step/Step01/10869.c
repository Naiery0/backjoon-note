#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    �� �ڿ��� A�� B�� �־�����. �̶�, A+B, A-B, A*B, A/B(��), A%B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
*/


int main() {

    int x, y;

    scanf("%d%d", &x, &y);
    printf("%d\n", x + y);
    printf("%d\n", x - y);
    printf("%d\n", x * y);
    printf("%d\n", x / y);
    printf("%d\n", x % y);

    return 0;
}