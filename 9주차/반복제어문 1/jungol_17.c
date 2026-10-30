#include <stdio.h>

int main(){
    int a;
    int c;

    while (1)
    {
        scanf("%d",&a);
        if (a == 0)
        {
            break;
        }
        
        else if (a%3 == 0)
        {
            continue;
        }else if (a%5 == 0)
        {
            continue;
        }
        
        
        
        c++;
        
    }
    printf("%d", c);
    
}