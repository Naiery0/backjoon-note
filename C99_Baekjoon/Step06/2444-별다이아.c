#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   ù° �ٿ� N(1 �� N �� 100)
*   5
* out
*   ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ��
*       *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
*/
void printSpace(int max, int n);
void printStar(int max, int n);

void printSpace(int max, int n) {
    int i;
    for (i = 0; i < n-1; i++) {
        printf(" ");
    }
    printStar(max, i);
}

void printStar(int max, int n) {
    int star = max - (n * 2);

    int i;
    for (i = 0; i < star; i++) {
        printf("*"); 
    }

    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int max = n * 2 - 1;
    for (int i = 0; i < n; i++) {
        printSpace(max, n - i);
    }
    for (int i = 1; i < n ; i++) {
        printSpace(max, i + 1);
    }

    return 0;
}