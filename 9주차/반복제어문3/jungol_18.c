#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++) {
        int space = 0;
        int count;

        if (i <= n) {
            count = i;
        } else {
            space = i - n;
            count = 2 * n - i;
        }

        for (int j = 1; j <= space; j++) {
            printf("  ");
        }

        for (int j = 1; j <= count; j++) {
            printf("#");

            if (j < count) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}