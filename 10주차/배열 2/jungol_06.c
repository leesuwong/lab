// 9077: 배열2 - 연습문제4
// https://jungol.co.kr/problem/9077
#include <stdio.h>

int main(void) {
    int a[3][3] = {{3, 5, 4}, {2, 6, 7}, {8, 10, 1}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d%c", a[i][j], j == 2 ? '\n' : ' ');
    }
    return 0;
}
