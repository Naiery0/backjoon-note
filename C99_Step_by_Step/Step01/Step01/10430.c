#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
in
ù° �ٿ� A, B, C�� �������

out
ù° �ٿ� (A+B)%C,
��° �ٿ� ((A%C) + (B%C))%C,
��° �ٿ� (A��B)%C, 
��° �ٿ� ((A%C) �� (B%C))%C
*/

int main() {
    int A, B, C;
    
    scanf("%d%d%d", &A, &B, &C);

    printf("%d\n", (A + B) % C);
    printf("%d\n", ((A % C) + (B % C)) % C);
    printf("%d\n", (A * B) % C);
    printf("%d", ((A % C) * (B % C)) % C);

    return 0;
}