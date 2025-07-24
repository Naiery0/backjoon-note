#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
크로아티아 알파벳 변경
    č	c=
    ć	c-
    dž	dz=
    đ	d-
    lj	lj
    nj	nj
    š	s=
    ž	z=
* in
*   예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, š, nj, a, k)로 이루어져 있다. 
    단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

    dž는 무조건 하나의 알파벳으로 쓰이고, d와 ž가 분리된 것으로 보지 않는다. 
    lj와 nj도 마찬가지이다. 위 목록에 없는 알파벳은 한 글자씩 센다.
*   
    첫째 줄에 최대 100글자의 단어가 주어진다. 알파벳 소문자와 '-', '='로만 이루어져 있다.

    단어는 크로아티아 알파벳으로 이루어져 있다. 문제 설명의 표에 나와있는 알파벳은 변경된 형태로 입력된다.

    ljes=njak
* out
*   6
*
*/

int main() {

    char* cro_alpha[] = {"c=", "c-", "dz=", "lj", "nj", "s=", "z="};
    char word[101]; // 소문자, -, =
    scanf("%s", word);

    int i = strlen(word);
    int j = 0;
    while (i != 0) {
        int index = strlen(cro_alpha[i]); // 검사할 칸 수 설정
        while (j < 7) {
            printf("%d\n", j);
            j++;
        }
        i--;
    }



    return 0;
}