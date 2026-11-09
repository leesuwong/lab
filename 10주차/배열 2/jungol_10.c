#include <stdio.h>

int main()
{
    int score[4][4] = {0};
    for (int i = 0; i < 3; i++) {
        printf("%d번째 학생의 점수 ", i + 1);
        for (int j = 0; j < 3; j++) {
            if (scanf("%d", &score[i][j]) != 1) return 0;
            score[i][3] += score[i][j];
            score[3][j] += score[i][j];
            score[3][3] += score[i][j];
        }
    }
    printf("     국어 영어 수학 총점\n");
    for (int i = 0; i < 4; i++) {
        if (i < 3) printf("%2d번", i + 1);
        else printf("합계");
        for (int j = 0; j < 4; j++) printf(" %3d", score[i][j]);
        printf("\n");
    }
    return 0;
}
