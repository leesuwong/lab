#include <stdio.h>

struct Student {
    char name[30];
    int korean;
    int english;
    int math;
};

int main(void) {
    struct Student s;
    FILE *fp;
    int menu, total;

    while (1) {
        printf("\n1. 성적 입력  2. 전체 성적 보기  0. 종료\n선택: ");
        if (scanf("%d", &menu) != 1 || menu == 0)
            break;

        if (menu == 1) {
            printf("이름 국어 영어 수학 순서로 입력: ");
            if (scanf("%29s %d %d %d", s.name, &s.korean, &s.english, &s.math) != 4) {
                printf("입력 형식이 잘못되었습니다.\n");
                return 1;
            }
            if (s.korean < 0 || s.korean > 100 || s.english < 0 || s.english > 100 ||
                s.math < 0 || s.math > 100) {
                printf("점수는 0부터 100까지 입력하세요.\n");
                continue;
            }

            fp = fopen("scores.txt", "a");
            if (fp == NULL) {
                printf("파일을 열 수 없습니다.\n");
                return 1;
            }
            fprintf(fp, "%s %d %d %d\n", s.name, s.korean, s.english, s.math);
            if (fclose(fp) != 0) {
                printf("파일 저장에 실패했습니다.\n");
                return 1;
            }
            printf("저장했습니다.\n");
        } else if (menu == 2) {
            fp = fopen("scores.txt", "r");
            if (fp == NULL) {
                printf("성적 파일을 열 수 없습니다.\n");
                continue;
            }
            printf("이름\t국어\t영어\t수학\t총점\t평균\n");
            while (fscanf(fp, "%29s %d %d %d", s.name, &s.korean, &s.english, &s.math) == 4) {
                total = s.korean + s.english + s.math;
                printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",
                       s.name, s.korean, s.english, s.math, total, total / 3.0);
            }
            fclose(fp);
        } else {
            printf("메뉴 번호를 다시 입력하세요.\n");
        }
    }

    return 0;
}
