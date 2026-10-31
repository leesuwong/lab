#include <stdio.h>

int main(){
    int a;
    int sum = 0;
    double avg = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a);
        sum += a;
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum/5);
    
}