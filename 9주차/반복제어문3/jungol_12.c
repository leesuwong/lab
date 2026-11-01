#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++) {
        int count;

        if (i <= n) {
            count = i;
        } else {
            count = 2 * n - i;
        }

        for (int j = 1; j <= count; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}