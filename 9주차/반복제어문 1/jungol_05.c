#include <stdio.h>

int main(){
    int a;

    while (1)
    {
        scanf("%d", &a);

        if (a > 0)
        {
            printf("positive number\n");
        }else if (a < 0)
        {
            printf("negative number\n");
        }else if (a == 0)
        {
            break;
        }
        
        
        
    }
    
}