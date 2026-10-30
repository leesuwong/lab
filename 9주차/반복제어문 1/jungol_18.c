#include <stdio.h>

int main(){
    int w;
    int h;
    double sum;
    char a;
    while (1)
    {
        scanf("%d", &w);
        scanf("%d\n", &h);
        sum = 0.5*(double)w*(double)h;
        printf("Triangle area = %.1f\n", sum);
        printf("Continue? ");
        scanf("%c\n", &a);
        if (a == 'y')
        {
            continue;
        }else if (a == 'Y')
        {
            continue;
        }else{
            break;
        }
        
        
    }
    
}