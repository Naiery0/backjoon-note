#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* in
*   첫째 줄에는 영수증에 적힌 총 금액
    둘째 줄에는 영수증에 적힌 구매한 물건의 종류의 수
    이후 각 물건의 가격, 개수가 공백을 사이에 두고 주어진다.
*   260000
    4
    20000 5
    30000 2
    10000 6
    5000 8
* out
*   총 금액이 일치하면 Yes, 일치하지 않는다면 No
*   Yes
*/

int main() {
    int total, goods;
    scanf("%d%d", &total, &goods);
    int price, count;
    int sum = 0;
    for (int i = 0; i < goods; i++) {
        scanf("%d %d", &price, &count);
        sum += price * count;
    }
    if (total == sum) printf("Yes");
    else printf("No");

    return 0;
}