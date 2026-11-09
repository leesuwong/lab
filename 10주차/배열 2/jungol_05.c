#include <stdio.h>

int main()
{
    int a[1000] = {100}, count = 2;
    if (scanf("%d", &a[1]) != 1) return 0;
    do {
        a[count] = a[count - 2] - a[count - 1];
        count++;
    } while (a[count - 1] >= 0);
    for (int i = 0; i < count; i++)
        {
            printf("%d", a[i]);
            if (i == count - 1)
                printf("\n");
            else
                printf(" ");
        }
    return 0;
}
