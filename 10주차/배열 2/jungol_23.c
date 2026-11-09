// 169: 배열2 - 형성평가10
// https://jungol.co.kr/problem/169
#include <stdio.h>

int main(void) {
    char a[3][5];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            if (scanf(" %c", &a[i][j]) != 1) return 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            printf("%c%c", a[i][j] - 'A' + 'a', j == 4 ? '\n' : ' ');
    return 0;
}
