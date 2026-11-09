#include <stdio.h>

int main()
{
    int a[10][10] = {0}, n;
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) return 0;
    for (int i = 0; i < n; i++) {
        a[i][0] = a[i][i] = 1;
        for (int j = 1; j < i; j++) a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
    for (int i = n - 1; i >= 0; i--)
        for (int j = 0; j <= i; j++)
            {
            printf("%d", a[i][j]);
            if (j == i)
                printf("\n");
            else
                printf(" ");
        }
    return 0;
}
