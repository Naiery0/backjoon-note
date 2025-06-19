#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   첫째 줄에 N(1 ≤ N ≤ 100)
*   5
* out
*   첫째 줄부터 2×N-1번째 줄까지 차례대로 별
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
void printSpace(int max, int n, int tf);
void printStar(int max, int n);

void printSpace(int max, int n, int tf) {
    int i;
    for (i = 0; i < n-1; i++) {
        printf(" ");
    }

    if (tf == 1) {
        printf("\n");
        return;
    }
    printStar(max, i);

}

void printStar(int max, int n) {
    int star = max - (n * 2);

    int i;
    for (i = 0; i < star; i++) {
        printf("*"); 
    }
    printSpace(max, i, 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int max = n * 2 - 1;
    for (int i = 0; i < n; i++) {
        printSpace(max, n - i, 0);
    }
    // 일단 세모 완성.. 자야지...
    return 0;
}