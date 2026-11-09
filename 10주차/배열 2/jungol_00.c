// 9074: 배열2 - 연습문제1
// https://jungol.co.kr/problem/9074
#include <stdio.h>

int main(void) {
    int count[11] = {0}, n;
    while (scanf("%d", &n) == 1 && n >= 1 && n <= 10) count[n]++;
    for (int i = 1; i <= 10; i++)
        if (count[i]) printf("%d : %d개\n", i, count[i]);
    return 0;
}
