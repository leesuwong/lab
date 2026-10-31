#include <stdio.h>

int main(){
    int a;
    int b;
    int sum = 0;
    int count = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b)
    {
        int c = a;
        b = a;
        a = c;
    }
    for (int i = a; i <= b; i++)
    {
        if (i%3==0 || i%5==0)
        {
            sum += i;
            count++;
        }
        
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f", (double)sum/count);
    
    
}