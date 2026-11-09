#include <stdio.h>

int main()
{
    int a[2][4], b[2][4], product[2][4];
    puts("first array");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j++)
            if (scanf("%d", &a[i][j]) != 1) return 0;
    puts("second array");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j++)
            if (scanf("%d", &b[i][j]) != 1) return 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j++) {
            product[i][j] = a[i][j] * b[i][j];
            {
            printf("%d", product[i][j]);
            if (j == 3)
                printf("\n");
            else
                printf(" ");
        }
        }
    return 0;
}
