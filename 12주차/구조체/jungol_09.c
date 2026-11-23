#include <stdio.h>
#include <string.h>

struct Person
{
    char name[101];
    int height;
    double weight;
};

int main()
{
    struct Person a[5], temp;
    for (int i = 0; i < 5; i++)
    {
        scanf("%100s %d %lf", a[i].name, &a[i].height, &a[i].weight);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (strcmp(a[j].name, a[j + 1].name) > 0)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s %d %.1f\n", a[i].name, a[i].height, a[i].weight);
    }
    return 0;
}
