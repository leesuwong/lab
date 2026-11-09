// 9080: 배열2 - 연습문제7
// https://jungol.co.kr/problem/9080
#include <stdio.h>

int main(void) {
    int a[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        a[i][0] = a[i][i] = 1;
        for (int j = 1; j < i; j++) a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        for (int j = 0; j <= i; j++)
            printf("%d%c", a[i][j], j == i ? '\n' : ' ');
    }
    return 0;
}
