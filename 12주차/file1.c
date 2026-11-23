#include <stdio.h>

int main(void) {
    FILE *file;
    int ch;

    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}
