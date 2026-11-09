// 164: 배열2 - 형성평가5
// https://jungol.co.kr/problem/164
#include <stdio.h>

int main(void) {
    int a[4][3];
    for (int i = 0; i < 4; i++) {
        printf("%dclass? ", i + 1);
        for (int j = 0; j < 3; j++)
            if (scanf("%d", &a[i][j]) != 1) return 0;
    }
    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) sum += a[i][j];
        printf("%dclass : %d\n", i + 1, sum);
    }
    return 0;
}
