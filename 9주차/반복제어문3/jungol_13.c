#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++) {
        int space;

        if (i <= n) {
            space = i - 1;
        } else {
            space = 2 * n - 1 - i;
        }

        for (int j = 1; j <= space; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2 * (n - space) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}