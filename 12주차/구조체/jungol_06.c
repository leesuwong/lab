#include <stdio.h>

struct Student
{
    char name[101];
    int score;
};

int main()
{
    struct Student a[5];
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%100s %d", a[i].name, &a[i].score);
        if (a[i].score > a[max].score)
        {
            max = i;
        }
    }
    printf("%s %d\n", a[max].name, a[max].score);
    return 0;
}
