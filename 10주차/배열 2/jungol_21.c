#include <stdio.h>

int main()
{
    int a[4][2], row[4] = {0}, col[2] = {0}, total = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 2; j++) {
            if (scanf("%d", &a[i][j]) != 1) return 0;
            row[i] += a[i][j]; col[j] += a[i][j]; total += a[i][j];
        }
    for (int i = 0; i < 4; i++) {
            printf("%d", row[i] / 2);
            if (i == 3)
                printf("\n");
            else
                printf(" ");
        }
    printf("%d %d\n%d\n", col[0] / 4, col[1] / 4, total / 8);
    return 0;
}
