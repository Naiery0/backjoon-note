#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* »çºÐ¸é
* in
*   12
    5
*
* out
*   1
*
*/

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    if (x > 0 && y > 0) printf("1");
    else if (x < 0 && y > 0) printf("2");
    else if (x < 0 && y < 0) printf("3");
    else if (x > 0 && y < 0) printf("4");
    return 0;
}