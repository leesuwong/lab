#include <stdio.h>

int main(){
    int a;
    int s;
    int l;

    while (1)
    {
        scanf("%d", &a);
        
        if (a < 50)
        {
            s++;
        }else
            l++;
            
        if (a >= 100)
        {
            break;
        }
        
    }
    printf("small : %d\n", s);
    printf("large : %d\n", l);
}