// 9078: 배열2 - 연습문제5
// https://jungol.co.kr/problem/9078
#include <stdio.h>

int main(void) {
    int a[3][3], b[3][3], sum[3][3];
    for (int i = 0; i < 3; i++) {
        printf("첫 번째 배열 %d행 ", i + 1);
        for (int j = 0; j < 3; j++)
            if (scanf("%d", &a[i][j]) != 1) return 0;
    }
    for (int i = 0; i < 3; i++) {
        printf("두 번째 배열 %d행 ", i + 1);
        for (int j = 0; j < 3; j++)
            if (scanf("%d", &b[i][j]) != 1) return 0;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d%c", sum[i][j], j == 2 ? '\n' : ' ');
        }
    }
    return 0;
}
