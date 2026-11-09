// 161: 배열2 - 형성평가2
// https://jungol.co.kr/problem/161
#include <stdio.h>

int main(void) {
    int count[11] = {0}, n;
    while (scanf("%d", &n) == 1 && n != 0) count[n / 10]++;
    for (int i = 10; i >= 0; i--)
        if (count[i]) printf("%d : %d person\n", i * 10, count[i]);
    return 0;
}
