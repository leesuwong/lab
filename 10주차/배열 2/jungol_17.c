// 163: 배열2 - 형성평가4
// https://jungol.co.kr/problem/163
#include <stdio.h>

int main(void) {
    int a[4][3] = {{3, 5, 9}, {2, 11, 5}, {8, 30, 10}, {22, 5, 1}};
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            sum += a[i][j];
            printf("%d%c", a[i][j], j == 2 ? '\n' : ' ');
        }
    }
    printf("%d\n", sum);
    return 0;
}
