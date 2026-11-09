#include <stdio.h>

int main()
{
    int count[11] = {0}, n;
    while (scanf("%d", &n) == 1 && n != 0) count[n / 10]++;
    for (int i = 10; i >= 0; i--)
        if (count[i]) printf("%d : %d person\n", i * 10, count[i]);
    return 0;
}
