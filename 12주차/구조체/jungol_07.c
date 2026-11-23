#include <stdio.h>

struct Person
{
    char name[101];
    int height;
};

int main()
{
    struct Person a[5];
    int min = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%100s %d", a[i].name, &a[i].height);
        if (a[i].height < a[min].height)
        {
            min = i;
        }
    }
    printf("%s %d\n", a[min].name, a[min].height);
    return 0;
}
