// 162: 배열2 - 형성평가3
// https://jungol.co.kr/problem/162
#include <stdio.h>

int main(void) {
    int a[10];
    if (scanf("%d %d", &a[0], &a[1]) != 2) return 0;
    for (int i = 2; i < 10; i++) a[i] = (a[i - 2] + a[i - 1]) % 10;
    for (int i = 0; i < 10; i++) printf("%d%c", a[i], i == 9 ? '\n' : ' ');
    return 0;
}
