#include <stdio.h>

struct Person
{
    char name[101];
    int height;
};

int main()
{
    struct Person a[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%100s %d", a[i].name, &a[i].height);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s : %dcm\n", a[i].name, a[i].height);
    }
    return 0;
}
