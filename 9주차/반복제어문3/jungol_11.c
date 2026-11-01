#include <stdio.h>

int main(void) {
    int num = 1;
    char ch = 'A';

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 4; j++) {
            if (j <= 4 - i) {
                printf("%d", num);
                num++;
            } else {
                printf("%c", ch);
                ch++;
            }

            if (j < 4) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}