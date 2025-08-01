#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>

/*
* in
*   첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100). 
    둘째 줄에 숫자 N개가 공백없이
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
        //sum += atoi(st[i]); - 컴파일 에러 문자열이 아니라 문자를 변환하려고 해서
        sum += st[i] - '0'; // - 문자 0을 빼면 숫자가 된다
    }

    printf("%d", sum);

    return 0;
}