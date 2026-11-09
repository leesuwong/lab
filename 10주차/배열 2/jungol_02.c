// 9075: 배열2 - 연습문제2
// https://jungol.co.kr/problem/9075
#include <stdio.h>

int main(void) {
    int count[10] = {0}, n;
    while (scanf("%d", &n) == 1 && n != 0) {
        int digit = n % 10;
        if (digit < 0) digit = -digit;
        count[digit]++;
    }
    for (int i = 0; i < 10; i++)
        if (count[i]) printf("%d : %d개\n", i, count[i]);
    return 0;
}
