#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*  1���� n���� ���� ����Ѵ�.
* in
*   3
* out
*   6
*/

int main() {
    int n, sum = 0;   
    scanf("%d", &n);

    while (n>0) {
        sum += n--;
    }
    printf("%d", sum);
    return 0;
}