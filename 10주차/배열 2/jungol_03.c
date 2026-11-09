// 565: 배열2 - 자가진단2
// https://jungol.co.kr/problem/565
#include <stdio.h>

int main(void) {
    int count[10] = {0}, n;
    while (scanf("%d", &n) == 1 && n != 0) count[n / 10]++;
    for (int i = 0; i < 10; i++)
        if (count[i]) printf("%d : %d\n", i, count[i]);
    return 0;
}
