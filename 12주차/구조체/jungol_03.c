#include <stdio.h>

struct School
{
    char name[31];
    int grade;
};

int main()
{
    struct School a = {"Jejuelementary", 6}, b;
    scanf("%30s %d", b.name, &b.grade);
    printf("%d grade in %s School\n", a.grade, a.name);
    printf("%d grade in %s School\n", b.grade, b.name);
    return 0;
}
