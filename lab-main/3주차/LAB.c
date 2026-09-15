#pragma warning(disable: 4996)
#include <stdio.h>

int main() 
{
    int powerCinsumed, costPerkW;

    printf("사용한 전력량(kw)을 입력하세요: ");
    scanf("%d", &powerCinsumed);
    printf("전력 요금(1kW당 비용)을 입력하세요: ");
    scanf("%d", &costPerkW);

    long long totalCost = (long long)powerCinsumed * costPerkW;

    printf("전기 요금: %lld\n", totalCost);

    return 0;
}