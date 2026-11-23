#include <stdio.h>

struct Person
{
    char name[101];
    int age;
};

int main()
{
    struct Person a = {"Yejun", 12}, b;
    scanf("%100s %d", b.name, &b.age);
    printf("Your name: %s, age: %d\n", a.name, a.age);
    printf("Friend's name: %s, age: %d\n", b.name, b.age);
    return 0;
}
