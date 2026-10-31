#include <stdio.h>

int main(){
    int a;
    int b;
    int sum;
    double avg;

    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        sum += b;

    }
    avg = (double)sum/a;
    printf("avg : %.1f\n", avg);
    if (avg >= 80)
    {
        printf("pass");
    }else
        printf("fail");
    
    
}