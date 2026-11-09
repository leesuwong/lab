// 569: 배열2 - 자가진단6
// https://jungol.co.kr/problem/569
#include <stdio.h>

int main(void) {
    int score[5][4], passed = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++)
            if (scanf("%d", &score[i][j]) != 1) return 0;
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) sum += score[i][j];
        if (sum >= 320) { puts("pass"); passed++; }
        else puts("fail");
    }
    printf("Successful : %d\n", passed);
    return 0;
}
