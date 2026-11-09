// 166: 배열2 - 형성평가7
// https://jungol.co.kr/problem/166
#include <stdio.h>

int main(void) {
    int a[2][3], b[2][3], product[2][3];
    puts("first array");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            if (scanf("%d", &a[i][j]) != 1) return 0;
    puts("second array");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            if (scanf("%d", &b[i][j]) != 1) return 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++) {
            product[i][j] = a[i][j] * b[i][j];
            printf("%d%c", product[i][j], j == 2 ? '\n' : ' ');
        }
    return 0;
}
