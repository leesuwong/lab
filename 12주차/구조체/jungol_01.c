#include <stdio.h>

struct Student
{
    char name[21];
    char school[21];
    int grade;
};

int main()
{
    struct Student a;
    scanf("%20s %20s %d", a.name, a.school, &a.grade);
    printf("Name : %s\nSchool : %s\nGrade : %d\n", a.name, a.school, a.grade);
    return 0;
}
