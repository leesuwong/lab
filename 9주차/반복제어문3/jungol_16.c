#include <stdio.h>

int main(void) {
    char ch = 'A';
    int num = 0;

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (j <= 4 - i) {
                printf("%c", ch);
                ch++;
            } else {
                printf("%d", num);
                num++;
            }

            if (j < 3) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}