// 566: 배열2 - 자가진단3
// https://jungol.co.kr/problem/566
#include <stdio.h>

int main(void) {
    int a[1000] = {100}, count = 2;
    if (scanf("%d", &a[1]) != 1) return 0;
    do {
        a[count] = a[count - 2] - a[count - 1];
        count++;
    } while (a[count - 1] >= 0);
    for (int i = 0; i < count; i++)
        printf("%d%c", a[i], i == count - 1 ? '\n' : ' ');
    return 0;
}
