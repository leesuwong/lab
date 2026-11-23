#include <stdio.h>

struct Student {
    char name[30];
    int korean, english, math;
};

int main(void) {
    struct Student s;
    FILE *fp;
    int total;

    printf("이름 국어 영어 수학 입력: ");
    if (scanf("%29s %d %d %d", s.name, &s.korean, &s.english, &s.math) != 4) {
        printf("이름과 점수 세 개를 입력하세요.\n");
        return 1;
    }

    fp = fopen("scores.txt", "a");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }
    fprintf(fp, "%s %d %d %d\n", s.name, s.korean, s.english, s.math);
    fclose(fp);

    fp = fopen("scores.txt", "r");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }

    printf("이름 국어 영어 수학 총점 평균\n");
    while (fscanf(fp, "%29s %d %d %d", s.name, &s.korean, &s.english, &s.math) == 4) {
        total = s.korean + s.english + s.math;
        printf("%s %d %d %d %d %.1f\n", s.name, s.korean, s.english, s.math,
               total, total / 3.0);
    }
    fclose(fp);
    return 0;
}
