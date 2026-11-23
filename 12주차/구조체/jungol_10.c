#include <stdio.h>

struct Point
{
    double x, y;
};

int main()
{
    struct Point a, b, center;
    scanf("%lf %lf", &a.x, &a.y);
    scanf("%lf %lf", &b.x, &b.y);
    center.x = (a.x + b.x) / 2;
    center.y = (a.y + b.y) / 2;
    printf("Center point = (%.1f, %.1f)\n", center.x, center.y);
    return 0;
}
