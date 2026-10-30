#include <stdio.h>

int main(){
    int a;
    int min = 101;
    int max = 0;
    while (1)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }else if (a > 100)
        {
            continue;
        }else if (a < 1)
        {
            continue;
        }
        
        
        if (a > max)
        {
            max = a;
        }else if (a < min)
        {
            min = a;
        }
        
    }
    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);
    
}