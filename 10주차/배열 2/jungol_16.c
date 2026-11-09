#include <stdio.h>

int main()
{
    int a[10];
    if (scanf("%d %d", &a[0], &a[1]) != 2) return 0;
    for (int i = 2; i < 10; i++) a[i] = (a[i - 2] + a[i - 1]) % 10;
    for (int i = 0; i < 10; i++) {
            printf("%d", a[i]);
            if (i == 9)
                printf("\n");
            else
                printf(" ");
        }
    return 0;
}
