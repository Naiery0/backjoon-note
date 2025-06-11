#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
in
첫째 줄에 A, B, C가 순서대로

out
첫째 줄에 (A+B)%C,
둘째 줄에 ((A%C) + (B%C))%C,
셋째 줄에 (A×B)%C, 
넷째 줄에 ((A%C) × (B%C))%C
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