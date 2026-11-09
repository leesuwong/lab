// 160: 배열2 - 형성평가1
// https://jungol.co.kr/problem/160
#include <stdio.h>

int main(void) {
    int count[7] = {0}, n;
    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &n) != 1) return 0;
        count[n]++;
    }
    for (int i = 1; i <= 6; i++) printf("%d : %d\n", i, count[i]);
    return 0;
}
