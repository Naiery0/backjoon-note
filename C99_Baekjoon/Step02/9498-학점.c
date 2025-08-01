#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* in
*   100
*
* out
*   90 ~ 100점은 A,
    80 ~ 89점은 B, 
    70 ~ 79점은 C, 
    60 ~ 69점은 D, 
    나머지 점수는 F
*
*/

int main() {
	int A;

	scanf("%d", &A);
	if (A >= 90 && A <= 100)
		printf("A");
	else if (A >= 80 && A <= 89)
		printf("B");
	else if (A >= 70 && A <= 79)
		printf("C");
	else if (A >= 60 && A <= 69)
		printf("D");
	else
		printf("F");

	return 0;
}