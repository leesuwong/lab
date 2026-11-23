#include <stdio.h>
#include <string.h>

struct Person
{
    char name[101];
    char tel[101];
    char addr[101];
};

int main()
{
    struct Person a[3];
    int min = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%100s %100s %100s", a[i].name, a[i].tel, a[i].addr);
        if (strcmp(a[i].name, a[min].name) < 0)
        {
            min = i;
        }
    }
    printf("name : %s\ntel : %s\naddr : %s\n", a[min].name, a[min].tel, a[min].addr);
    return 0;
}
