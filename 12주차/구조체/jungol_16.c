#include <stdio.h>

struct Student
{
    char name[21];
    int score[3];
    int total;
};

void input(struct Student a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%20s", a[i].name);
        a[i].total = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i].score[j]);
            a[i].total += a[i].score[j];
        }
    }
}

void sort(struct Student a[], int n)
{
    struct Student temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j].total < a[j + 1].total)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void output(struct Student a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d %d %d\n", a[i].name, a[i].score[0],
               a[i].score[1], a[i].score[2], a[i].total);
    }
}

int main()
{
    int n;
    struct Student a[10];
    scanf("%d", &n);
    input(a, n);
    sort(a, n);
    output(a, n);
    return 0;
}
