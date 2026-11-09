#include <stdio.h>

int main()
{
    char a[3][5];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            if (scanf(" %c", &a[i][j]) != 1) return 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            {
            printf("%c", a[i][j] - 'A' + 'a');
            if (j == 4)
                printf("\n");
            else
                printf(" ");
        }
    return 0;
}
