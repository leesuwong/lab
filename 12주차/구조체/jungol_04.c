#include <stdio.h>

struct Person
{
    char name[101];
    int age;
};

int main()
{
    struct Person a[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%100s %d", a[i].name, &a[i].age);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Name : %s\nAge  : %d\n", a[i].name, a[i].age);
    }
    return 0;
}
