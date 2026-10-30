#include <stdio.h>

int main(){
    int a;
    int sum;
    double avg;
    int c;

    while (1)
    {
        scanf("%d ", &a);

        if (0>a || a>100)
        {
            break;
        }

        c++;
        sum+=a;
        avg = (double)sum/c;
        
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f", avg);
    
}