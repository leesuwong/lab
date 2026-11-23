#include <stdio.h>

struct Person
{
    char name[101];
    int age;
};

int main()
{
    struct Person a;
    scanf("%100s %d", a.name, &a.age);
    printf("Your name is %s and you are %d years old.\n", a.name, a.age);
    return 0;
}
