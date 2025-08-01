#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
* in
*   庚薦 元滴 : https://www.acmicpc.net/problem/5622
* 
*   3段  4段   5段   6段   7段   8段    9段   10段
*   ABC / DEF / GHI / JKL / MNO / PQRS / TUV / WXYZ
* 
*   2 <= st <= 15
* 
*   WA
* out
*   13
*
*/

int main() {
                    //   /68-70/ /74-76/  /80-83/  /87-90/
    // char alpha[] = "ABC DEF GHI JKL MNO PQRS TUV WXYZ";
                    //65-67/ /71-73/ /77-79/  /84-86/

    char st[15];
    scanf("%s", st);

    int sec = 0; // 段

    for (int i = 0; i < strlen(st); i++) {
        for (int j = 65; j <= 90; j++) {
            if (65 <= st[i] && st[i] <= 67) { sec += 3; break; }
            else if (68 <= st[i] && st[i] <= 70){ sec += 4; break; }
            else if (71 <= st[i] && st[i] <= 73){ sec += 5; break; }
            else if (74 <= st[i] && st[i] <= 76){ sec += 6; break; }
            else if (77 <= st[i] && st[i] <= 79){ sec += 7; break; }
            else if (80 <= st[i] && st[i] <= 83){ sec += 8; break; }
            else if (84 <= st[i] && st[i] <= 86){ sec += 9; break; }
            else if (87 <= st[i] && st[i] <= 90){ sec += 10; break; }
        }
    }
    printf("%d", sec);


    return 0;
}