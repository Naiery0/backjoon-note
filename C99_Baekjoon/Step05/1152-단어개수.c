#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
* in
*   ù �ٿ� ���� ��ҹ��ڿ� �������� �̷���� ���ڿ�
*   �ܾ�� ���� �� ���� ����
*   ���ڿ��� �������� �����ϰų� ���� �� �ִ�.
*   The Curious Case of Benjamin Button
* 
* 
* out
*   ù° �ٿ� �ܾ��� ������ ���
*   6
*/

int main() {
    int tf = 0; // ���ڸ� �����Ƴ� �� �����Ƴ�
    char S[1000000];

    int count = 0;
    gets(S); // ���� �Է��� ���� �̰� ���� ��� �� �� �� �ֱ� ��
    for (int i = 0; i < strlen(S); i++) {
        if (S[i] != 32) tf = 1;
        if (S[i] == 32 && tf == 1) { 
            count++; 
            tf = 0;
        }
        if (S[i + 1] == NULL && tf == 1) count++;
    }
    printf("%d", count);

    return 0;
}