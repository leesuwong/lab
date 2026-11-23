#include <stdio.h>

struct Person
{
    char name[101];
    char tel[101];
    char addr[101];
};

int main()
{
    struct Person a;
    scanf("%100s %100s %100s", a.name, a.tel, a.addr);
    printf("name : %s\ntel : %s\naddr : %s\n", a.name, a.tel, a.addr);
    return 0;
}
