#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[20];

    char ch = 'p';
    int n = 3;

    int len = strlen(str1);
    printf("str1의 길이: %d\n", len);

    strcpy(str3, str1);
    printf("str1을 str3에 복사: %s\n", str3);

    strncpy(str3,str2,n);
    str3[n] = '\0';
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n,str3);
}