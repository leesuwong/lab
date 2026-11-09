// 9076: 배열2 - 연습문제3
// https://jungol.co.kr/problem/9076
#include <stdio.h>

int main(void) {
    int a[41] = {0, 1, 1};
    for (int i = 3; i <= 40; i++) a[i] = a[i - 2] + a[i - 1];
    for (int i = 10; i <= 40; i += 10)
        printf("피보나치 수열 %d항 : %d\n", i, a[i]);
    return 0;
}
