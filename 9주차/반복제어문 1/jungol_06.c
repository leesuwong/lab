#include <stdio.h>

int main(){
    int a;
    int cnt = 0;
    int sum = 0;
    double avg = 0;

    while (1)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        
        if (a != 0)
        {
            cnt++;
            sum+=a;
            avg = (double)sum/cnt;
        }
        
    }
    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", avg);
}