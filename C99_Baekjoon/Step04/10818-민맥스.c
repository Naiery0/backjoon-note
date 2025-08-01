#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*
*   5
    20 10 35 30 7
*
* out
*   7 35
*
*/

int main() {
    int n, min, max;
    scanf("%d", &n);
    int arr[n];

    int i = 0;
    while (i < n) {
        scanf("%d ", &arr[i]);
        i++;
    }
    i = 0;
    min = arr[0];
    max = arr[0];

    while (i < n) {
        if (min > arr[i]) min = arr[i];
        if (max < arr[i]) max = arr[i];
        i++;
    }
    printf("%d %d", min, max);

    return 0;
}