#include <stdio.h>

struct Score
{
    char name[101];
    int kor, eng;
};

struct Score plus(struct Score a, struct Score b)
{
    struct Score result = {"Total", 0, 0};
    result.kor = a.kor + b.kor;
    result.eng = a.eng + b.eng;
    return result;
}

int main()
{
    struct Score a, b, result;
    scanf("%100s %d %d", a.name, &a.kor, &a.eng);
    scanf("%100s %d %d", b.name, &b.kor, &b.eng);
    result = plus(a, b);
    printf("%s %d %d\n", a.name, a.kor, a.eng);
    printf("%s %d %d\n", b.name, b.kor, b.eng);
    printf("%s %d %d\n", result.name, result.kor, result.eng);
    return 0;
}
